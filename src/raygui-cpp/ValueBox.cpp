#include "raygui-cpp/ValueBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ValueBox::ValueBox() : Component<bool>({}), text(""), value(nullptr), minValue(0), maxValue(0), editMode(false) {}

ValueBox::ValueBox(Bounds bounds, const char *text, int *value, int minValue, int maxValue, bool editMode)
    : Component<bool>(bounds), text(text), value(value), minValue(minValue), maxValue(maxValue), editMode(editMode) {}

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
    return ::GuiValueBox(GetBounds().GetRectangle(), text, value, minValue, maxValue, editMode);
}

RAYGUI_CPP_END_NAMESPACE
