#include "raygui-cpp/DropdownBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

DropdownBox::DropdownBox() : bounds({ 0, 0, 0, 0 }), text(""), active(nullptr), editMode(false) {}

DropdownBox::DropdownBox(::Rectangle bounds, const char *text, int *active, bool editMode)
    : bounds(bounds), text(text), active(active), editMode(editMode) {}

DropdownBox::DropdownBox(float x, float y, float width, float height, const char *text, int *active, bool editMode)
    : bounds({ x, y, width, height }), text(text), active(active), editMode(editMode) {}

DropdownBox::DropdownBox(::Vector2 position, ::Vector2 size, const char *text, int *active, bool editMode)
    : bounds({ position.x, position.y, size.x, size.y }), text(text), active(active), editMode(editMode) {}

::Rectangle DropdownBox::GetBounds() const {
    return bounds;
}

void DropdownBox::SetBounds(::Rectangle newBounds) {
    this->bounds = newBounds;
}

const char *DropdownBox::GetText() const {
    return text;
}

void DropdownBox::SetText(const char *newText) {
    this->text = newText;
}

int *DropdownBox::GetActive() const {
    return active;
}

void DropdownBox::SetActive(int *newActive) {
    this->active = newActive;
}

bool DropdownBox::GetEditMode() const {
    return editMode;
}

void DropdownBox::SetEditMode(bool newEditMode) {
    this->editMode = newEditMode;
}

bool DropdownBox::Show() const {
    return ::GuiDropdownBox(bounds, text, active, editMode);
}

RAYGUI_CPP_END_NAMESPACE
