#include "raygui-cpp/ToggleSlider.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ToggleSlider::ToggleSlider() : text(""), active(0) {}

ToggleSlider::ToggleSlider(const char *text, int active) : text(text), active(active) {}

ToggleSlider::ToggleSlider(Bounds bounds, const char *text, int active)
    : Component<int>(bounds), text(text), active(active) {}

const char *ToggleSlider::GetText() const {
    return text;
}

void ToggleSlider::SetText(const char *newText) {
    this->text = newText;
}

int ToggleSlider::GetActive() const {
    return active;
}

void ToggleSlider::SetActive(int newActive) {
    this->active = newActive;
}

int ToggleSlider::Show() {
    WITH_STATE_RENDER(int ret = ::GuiToggleSlider(GetBounds().GetRectangle(), text, &active))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
