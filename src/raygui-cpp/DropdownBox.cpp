#include "raygui-cpp/DropdownBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

DropdownBox::DropdownBox() : text(""), active(nullptr), editMode(false) {}

DropdownBox::DropdownBox(const char *text, int *active, bool editMode)
    : text(text), active(active), editMode(editMode) {}

DropdownBox::DropdownBox(Bounds bounds, const char *text, int *active, bool editMode)
    : Component<bool>(bounds), text(text), active(active), editMode(editMode) {}

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

bool DropdownBox::Show() {
    return ::GuiDropdownBox(GetBounds().GetRectangle(), text, active, editMode);
}

RAYGUI_CPP_END_NAMESPACE
