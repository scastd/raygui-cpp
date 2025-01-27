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
    PreRender();
    WITH_STATE_RENDER(const int buttonClicked = ::GuiButton(GetBounds().GetRectangle(), text))
    PostRender();

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

void Button::SetPropertyColor(const GuiControlProperty property, const Color color) {
    AddProperty(BUTTON, property, color);
}

RAYGUI_CPP_END_NAMESPACE
