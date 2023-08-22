#include "raygui-cpp/Toggle.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Toggle::Toggle() : Component<bool>({}), text(""), active(false) {}

Toggle::Toggle(Bounds bounds, const char *text, bool active) : Component<bool>(bounds), text(text), active(active) {}

const char *Toggle::GetText() const {
    return text;
}

void Toggle::SetText(const char *newText) {
    this->text = newText;
}

bool Toggle::IsActive() const {
    return active;
}

void Toggle::SetActive(bool newActive) {
    this->active = newActive;
}

bool Toggle::Show() const {
    return ::GuiToggle(GetBounds().GetRectangle(), text, active);
}

RAYGUI_CPP_END_NAMESPACE
