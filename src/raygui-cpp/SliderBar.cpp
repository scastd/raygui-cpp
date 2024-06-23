#include "raygui-cpp/SliderBar.h"

RAYGUI_CPP_BEGIN_NAMESPACE

SliderBar::SliderBar() : textLeft(""), textRight(""), value(0), minValue(0), maxValue(0) {}

SliderBar::SliderBar(const char *textLeft, const char *textRight, float value, float minValue, float maxValue)
    : textLeft(textLeft), textRight(textRight), value(value), minValue(minValue), maxValue(maxValue) {}

SliderBar::SliderBar(Bounds bounds, const char *textLeft, const char *textRight, float value, float minValue,
                     float maxValue)
    : Component<int>(bounds), textLeft(textLeft), textRight(textRight), value(value), minValue(minValue),
      maxValue(maxValue) {}

const char *SliderBar::GetTextLeft() const {
    return textLeft;
}

void SliderBar::SetTextLeft(const char *newTextLeft) {
    this->textLeft = newTextLeft;
}

const char *SliderBar::GetTextRight() const {
    return textRight;
}

void SliderBar::SetTextRight(const char *newTextRight) {
    this->textRight = newTextRight;
}

float SliderBar::GetValue() const {
    return value;
}

void SliderBar::SetValue(float newValue) {
    this->value = newValue;
}

float SliderBar::GetMinValue() const {
    return minValue;
}

void SliderBar::SetMinValue(float newMinValue) {
    this->minValue = newMinValue;
}

float SliderBar::GetMaxValue() const {
    return maxValue;
}

void SliderBar::SetMaxValue(float newMaxValue) {
    this->maxValue = newMaxValue;
}

int SliderBar::Show() {
    WITH_STATE_RENDER(
            int ret = ::GuiSliderBar(GetBounds().GetRectangle(), textLeft, textRight, &value, minValue, maxValue))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
