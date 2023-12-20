#ifndef RAYGUI_CPP_SLIDER_H
#define RAYGUI_CPP_SLIDER_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class Slider : public Component<int> {
public:
    Slider();
    Slider(const char *textLeft, const char *textRight, float value, float minValue, float maxValue);
    Slider(Bounds bounds, const char *textLeft, const char *textRight, float value, float minValue, float maxValue);

    RAYGUI_NODISCARD const char *GetTextLeft() const;
    void SetTextLeft(const char *newTextLeft);

    RAYGUI_NODISCARD const char *GetTextRight() const;
    void SetTextRight(const char *newTextRight);

    RAYGUI_NODISCARD float GetValue() const;
    void SetValue(float newValue);

    RAYGUI_NODISCARD float GetMinValue() const;
    void SetMinValue(float newMinValue);

    RAYGUI_NODISCARD float GetMaxValue() const;
    void SetMaxValue(float newMaxValue);

    RAYGUI_NODISCARD int Show() override;

private:
    const char *textLeft;
    const char *textRight;
    float value;
    float minValue;
    float maxValue;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_SLIDER_H
