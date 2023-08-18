#include "raygui-cpp/ColorBarHue.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ColorBarHue::ColorBarHue() : bounds({0, 0, 0, 0}), text(""), value(0) {}

ColorBarHue::ColorBarHue(Rectangle bounds, const char *text, float value) : bounds(bounds), text(text), value(value) {}

ColorBarHue::ColorBarHue(float x, float y, float width, float height, const char *text, float value) : bounds({x, y, width, height}), text(text), value(value) {}

ColorBarHue::ColorBarHue(Vector2 position, Vector2 size, const char *text, float value) : bounds({position.x, position.y, size.x, size.y}), text(text), value(value) {}

ColorBarHue::~ColorBarHue() {
    delete text;
}

Rectangle ColorBarHue::GetBounds() const {
    return bounds;
}

void ColorBarHue::SetBounds(Rectangle newBounds) {
    this->bounds = newBounds;
}

const char *ColorBarHue::GetText() const {
    return text;
}

void ColorBarHue::SetText(const char *newText) {
    this->text = newText;
}

float ColorBarHue::GetValue() const {
    return value;
}

void ColorBarHue::SetValue(float newValue) {
    this->value = newValue;
}

float ColorBarHue::Show() const {
    return ::GuiColorBarHue(bounds, text, value);
}

RAYGUI_CPP_END_NAMESPACE
