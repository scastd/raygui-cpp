#include "CheckBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

CheckBox::CheckBox() : bounds({ 0, 0, 0, 0 }), text(""), checked(false) {}

CheckBox::CheckBox(Rectangle bounds, const char *text, bool checked)
    : bounds(bounds), text(text), checked(checked) {}

CheckBox::CheckBox(float x, float y, float width, float height, const char *text, bool checked)
    : bounds({ x, y, width, height }), text(text), checked(checked) {}

CheckBox::CheckBox(Vector2 position, Vector2 size, const char *text, bool checked)
    : bounds({ position.x, position.y, size.x, size.y }), text(text), checked(checked) {}

CheckBox::~CheckBox() {
    delete text;
}

Rectangle CheckBox::GetBounds() const {
    return bounds;
}

void CheckBox::SetBounds(Rectangle newBounds) {
    this->bounds = newBounds;
}

const char *CheckBox::GetText() const {
    return text;
}

void CheckBox::SetText(const char *newText) {
    this->text = newText;
}

bool CheckBox::IsChecked() const {
    return checked;
}

void CheckBox::SetChecked(bool newChecked) {
    this->checked = newChecked;
}

bool CheckBox::Show() const {
    return ::GuiCheckBox(bounds, text, checked);
}

RAYGUI_CPP_END_NAMESPACE
