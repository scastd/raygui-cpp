#include "raygui-cpp/LabelButton.h"

RAYGUI_CPP_BEGIN_NAMESPACE

LabelButton::LabelButton() : bounds({ 0, 0, 0, 0 }), text("") {}

LabelButton::LabelButton(::Rectangle bounds, const char *text) : bounds(bounds), text(text) {}

LabelButton::LabelButton(float x, float y, float width, float height, const char *text)
    : bounds({ x, y, width, height }), text(text) {}

LabelButton::LabelButton(::Vector2 position, ::Vector2 size, const char *text)
    : bounds({ position.x, position.y, size.x, size.y }), text(text) {}

::Rectangle LabelButton::GetBounds() const {
    return bounds;
}

void LabelButton::SetBounds(::Rectangle newBounds) {
    this->bounds = newBounds;
}

const char *LabelButton::GetText() const {
    return text;
}

void LabelButton::SetText(const char *newText) {
    this->text = newText;
}

bool LabelButton::Show() const {
    return ::GuiLabelButton(bounds, text);
}

RAYGUI_CPP_END_NAMESPACE
