#include "raygui-cpp/ProgressBar.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ProgressBar::ProgressBar() : textLeft(nullptr), textRight(nullptr), value(0), minValue(0), maxValue(0) {}

ProgressBar::ProgressBar(const char *textLeft, const char *textRight, float value, float minValue, float maxValue)
    : textLeft(textLeft), textRight(textRight), value(value), minValue(minValue), maxValue(maxValue) {}

ProgressBar::ProgressBar(Bounds bounds, const char *textLeft, const char *textRight, float value, float minValue,
                         float maxValue)
    : Component<int>(bounds), textLeft(textLeft), textRight(textRight), value(value), minValue(minValue),
      maxValue(maxValue) {}

const char *ProgressBar::GetTextLeft() const {
    return textLeft;
}

void ProgressBar::SetTextLeft(const char *newTextLeft) {
    this->textLeft = newTextLeft;
}

const char *ProgressBar::GetTextRight() const {
    return textRight;
}

void ProgressBar::SetTextRight(const char *newTextRight) {
    this->textRight = newTextRight;
}

float ProgressBar::GetValue() const {
    return value;
}

void ProgressBar::SetValue(float newValue) {
    this->value = newValue;
}

float ProgressBar::GetMinValue() const {
    return minValue;
}

void ProgressBar::SetMinValue(float newMinValue) {
    this->minValue = newMinValue;
}

float ProgressBar::GetMaxValue() const {
    return maxValue;
}

void ProgressBar::SetMaxValue(float newMaxValue) {
    this->maxValue = newMaxValue;
}

int ProgressBar::Show() {
    WITH_STATE_RENDER(
            int ret = ::GuiProgressBar(GetBounds().GetRectangle(), textLeft, textRight, &value, minValue, maxValue))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
