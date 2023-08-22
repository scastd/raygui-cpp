#include "raygui-cpp/ColorPanel.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ColorPanel::ColorPanel() : text(""), color({ 0, 0, 0, 0 }) {}

ColorPanel::ColorPanel(const char *text, Color color) : text(text), color(color) {}

ColorPanel::ColorPanel(Bounds bounds, const char *text, ::Color color)
    : Component<::Color>(bounds), text(text), color(color) {}

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
    return ::GuiColorPanel(GetBounds().GetRectangle(), text, color);
}

RAYGUI_CPP_END_NAMESPACE
