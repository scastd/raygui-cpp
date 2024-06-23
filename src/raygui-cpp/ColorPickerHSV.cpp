#include "raygui-cpp/ColorPickerHSV.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ColorPickerHSV::ColorPickerHSV() : text(""), colorHsv({}) {}

ColorPickerHSV::ColorPickerHSV(const char *text, ::Vector3 colorHsv) : text(text), colorHsv(colorHsv) {}

ColorPickerHSV::ColorPickerHSV(Bounds bounds, const char *text, ::Vector3 colorHsv)
    : Component<int>(bounds), text(text), colorHsv(colorHsv) {}

const char *ColorPickerHSV::GetText() const {
    return text;
}

void ColorPickerHSV::SetText(const char *newText) {
    this->text = newText;
}

::Vector3 ColorPickerHSV::GetColorHsv() const {
    return colorHsv;
}

void ColorPickerHSV::SetColorHsv(::Vector3 newColorHsv) {
    this->colorHsv = newColorHsv;
}

int ColorPickerHSV::Show() {
    WITH_STATE_RENDER(int ret = ::GuiColorPickerHSV(GetBounds().GetRectangle(), text, &colorHsv))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
