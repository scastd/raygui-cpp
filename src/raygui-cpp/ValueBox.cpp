#include "raygui-cpp/ValueBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ValueBox::ValueBox() : bounds({ 0, 0, 0, 0 }), text(""), value(nullptr), minValue(0), maxValue(0), editMode(false) {}

ValueBox::ValueBox(::Rectangle bounds, const char *text, int *value, int minValue, int maxValue, bool editMode)
    : bounds(bounds), text(text), value(value), minValue(minValue), maxValue(maxValue), editMode(editMode) {}

ValueBox::ValueBox(float x, float y, float width, float height, const char *text, int *value, int minValue,
                   int maxValue, bool editMode)
    : bounds({ x, y, width, height }), text(text), value(value), minValue(minValue), maxValue(maxValue),
      editMode(editMode) {}

ValueBox::ValueBox(::Vector2 position, ::Vector2 size, const char *text, int *value, int minValue, int maxValue, bool editMode)
    : bounds({ position.x, position.y, size.x, size.y }), text(text), value(value), minValue(minValue),
        maxValue(maxValue), editMode(editMode) {}

::Rectangle ValueBox::GetBounds() const {
    return bounds;
}

void ValueBox::SetBounds(::Rectangle newBounds) {
    this->bounds = newBounds;
}

const char *ValueBox::GetText() const {
    return text;
}

void ValueBox::SetText(const char *newText) {
    this->text = newText;
}

int *ValueBox::GetValue() const {
    return value;
}

void ValueBox::SetValue(int *newValue) {
    this->value = newValue;
}

int ValueBox::GetMinValue() const {
    return minValue;
}

void ValueBox::SetMinValue(int newMinValue) {
    this->minValue = newMinValue;
}

int ValueBox::GetMaxValue() const {
    return maxValue;
}

void ValueBox::SetMaxValue(int newMaxValue) {
    this->maxValue = newMaxValue;
}

bool ValueBox::IsEditMode() const {
    return editMode;
}

void ValueBox::SetEditMode(bool newEditMode) {
    this->editMode = newEditMode;
}

bool ValueBox::Show() const {
    return ::GuiValueBox(bounds, text, value, minValue, maxValue, editMode);
}

RAYGUI_CPP_END_NAMESPACE
