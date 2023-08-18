#include "raygui-cpp/ComboBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ComboBox::ComboBox() : bounds({ 0, 0, 0, 0 }), text(""), active(0) {}

ComboBox::ComboBox(::Rectangle bounds, const char *text, int active) : bounds(bounds), text(text), active(active) {}

ComboBox::ComboBox(float x, float y, float width, float height, const char *text, int active)
    : bounds({ x, y, width, height }), text(text), active(active) {}

ComboBox::ComboBox(::Vector2 position, ::Vector2 size, const char *text, int active)
    : bounds({ position.x, position.y, size.x, size.y }), text(text), active(active) {}

::Rectangle ComboBox::GetBounds() const {
    return bounds;
}

void ComboBox::SetBounds(::Rectangle newBounds) {
    this->bounds = newBounds;
}

const char *ComboBox::GetText() const {
    return text;
}

void ComboBox::SetText(const char *newText) {
    this->text = newText;
}

int ComboBox::GetActive() const {
    return active;
}

void ComboBox::SetActive(int newActive) {
    this->active = newActive;
}

bool ComboBox::Show() const {
    return ::GuiComboBox(bounds, text, active);
}

RAYGUI_CPP_END_NAMESPACE
