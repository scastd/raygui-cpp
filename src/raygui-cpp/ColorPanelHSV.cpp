#include "raygui-cpp/ColorPanelHSV.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ColorPanelHSV::ColorPanelHSV() : text(""), colorHsv({}) {}

ColorPanelHSV::ColorPanelHSV(const char *text, ::Vector3 colorHsv) : text(text), colorHsv(colorHsv) {}

ColorPanelHSV::ColorPanelHSV(Bounds bounds, const char *text, ::Vector3 colorHsv)
    : Component<int>(bounds), text(text), colorHsv(colorHsv) {}

const char *ColorPanelHSV::GetText() const {
    return text;
}

void ColorPanelHSV::SetText(const char *newText) {
    this->text = newText;
}

::Vector3 ColorPanelHSV::GetColorHsv() const {
    return colorHsv;
}

void ColorPanelHSV::SetColorHsv(::Vector3 newColorHsv) {
    this->colorHsv = newColorHsv;
}

int ColorPanelHSV::Show() {
    WITH_STATE_RENDER(int ret = ::GuiColorPanelHSV(GetBounds().GetRectangle(), text, &colorHsv))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
