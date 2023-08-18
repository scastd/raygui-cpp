#include "raygui-cpp/Panel.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Panel::Panel() : bounds({ 0, 0, 0, 0 }), text("") {}

Panel::Panel(::Rectangle bounds, const char *text) : bounds(bounds), text(text) {}

Panel::Panel(float x, float y, float width, float height, const char *text)
    : bounds({ x, y, width, height }), text(text) {}

Panel::Panel(::Vector2 position, ::Vector2 size, const char *text)
    : bounds({ position.x, position.y, size.x, size.y }), text(text) {}

::Rectangle Panel::GetBounds() const {
    return bounds;
}

void Panel::SetBounds(::Rectangle newBounds) {
    this->bounds = newBounds;
}

const char *Panel::GetText() const {
    return text;
}

void Panel::SetText(const char *newText) {
    this->text = newText;
}

void Panel::Show() const {
    ::GuiPanel(bounds, text);
}

RAYGUI_CPP_END_NAMESPACE
