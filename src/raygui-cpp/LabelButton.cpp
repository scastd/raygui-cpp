#include "raygui-cpp/LabelButton.h"

RAYGUI_CPP_BEGIN_NAMESPACE

LabelButton::LabelButton() : text("") {}

LabelButton::LabelButton(const char *text) : text(text) {}

LabelButton::LabelButton(Bounds bounds, const char *text) : Component<bool>(bounds), text(text) {}

const char *LabelButton::GetText() const {
    return text;
}

void LabelButton::SetText(const char *newText) {
    this->text = newText;
}

bool LabelButton::Show() {
    return ::GuiLabelButton(GetBounds().GetRectangle(), text);
}

RAYGUI_CPP_END_NAMESPACE
