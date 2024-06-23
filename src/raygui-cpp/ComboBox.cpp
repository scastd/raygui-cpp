#include "raygui-cpp/ComboBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ComboBox::ComboBox() : text(""), active(0) {}

ComboBox::ComboBox(const char *text, int active) : text(text), active(active) {}

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

int ComboBox::Show() {
    WITH_STATE_RENDER(int ret = ::GuiComboBox(GetBounds().GetRectangle(), text, &active))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
