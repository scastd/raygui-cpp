#include "raygui-cpp/Button.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Button::Button() : Component<bool>(), text("") {}

Button::Button(Bounds bounds, const char *text) : Component<bool>(bounds), text(text) {}

const char *Button::GetText() const {
    return text;
}

void Button::SetText(const char *newText) {
    this->text = newText;
}

bool Button::Show() const {
    return ::GuiButton(GetBounds().GetRectangle(), text);
}

RAYGUI_CPP_END_NAMESPACE
