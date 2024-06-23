#include "raygui-cpp/ColorPicker.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ColorPicker::ColorPicker() : text(""), color({ 0, 0, 0, 0 }) {}

ColorPicker::ColorPicker(const char *text, ::Color color) : text(text), color(color) {}

ColorPicker::ColorPicker(Bounds bounds, const char *text, ::Color color)
    : Component<int>(bounds), text(text), color(color) {}

const char *ColorPicker::GetText() const {
    return text;
}

void ColorPicker::SetText(const char *newText) {
    this->text = newText;
}

::Color ColorPicker::GetColor() const {
    return color;
}

void ColorPicker::SetColor(::Color newColor) {
    this->color = newColor;
}

int ColorPicker::Show() {
    WITH_STATE_RENDER(int ret = ::GuiColorPicker(GetBounds().GetRectangle(), text, &color))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
