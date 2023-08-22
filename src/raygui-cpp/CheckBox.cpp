#include "raygui-cpp/CheckBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

CheckBox::CheckBox() : Component<bool>(), text(""), checked(false) {}

CheckBox::CheckBox(Bounds bounds, const char *text, bool checked)
    : Component<bool>(bounds), text(text), checked(checked) {}

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
    return ::GuiCheckBox(GetBounds().GetRectangle(), text, checked);
}

RAYGUI_CPP_END_NAMESPACE
