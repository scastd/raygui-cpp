#include "raygui-cpp/ComboBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ComboBox::ComboBox() : Component<int>({}), text(""), active(0) {}

ComboBox::ComboBox(Bounds bounds, const char *text, int active) : Component<int>(bounds), text(text), active(active) {}

const char *ComboBox::GetText() const {
    return text;
}

void ComboBox::SetText(const char *newText) {
    this->text = newText;
}

int ComboBox::GetActive() const {
    return active;
}

void ComboBox::SetActive(int newActive) {
    this->active = newActive;
}

int ComboBox::Show() const {
    return ::GuiComboBox(GetBounds().GetRectangle(), text, active);
}

RAYGUI_CPP_END_NAMESPACE
