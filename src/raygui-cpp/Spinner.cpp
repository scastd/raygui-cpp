#include "raygui-cpp/Spinner.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Spinner::Spinner() : text(""), value(nullptr), minValue(0), maxValue(0), editMode(false) {}

Spinner::Spinner(const char *text, int *value, int minValue, int maxValue, bool editMode)
    : text(text), value(value), minValue(minValue), maxValue(maxValue), editMode(editMode) {}

Spinner::Spinner(Bounds bounds, const char *text, int *value, int minValue, int maxValue, bool editMode)
    : Component<bool>(bounds), text(text), value(value), minValue(minValue), maxValue(maxValue), editMode(editMode) {}

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

bool Spinner::Show() {
    WITH_STATE_RENDER(int ret = ::GuiSpinner(GetBounds().GetRectangle(), text, value, minValue, maxValue, editMode))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
