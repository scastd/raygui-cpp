#ifndef RAYGUI_CPP_COLOR_PICKER_HSV_H
#define RAYGUI_CPP_COLOR_PICKER_HSV_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ColorPickerHSV : public Component<int> {
public:
    ColorPickerHSV();
    ColorPickerHSV(const char *text, ::Vector3 colorHsv);
    ColorPickerHSV(Bounds bounds, const char *text, ::Vector3 colorHsv);

    RAYGUI_CPP_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_CPP_NODISCARD ::Vector3 GetColorHsv() const;
    void SetColorHsv(::Vector3 newColorHsv);

    RAYGUI_CPP_NODISCARD int Show() override;

private:
    const char *text;
    ::Vector3 colorHsv;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_COLOR_PICKER_HSV_H
