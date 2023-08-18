#include "raygui-cpp/Toggle.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Toggle::Toggle() : bounds({ 0, 0, 0, 0 }), text(""), active(false) {}

Toggle::Toggle(::Rectangle bounds, const char *text, bool active) : bounds(bounds), text(text), active(active) {}

Toggle::Toggle(float x, float y, float width, float height, const char *text, bool active)
    : bounds({ x, y, width, height }), text(text), active(active) {}

Toggle::Toggle(::Vector2 position, ::Vector2 size, const char *text, bool active)
    : bounds({ position.x, position.y, size.x, size.y }), text(text), active(active) {}

Toggle::~Toggle() {
    delete text;
}

::Rectangle Toggle::GetBounds() const {
    return bounds;
}

void Toggle::SetBounds(::Rectangle newBounds) {
    this->bounds = newBounds;
}

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
    return ::GuiToggle(bounds, text, active);
}

RAYGUI_CPP_END_NAMESPACE
