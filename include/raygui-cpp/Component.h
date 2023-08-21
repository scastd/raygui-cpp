#ifndef RAYGUI_CPP_COMPONENT_H
#define RAYGUI_CPP_COMPONENT_H

#include "Bounds.h"
#include "Directives.h"
#include "Style.h"

RAYGUI_CPP_BEGIN_NAMESPACE

template<typename T>
class Component {
public:
    explicit Component(Bounds bounds) : bounds(bounds) {}

    virtual ~Component() = default;

    virtual T Show() const = 0;

    RAYGUI_NODISCARD Bounds GetBounds() const {
        return bounds;
    }

    void SetBounds(Bounds newBounds) {
        bounds = newBounds;
    }

    RAYGUI_NODISCARD Component *GetParent() const {
        return parent;
    }

    void SetParent(Component *newParent) {
        parent = newParent;
    }

    void RecalculateBounds(Style style) {
        Bounds parentBounds;

        if (parent != nullptr) {
            parentBounds = parent->GetBounds();
        } else {
            parentBounds = Bounds(0, 0, static_cast<float>(GetScreenWidth()), static_cast<float>(GetScreenHeight()));
        }

        Style::Margin margin = style.GetMargin();

        switch (style.GetPosition()) {
            case Style::Position::TOP_LEFT:
                bounds.SetX(parentBounds.GetX() + margin.left);
                bounds.SetY(parentBounds.GetY() + margin.top);
                break;
            case Style::Position::TOP_CENTER:
                bounds.SetX(parentBounds.GetX() + parentBounds.GetWidth() / 2 - bounds.GetWidth() / 2);
                bounds.SetY(parentBounds.GetY() + margin.top);
                break;
            case Style::Position::TOP_RIGHT:
                bounds.SetX(parentBounds.GetX() + parentBounds.GetWidth() - bounds.GetWidth() - margin.right);
                bounds.SetY(parentBounds.GetY() + margin.top);
                break;
            case Style::Position::CENTER_LEFT:
                bounds.SetX(parentBounds.GetX() + margin.left);
                bounds.SetY(parentBounds.GetY() + parentBounds.GetHeight() / 2 - bounds.GetHeight() / 2);
                break;
            case Style::Position::CENTER:
                bounds.SetX(parentBounds.GetX() + parentBounds.GetWidth() / 2 - bounds.GetWidth() / 2);
                bounds.SetY(parentBounds.GetY() + parentBounds.GetHeight() / 2 - bounds.GetHeight() / 2);
                break;
            case Style::Position::CENTER_RIGHT:
                bounds.SetX(parentBounds.GetX() + parentBounds.GetWidth() - bounds.GetWidth() - margin.right);
                bounds.SetY(parentBounds.GetY() + parentBounds.GetHeight() / 2 - bounds.GetHeight() / 2);
                break;
            case Style::Position::BOTTOM_LEFT:
                bounds.SetX(parentBounds.GetX() + margin.left);
                bounds.SetY(parentBounds.GetY() + parentBounds.GetHeight() - bounds.GetHeight() - margin.bottom);
                break;
            case Style::Position::BOTTOM_CENTER:
                bounds.SetX(parentBounds.GetX() + parentBounds.GetWidth() / 2 - bounds.GetWidth() / 2);
                bounds.SetY(parentBounds.GetY() + parentBounds.GetHeight() - bounds.GetHeight() - margin.bottom);
                break;
            case Style::Position::BOTTOM_RIGHT:
                bounds.SetX(parentBounds.GetX() + parentBounds.GetWidth() - bounds.GetWidth() - margin.right);
                bounds.SetY(parentBounds.GetY() + parentBounds.GetHeight() - bounds.GetHeight() - margin.bottom);
                break;
        }
    }

private:
    Bounds bounds;
    Component *parent = nullptr;

    // NOTE: I can always calculate the rendering position from the parent's bounds. If the parent is null, then the
    // position is specified respectively to the screen (or window).
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_COMPONENT_H
