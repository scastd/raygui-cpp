#ifndef RAYGUI_CPP_COLOR_PANEL_HSV_H
#define RAYGUI_CPP_COLOR_PANEL_HSV_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ColorPanelHSV : public Component<int> {
public:
    ColorPanelHSV();
    ColorPanelHSV(const char *text, ::Vector3 colorHsv);
    ColorPanelHSV(Bounds bounds, const char *text, ::Vector3 colorHsv);

    RAYGUI_CPP_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_CPP_NODISCARD ::Vector3 GetColorHsv() const;
    void SetColorHsv(::Vector3 newColorHsv);

    RAYGUI_CPP_NODISCARD int Show(bool canClick) override;

private:
    const char *text;
    ::Vector3 colorHsv;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_COLOR_PANEL_HSV_H
