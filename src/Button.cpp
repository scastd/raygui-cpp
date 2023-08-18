#include "Button.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Button::Button() : bounds({ 0, 0, 0, 0 }), text("") {}

Button::Button(Rectangle bounds, const char *text) : bounds(bounds), text(text) {}

Button::Button(float x, float y, float width, float height, const char *text)
    : bounds({ x, y, width, height }), text(text) {}

Button::Button(Vector2 position, Vector2 size, const char *text)
    : bounds({ position.x, position.y, size.x, size.y }), text(text) {}

Rectangle Button::GetBounds() const {
    return bounds;
}

void Button::SetBounds(Rectangle newBounds) {
    this->bounds = newBounds;
}

const char *Button::GetText() const {
    return text;
}

void Button::SetText(const char *newText) {
    this->text = newText;
}

bool Button::Show() const {
    return ::GuiButton(bounds, text);
}

RAYGUI_CPP_END_NAMESPACE
