#include "raygui-cpp/Slider.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Slider::Slider() : bounds({0, 0, 0, 0}), textLeft(""), textRight(""), value(0), minValue(0), maxValue(0) {}

Slider::Slider(Rectangle bounds, const char *textLeft, const char *textRight, float value, float minValue,
               float maxValue) : bounds(bounds), textLeft(textLeft), textRight(textRight), value(value),
                                  minValue(minValue), maxValue(maxValue) {}

Slider::Slider(float x, float y, float width, float height, const char *textLeft, const char *textRight, float value,
               float minValue, float maxValue) : bounds({x, y, width, height}), textLeft(textLeft),
                                                  textRight(textRight), value(value), minValue(minValue),
                                                  maxValue(maxValue) {}

Slider::Slider(Vector2 position, Vector2 size, const char *textLeft, const char *textRight, float value, float minValue,
               float maxValue) : bounds({position.x, position.y, size.x, size.y}), textLeft(textLeft),
                                  textRight(textRight), value(value), minValue(minValue), maxValue(maxValue) {}

Slider::~Slider() {
    delete textLeft;
    delete textRight;
}

Rectangle Slider::GetBounds() const {
    return bounds;
}

void Slider::SetBounds(Rectangle newBounds) {
    this->bounds = newBounds;
}

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

float Slider::Show() const {
    return ::GuiSlider(bounds, textLeft, textRight, value, minValue, maxValue);
}

RAYGUI_CPP_END_NAMESPACE
