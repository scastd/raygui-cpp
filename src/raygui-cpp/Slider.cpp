#include "raygui-cpp/Slider.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Slider::Slider() : textLeft(""), textRight(""), value(0), minValue(0), maxValue(0) {}

Slider::Slider(const char *textLeft, const char *textRight, float value, float minValue, float maxValue)
    : textLeft(textLeft), textRight(textRight), value(value), minValue(minValue), maxValue(maxValue) {}

Slider::Slider(Bounds bounds, const char *textLeft, const char *textRight, float value, float minValue, float maxValue)
    : Component<int>(bounds), textLeft(textLeft), textRight(textRight), value(value), minValue(minValue),
      maxValue(maxValue) {}

const char *Slider::GetTextLeft() const {
    return textLeft;
}

void Slider::SetTextLeft(const char *newTextLeft) {
    this->textLeft = newTextLeft;
}

const char *Slider::GetTextRight() const {
    return textRight;
}

void Slider::SetTextRight(const char *newTextRight) {
    this->textRight = newTextRight;
}

float Slider::GetValue() const {
    return value;
}

void Slider::SetValue(float newValue) {
    this->value = newValue;
}

float Slider::GetMinValue() const {
    return minValue;
}

void Slider::SetMinValue(float newMinValue) {
    this->minValue = newMinValue;
}

float Slider::GetMaxValue() const {
    return maxValue;
}

void Slider::SetMaxValue(float newMaxValue) {
    this->maxValue = newMaxValue;
}

int Slider::Show() {
    WITH_STATE_RENDER(int ret =
                              ::GuiSlider(GetBounds().GetRectangle(), textLeft, textRight, &value, minValue, maxValue))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
