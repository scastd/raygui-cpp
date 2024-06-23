#include "raygui-cpp/Button.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Button::Button() : text("") {}

Button::Button(const char *text) : text(text) {}

Button::Button(Bounds bounds, const char *text) : Component<bool>(bounds), text(text) {}

const char *Button::GetText() const {
    return text;
}

void Button::SetText(const char *newText) {
    this->text = newText;
}

bool Button::Show() {
    WITH_STATE_RENDER(int buttonClicked = ::GuiButton(GetBounds().GetRectangle(), text))

    if (buttonClicked && HasOnClick()) {
        CallOnClick();
    }

    return buttonClicked;
}

void Button::OnClick(const Component::Callback &onClick) {
    SetOnClick(onClick);
}

void Button::OnUpdate(const Component::Callback &onUpdate) {
    SetOnUpdate(onUpdate);
}

RAYGUI_CPP_END_NAMESPACE
