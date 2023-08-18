#include "raygui-cpp/SliderBar.h"

RAYGUI_CPP_BEGIN_NAMESPACE

SliderBar::SliderBar() : bounds({0, 0, 0, 0}), textLeft(""), textRight(""), value(0), minValue(0), maxValue(0) {}

SliderBar::SliderBar(::Rectangle bounds, const char *textLeft, const char *textRight, float value, float minValue,
                     float maxValue) : bounds(bounds), textLeft(textLeft), textRight(textRight), value(value),
                                        minValue(minValue), maxValue(maxValue) {}

SliderBar::SliderBar(float x, float y, float width, float height, const char *textLeft, const char *textRight,
                     float value, float minValue, float maxValue) : bounds({x, y, width, height}), textLeft(textLeft),
                                                                     textRight(textRight), value(value),
                                                                     minValue(minValue), maxValue(maxValue) {}

SliderBar::SliderBar(::Vector2 position, ::Vector2 size, const char *textLeft, const char *textRight, float value,
                     float minValue, float maxValue) : bounds({position.x, position.y, size.x, size.y}),
                                                       textLeft(textLeft), textRight(textRight), value(value),
                                                       minValue(minValue), maxValue(maxValue) {}

::Rectangle SliderBar::GetBounds() const {
    return bounds;
}

void SliderBar::SetBounds(::Rectangle newBounds) {
    this->bounds = newBounds;
}

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

float SliderBar::Show() const {
    return ::GuiSliderBar(bounds, textLeft, textRight, value, minValue, maxValue);
}

RAYGUI_CPP_END_NAMESPACE
