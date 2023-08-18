#include "raygui-cpp/ColorPanel.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ColorPanel::ColorPanel() : bounds({ 0, 0, 0, 0 }), text(""), color({ 0, 0, 0, 0 }) {}

ColorPanel::ColorPanel(::Rectangle bounds, const char *text, ::Color color)
    : bounds(bounds), text(text), color(color) {}

ColorPanel::ColorPanel(float x, float y, float width, float height, const char *text, ::Color color)
    : bounds({ x, y, width, height }), text(text), color(color) {}

ColorPanel::ColorPanel(::Vector2 position, ::Vector2 size, const char *text, ::Color color)
    : bounds({ position.x, position.y, size.x, size.y }), text(text), color(color) {}

ColorPanel::~ColorPanel() {
    delete text;
}

::Rectangle ColorPanel::GetBounds() const {
    return bounds;
}

void ColorPanel::SetBounds(::Rectangle newBounds) {
    this->bounds = newBounds;
}

const char *ColorPanel::GetText() const {
    return text;
}

void ColorPanel::SetText(const char *newText) {
    this->text = newText;
}

::Color ColorPanel::GetColor() const {
    return color;
}

void ColorPanel::SetColor(::Color newColor) {
    this->color = newColor;
}

::Color ColorPanel::Show() const {
    return ::GuiColorPanel(bounds, text, color);
}

RAYGUI_CPP_END_NAMESPACE
