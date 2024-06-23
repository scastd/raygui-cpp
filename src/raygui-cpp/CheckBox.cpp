#include "raygui-cpp/CheckBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

CheckBox::CheckBox() : text(""), checked(false) {}

CheckBox::CheckBox(const char *text, bool checked) : text(text), checked(checked) {}

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

bool CheckBox::Show() {
    WITH_STATE_RENDER(int ret = ::GuiCheckBox(GetBounds().GetRectangle(), text, &checked))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
