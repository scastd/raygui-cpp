#ifndef RAYGUI_CPP_COMPONENT_H
#define RAYGUI_CPP_COMPONENT_H

#include "Bounds.h"
#include "Directives.h"
#include "Globals.h"
#include "Style.h"
#include <any>

RAYGUI_CPP_BEGIN_NAMESPACE

template<typename T>
class Component {
public:
    Component() : m_bounds(0, 0, 0, 0) {}

    explicit Component(Bounds bounds) : m_bounds(bounds) {}

    virtual ~Component() = default;

    virtual T Show() = 0;

    RAYGUI_NODISCARD Bounds GetBounds() const {
        return m_bounds;
    }

    void SetBounds(Bounds newBounds) {
        m_bounds = newBounds;
    }

    RAYGUI_NODISCARD Component *GetParent() const {
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

        Margin margin = m_style.GetMargin();

        switch (m_style.GetPosition()) {
            case Style::Position::TOP_LEFT:
                m_bounds.SetX(bounds.GetX() + margin.h);
                m_bounds.SetY(bounds.GetY() + margin.v);
                break;
            case Style::Position::TOP_CENTER:
                m_bounds.SetX(bounds.GetX() + bounds.GetWidth() / 2 - m_bounds.GetWidth() / 2 + margin.h);
                m_bounds.SetY(bounds.GetY() + margin.v);
                break;
            case Style::Position::TOP_RIGHT:
                m_bounds.SetX(bounds.GetX() + bounds.GetWidth() - m_bounds.GetWidth() + margin.h);
                m_bounds.SetY(bounds.GetY() + margin.v);
                break;
            case Style::Position::CENTER_LEFT:
                m_bounds.SetX(bounds.GetX() + margin.h);
                m_bounds.SetY(bounds.GetY() + bounds.GetHeight() / 2 - m_bounds.GetHeight() / 2 + margin.v);
                break;
            case Style::Position::CENTER:
                m_bounds.SetX(bounds.GetX() + bounds.GetWidth() / 2 - m_bounds.GetWidth() / 2 + margin.h);
                m_bounds.SetY(bounds.GetY() + bounds.GetHeight() / 2 - m_bounds.GetHeight() / 2 + margin.v);
                break;
            case Style::Position::CENTER_RIGHT:
                m_bounds.SetX(bounds.GetX() + bounds.GetWidth() - m_bounds.GetWidth() + margin.h);
                m_bounds.SetY(bounds.GetY() + bounds.GetHeight() / 2 - m_bounds.GetHeight() / 2 + margin.v);
                break;
            case Style::Position::BOTTOM_LEFT:
                m_bounds.SetX(bounds.GetX() + margin.h);
                m_bounds.SetY(bounds.GetY() + bounds.GetHeight() - m_bounds.GetHeight() + margin.v);
                break;
            case Style::Position::BOTTOM_CENTER:
                m_bounds.SetX(bounds.GetX() + bounds.GetWidth() / 2 - m_bounds.GetWidth() / 2 + margin.h);
                m_bounds.SetY(bounds.GetY() + bounds.GetHeight() - m_bounds.GetHeight() + margin.v);
                break;
            case Style::Position::BOTTOM_RIGHT:
                m_bounds.SetX(bounds.GetX() + bounds.GetWidth() - m_bounds.GetWidth() + margin.h);
                m_bounds.SetY(bounds.GetY() + bounds.GetHeight() - m_bounds.GetHeight() + margin.v);
                break;
        }
    }

    RAYGUI_NODISCARD Style GetStyle() const {
        return m_style;
    }

    void SetStyle(Style newStyle) {
        m_style = newStyle;
    }

    RAYGUI_NODISCARD std::any GetData() const {
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

private:
    Bounds m_bounds;
    Component *m_parent = nullptr;
    Style m_style = Style(Style::Position::TOP_LEFT);
    std::any m_data = nullptr;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_COMPONENT_H
