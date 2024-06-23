#include "raygui-cpp/ColorBarHue.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ColorBarHue::ColorBarHue() : text(""), value(0) {}

ColorBarHue::ColorBarHue(const char *text, float value) : text(text), value(value) {}

ColorBarHue::ColorBarHue(Bounds bounds, const char *text, float value)
    : Component<int>(bounds), text(text), value(value) {}

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

int ColorBarHue::Show() {
    WITH_STATE_RENDER(int ret = ::GuiColorBarHue(GetBounds().GetRectangle(), text, &value))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
