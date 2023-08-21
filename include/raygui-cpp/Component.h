#ifndef RAYGUI_CPP_COMPONENT_H
#define RAYGUI_CPP_COMPONENT_H

#include "Bounds.h"
#include "Directives.h"
#include "Style.h"

RAYGUI_CPP_BEGIN_NAMESPACE

template<typename T>
class Component {
public:
    explicit Component(Bounds bounds) : m_bounds(bounds) {}

    virtual ~Component() = default;

    virtual T Show() const = 0;

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
        Bounds parentBounds;

        if (m_parent != nullptr) {
            parentBounds = m_parent->GetBounds();
        } else {
            parentBounds = Bounds(0, 0, static_cast<float>(GetScreenWidth()), static_cast<float>(GetScreenHeight()));
        }

        Style::Margin margin = m_style.GetMargin();

        switch (m_style.GetPosition()) {
            case Style::Position::TOP_LEFT:
                m_bounds.SetX(parentBounds.GetX() + margin.left);
                m_bounds.SetY(parentBounds.GetY() + margin.top);
                break;
            case Style::Position::TOP_CENTER:
                m_bounds.SetX(parentBounds.GetX() + parentBounds.GetWidth() / 2 - m_bounds.GetWidth() / 2);
                m_bounds.SetY(parentBounds.GetY() + margin.top);
                break;
            case Style::Position::TOP_RIGHT:
                m_bounds.SetX(parentBounds.GetX() + parentBounds.GetWidth() - m_bounds.GetWidth() - margin.right);
                m_bounds.SetY(parentBounds.GetY() + margin.top);
                break;
            case Style::Position::CENTER_LEFT:
                m_bounds.SetX(parentBounds.GetX() + margin.left);
                m_bounds.SetY(parentBounds.GetY() + parentBounds.GetHeight() / 2 - m_bounds.GetHeight() / 2);
                break;
            case Style::Position::CENTER:
                m_bounds.SetX(parentBounds.GetX() + parentBounds.GetWidth() / 2 - m_bounds.GetWidth() / 2);
                m_bounds.SetY(parentBounds.GetY() + parentBounds.GetHeight() / 2 - m_bounds.GetHeight() / 2);
                break;
            case Style::Position::CENTER_RIGHT:
                m_bounds.SetX(parentBounds.GetX() + parentBounds.GetWidth() - m_bounds.GetWidth() - margin.right);
                m_bounds.SetY(parentBounds.GetY() + parentBounds.GetHeight() / 2 - m_bounds.GetHeight() / 2);
                break;
            case Style::Position::BOTTOM_LEFT:
                m_bounds.SetX(parentBounds.GetX() + margin.left);
                m_bounds.SetY(parentBounds.GetY() + parentBounds.GetHeight() - m_bounds.GetHeight() - margin.bottom);
                break;
            case Style::Position::BOTTOM_CENTER:
                m_bounds.SetX(parentBounds.GetX() + parentBounds.GetWidth() / 2 - m_bounds.GetWidth() / 2);
                m_bounds.SetY(parentBounds.GetY() + parentBounds.GetHeight() - m_bounds.GetHeight() - margin.bottom);
                break;
            case Style::Position::BOTTOM_RIGHT:
                m_bounds.SetX(parentBounds.GetX() + parentBounds.GetWidth() - m_bounds.GetWidth() - margin.right);
                m_bounds.SetY(parentBounds.GetY() + parentBounds.GetHeight() - m_bounds.GetHeight() - margin.bottom);
                break;
        }
    }

    RAYGUI_NODISCARD Style GetStyle() const {
        return m_style;
    }

    void SetStyle(Style newStyle) {
        m_style = newStyle;
    }

private:
    Bounds m_bounds;
    Component *m_parent = nullptr;
    Style m_style = Style(Style::Position::TOP_LEFT);
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_COMPONENT_H
