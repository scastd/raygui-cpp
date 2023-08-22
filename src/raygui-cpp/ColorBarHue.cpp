#include "raygui-cpp/ColorBarHue.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ColorBarHue::ColorBarHue() : Component<float>({}), text(""), value(0) {}

ColorBarHue::ColorBarHue(Bounds bounds, const char *text, float value)
    : Component<float>(bounds), text(text), value(value) {}

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
    return ::GuiColorBarHue(GetBounds().GetRectangle(), text, value);
}

RAYGUI_CPP_END_NAMESPACE
