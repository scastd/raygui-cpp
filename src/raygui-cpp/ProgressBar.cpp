#include "raygui-cpp/ProgressBar.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ProgressBar::ProgressBar()
    : bounds({ 0, 0, 0, 0 }), textLeft(nullptr), textRight(nullptr), value(0), minValue(0), maxValue(0) {}

ProgressBar::ProgressBar(Rectangle bounds, const char *textLeft, const char *textRight, float value, float minValue,
                         float maxValue)
    : bounds(bounds), textLeft(textLeft), textRight(textRight), value(value), minValue(minValue), maxValue(maxValue) {}

ProgressBar::ProgressBar(float x, float y, float width, float height, const char *textLeft, const char *textRight,
                         float value, float minValue, float maxValue)
    : bounds({ x, y, width, height }), textLeft(textLeft), textRight(textRight), value(value), minValue(minValue),
      maxValue(maxValue) {}

ProgressBar::ProgressBar(Vector2 position, Vector2 size, const char *textLeft, const char *textRight, float value,
                         float minValue, float maxValue)
    : bounds({ position.x, position.y, size.x, size.y }), textLeft(textLeft), textRight(textRight), value(value),
      minValue(minValue), maxValue(maxValue) {}

ProgressBar::~ProgressBar() {
    delete textLeft;
    delete textRight;
}

Rectangle ProgressBar::GetBounds() const {
    return bounds;
}

void ProgressBar::SetBounds(Rectangle newBounds) {
    this->bounds = newBounds;
}

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

float ProgressBar::Show() const {
    return ::GuiProgressBar(bounds, textLeft, textRight, value, minValue, maxValue);
}

RAYGUI_CPP_END_NAMESPACE
