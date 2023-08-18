#include "raygui-cpp/Label.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Label::Label() : bounds({0, 0, 0, 0}), text("") {}

Label::Label(::Rectangle bounds, const char *text) : bounds(bounds), text(text) {}

Label::Label(float x, float y, float width, float height, const char *text) : bounds({x, y, width, height}), text(text) {}

Label::Label(::Vector2 position, ::Vector2 size, const char *text)
    : bounds({ position.x, position.y, size.x, size.y }), text(text) {}

::Rectangle Label::GetBounds() const {
    return bounds;
}

void Label::SetBounds(::Rectangle newBounds) {
    this->bounds = newBounds;
}

const char *Label::GetText() const {
    return text;
}

void Label::SetText(const char *newText) {
    this->text = newText;
}

void Label::Show() const {
    ::GuiLabel(bounds, text);
}

RAYGUI_CPP_END_NAMESPACE
