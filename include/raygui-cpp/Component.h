#ifndef RAYGUI_CPP_COMPONENT_H
#define RAYGUI_CPP_COMPONENT_H

#include "Bounds.h"
#include "Directives.h"
#include "Globals.h"
#include "Style.h"

#include <any>
#include <functional>
#include <list>

#define WITH_STATE_RENDER(__code__)                                                                                    \
    Globals::GuiSetState(IsEnabled() ? STATE_NORMAL : STATE_DISABLED);                                                 \
    __code__;                                                                                                          \
    Globals::GuiEnable();

RAYGUI_CPP_BEGIN_NAMESPACE

template<typename T>
class Component {
public:
    using Callback = std::function<void()>;

    Component() : m_bounds(0, 0, 0, 0) {}

    explicit Component(Bounds bounds) : m_bounds(bounds) {}

    virtual ~Component() = default;

    virtual T Show() = 0;

    RAYGUI_CPP_NODISCARD Bounds GetBounds() const {
        return m_bounds;
    }

    void SetBounds(Bounds newBounds) {
        m_bounds = newBounds;
    }

    RAYGUI_CPP_NODISCARD Component *GetParent() const {
        return m_parent;
    }

    void SetParent(Component *newParent) {
        m_parent = newParent;
    }

    void Update() {
        Bounds bounds;

        if (m_parent != nullptr) {
            bounds = m_parent->GetBounds();
        } else {
            bounds = Bounds::WindowBounds();
        }

        if (m_style.GetPosition() != Style::Position::NONE) {
            UpdateBounds(bounds);
        }

        // Update children
        for (const auto &child: children) {
            child->Update();
        }

        CallOnUpdate();
    }

    RAYGUI_CPP_NODISCARD Style GetStyle() const {
        return m_style;
    }

    void SetStyle(Style newStyle) {
        m_style = newStyle;
    }

    RAYGUI_CPP_NODISCARD std::any GetData() const {
        return m_data;
    }

    void SetData(std::any newData) {
        m_data = std::move(newData);
    }

    T ShowAndEnableOnCondition(bool condition) {
        Globals::GuiSetState(condition ? STATE_NORMAL : STATE_DISABLED);
        T result = Show();
        Globals::GuiSetState(STATE_NORMAL);
        return result;
    }

    /**
     * @brief Adds a child to the component.
     *
     * @param child The child to add.
     *
     * @note This method must be implemented by the derived class that supports children.
     */
    virtual void AddChild(Component *child) {
        (void) child;
    }

    void RemoveChild(Component *child) {
        if (children.empty()) {
            return;
        }

        children.remove(child);
        child->SetParent(nullptr);
    }

    void ClearChildren() {
        children.clear();
    }

    virtual void OnClick(const Callback &onClick) {
        // Noop here. Should be overridden.
    }

    virtual void OnUpdate(const Callback &onUpdate) {
        // Noop here. Should be overridden.
    }

    RAYGUI_CPP_NODISCARD bool IsEnabled() const {
        return m_enabled;
    }

    void Enable() {
        m_enabled = true;
    }

    void Disable() {
        m_enabled = false;
    }

protected:
    void AddChildInternal(Component *child) {
        children.push_back(child);
        child->SetParent(this);
    }

    void ShowChildren() {
        for (auto &child: children) {
            child->Show();
        }
    }

    RAYGUI_CPP_NODISCARD bool HasOnClick() const {
        return m_onClick != nullptr;
    }

    void SetOnClick(Callback onClick) {
        m_onClick = std::move(onClick);
    }

    RAYGUI_CPP_NODISCARD bool HasOnUpdate() const {
        return m_onUpdate != nullptr;
    }

    void SetOnUpdate(Callback onUpdate) {
        m_onUpdate = std::move(onUpdate);
    }

    void CallOnClick() const {
        if (m_onClick && m_enabled) {
            m_onClick();
        }
    }

    void CallOnUpdate() const {
        if (m_onUpdate) {
            m_onUpdate();
        }
    }

private:
    Bounds m_bounds;
    Component *m_parent = nullptr;
    Style m_style = Style(Style::Position::NONE);
    std::list<Component *> children;
    std::any m_data = nullptr;
    bool m_enabled = true;

    Callback m_onClick;
    Callback m_onUpdate;

    void UpdateBounds(Bounds bounds) {
        auto [marginH, marginV] = m_style.GetMargin();
        auto [boundsX, boundsY, boundsWidth, boundsHeight] = bounds.GetRectangle();
        auto [mBoundsWidth, mBoundsHeight] = m_bounds.GetSize();
        float newX;
        float newY;

        switch (m_style.GetPosition()) {
            case Style::Position::TOP_LEFT:
                newX = boundsX + marginH;
                newY = boundsY + marginV;
                break;
            case Style::Position::TOP_CENTER:
                newX = boundsX + boundsWidth / 2 - mBoundsWidth / 2 + marginH;
                newY = boundsY + marginV;
                break;
            case Style::Position::TOP_RIGHT:
                newX = boundsX + boundsWidth - mBoundsWidth + marginH;
                newY = boundsY + marginV;
                break;
            case Style::Position::CENTER_LEFT:
                newX = boundsX + marginH;
                newY = boundsY + boundsHeight / 2 - mBoundsHeight / 2 + marginV;
                break;
            case Style::Position::CENTER:
                newX = boundsX + boundsWidth / 2 - mBoundsWidth / 2 + marginH;
                newY = boundsY + boundsHeight / 2 - mBoundsHeight / 2 + marginV;
                break;
            case Style::Position::CENTER_RIGHT:
                newX = boundsX + boundsWidth - mBoundsWidth + marginH;
                newY = boundsY + boundsHeight / 2 - mBoundsHeight / 2 + marginV;
                break;
            case Style::Position::BOTTOM_LEFT:
                newX = boundsX + marginH;
                newY = boundsY + boundsHeight - mBoundsHeight + marginV;
                break;
            case Style::Position::BOTTOM_CENTER:
                newX = boundsX + boundsWidth / 2 - mBoundsWidth / 2 + marginH;
                newY = boundsY + boundsHeight - mBoundsHeight + marginV;
                break;
            case Style::Position::BOTTOM_RIGHT:
                newX = boundsX + boundsWidth - mBoundsWidth + marginH;
                newY = boundsY + boundsHeight - mBoundsHeight + marginV;
                break;
            case Style::Position::NONE:
            default:
                newX = boundsX + marginH;
                newY = boundsY + marginV;
                break;
        }

        m_bounds.SetPosition(newX, newY);
    }
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_COMPONENT_H
