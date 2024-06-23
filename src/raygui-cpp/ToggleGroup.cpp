#include "raygui-cpp/ToggleGroup.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ToggleGroup::ToggleGroup() : text(""), active(0) {}

ToggleGroup::ToggleGroup(const char *text, int active) : text(text), active(active) {}

ToggleGroup::ToggleGroup(Bounds bounds, const char *text, int active)
    : Component<int>(bounds), text(text), active(active) {}

const char *ToggleGroup::GetText() const {
    return text;
}

void ToggleGroup::SetText(const char *newText) {
    this->text = newText;
}

int ToggleGroup::GetActive() const {
    return active;
}

void ToggleGroup::SetActive(int newActive) {
    this->active = newActive;
}

int ToggleGroup::Show() {
    WITH_STATE_RENDER(int ret = ::GuiToggleGroup(GetBounds().GetRectangle(), text, &active))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
