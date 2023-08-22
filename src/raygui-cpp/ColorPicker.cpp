#include "raygui-cpp/ColorPicker.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ColorPicker::ColorPicker() : Component<::Color>({}), text(""), color({ 0, 0, 0, 0 }) {}

ColorPicker::ColorPicker(Bounds bounds, const char *text, ::Color color)
    : Component<::Color>(bounds), text(text), color(color) {}

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

::Color ColorPicker::Show() const {
    return ::GuiColorPicker(GetBounds().GetRectangle(), text, color);
}

RAYGUI_CPP_END_NAMESPACE
