#ifndef RAYGUI_CPP_COLOR_BAR_HUE_H
#define RAYGUI_CPP_COLOR_BAR_HUE_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ColorBarHue : public Component<float> {
public:
    ColorBarHue();
    ColorBarHue(const char *text, float value);
    ColorBarHue(Bounds bounds, const char *text, float value);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD float GetValue() const;
    void SetValue(float newValue);

    RAYGUI_NODISCARD float Show() const override;

private:
    const char *text;
    float value;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_COLOR_BAR_HUE_H
