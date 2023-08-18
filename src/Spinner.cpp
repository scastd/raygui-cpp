#include "Spinner.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Spinner::Spinner() : bounds({ 0, 0, 0, 0 }), text(""), value(nullptr), minValue(0), maxValue(0), editMode(false) {}

Spinner::Spinner(const Rectangle &bounds, const char *text, int *value, int minValue, int maxValue, bool editMode)
    : bounds(bounds), text(text), value(value), minValue(minValue), maxValue(maxValue), editMode(editMode) {}

Spinner::Spinner(float x, float y, float width, float height, const char *text, int *value, int minValue, int maxValue,
                 bool editMode)
    : bounds({ x, y, width, height }), text(text), value(value), minValue(minValue), maxValue(maxValue),
      editMode(editMode) {}

Spinner::Spinner(const Vector2 &position, const Vector2 &size, const char *text, int *value, int minValue, int maxValue,
                 bool editMode)
    : bounds({ position.x, position.y, size.x, size.y }), text(text), value(value), minValue(minValue),
      maxValue(maxValue), editMode(editMode) {}

Spinner::~Spinner() {
    delete text;
    delete value;
}

Rectangle Spinner::GetBounds() const {
    return bounds;
}

void Spinner::SetBounds(const Rectangle &newBounds) {
    this->bounds = newBounds;
}

const char *Spinner::GetText() const {
    return text;
}

void Spinner::SetText(const char *newText) {
    this->text = newText;
}

int *Spinner::GetValue() const {
    return value;
}

void Spinner::SetValue(int *newValue) {
    this->value = newValue;
}

int Spinner::GetMinValue() const {
    return minValue;
}

void Spinner::SetMinValue(int newMinValue) {
    this->minValue = newMinValue;
}

int Spinner::GetMaxValue() const {
    return maxValue;
}

void Spinner::SetMaxValue(int newMaxValue) {
    this->maxValue = newMaxValue;
}

bool Spinner::IsEditMode() const {
    return editMode;
}

void Spinner::SetEditMode(bool newEditMode) {
    this->editMode = newEditMode;
}

bool Spinner::Show() const {
    return ::GuiSpinner(bounds, text, value, minValue, maxValue, editMode);
}

RAYGUI_CPP_END_NAMESPACE
