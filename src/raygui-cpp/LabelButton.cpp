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

bool LabelButton::Show(const bool canClick) {
    WITH_STATE_RENDER(int ret = ::GuiLabelButton(GetBounds().GetRectangle(), text))
    return ret;
}

void LabelButton::SetPropertyColor(const GuiControlProperty property, const Color color) {
    AddProperty(LABEL, property, color);
}

RAYGUI_CPP_END_NAMESPACE
