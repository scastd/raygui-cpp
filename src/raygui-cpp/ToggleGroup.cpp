#include "raygui-cpp/ToggleGroup.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ToggleGroup::ToggleGroup() : bounds({ 0, 0, 0, 0 }), text(""), active(0) {}

ToggleGroup::ToggleGroup(Rectangle bounds, const char *text, int active)
    : bounds(bounds), text(text), active(active) {}

ToggleGroup::ToggleGroup(float x, float y, float width, float height, const char *text, int active)
    : bounds({ x, y, width, height }), text(text), active(active) {}

ToggleGroup::ToggleGroup(Vector2 position, Vector2 size, const char *text, int active)
    : bounds({ position.x, position.y, size.x, size.y }), text(text), active(active) {}

ToggleGroup::~ToggleGroup() {
    delete text;
}

Rectangle ToggleGroup::GetBounds() const {
    return bounds;
}

void ToggleGroup::SetBounds(Rectangle newBounds) {
    this->bounds = newBounds;
}

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

bool ToggleGroup::Show() const {
    return ::GuiToggleGroup(bounds, text, active);
}

RAYGUI_CPP_END_NAMESPACE
