#include "raygui-cpp/GroupBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

GroupBox::GroupBox() : text("") {}

GroupBox::GroupBox(const char *text) : text(text) {}

GroupBox::GroupBox(Bounds bounds, const char *text) : Component<void>(bounds), text(text) {}

const char *GroupBox::GetText() const {
    return text;
}

void GroupBox::SetText(const char *newText) {
    this->text = newText;
}

void GroupBox::Show() { WITH_STATE_RENDER(::GuiGroupBox(GetBounds().GetRectangle(), text)) }

RAYGUI_CPP_END_NAMESPACE
