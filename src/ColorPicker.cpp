#include "ColorPicker.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ColorPicker::ColorPicker() : bounds({ 0, 0, 0, 0 }), text(""), color({ 0, 0, 0, 0 }) {}

ColorPicker::ColorPicker(Rectangle bounds, const char *text, Color color) : bounds(bounds), text(text), color(color) {}

ColorPicker::ColorPicker(float x, float y, float width, float height, const char *text, Color color)
    : bounds({ x, y, width, height }), text(text), color(color) {}

ColorPicker::ColorPicker(Vector2 position, Vector2 size, const char *text, Color color)
    : bounds({ position.x, position.y, size.x, size.y }), text(text), color(color) {}

ColorPicker::~ColorPicker() {
    delete text;
}

Rectangle ColorPicker::GetBounds() const {
    return bounds;
}

void ColorPicker::SetBounds(Rectangle newBounds) {
    this->bounds = newBounds;
}

const char *ColorPicker::GetText() const {
    return text;
}

void ColorPicker::SetText(const char *newText) {
    this->text = newText;
}

Color ColorPicker::GetColor() const {
    return color;
}

void ColorPicker::SetColor(Color newColor) {
    this->color = newColor;
}

Color ColorPicker::Show() const {
    return ::GuiColorPicker(bounds, text, color);
}

RAYGUI_CPP_END_NAMESPACE
