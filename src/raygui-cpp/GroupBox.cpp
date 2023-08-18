#include "raygui-cpp/GroupBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

GroupBox::GroupBox() : bounds({ 0, 0, 0, 0 }), text("") {}

GroupBox::GroupBox(::Rectangle bounds, const char *text) : bounds(bounds), text(text) {}

GroupBox::GroupBox(float x, float y, float width, float height, const char *text)
    : bounds({ x, y, width, height }), text(text) {}

GroupBox::GroupBox(::Vector2 position, ::Vector2 size, const char *text)
    : bounds({ position.x, position.y, size.x, size.y }), text(text) {}

GroupBox::~GroupBox() {
    delete text;
}

::Rectangle GroupBox::GetBounds() const {
    return bounds;
}

void GroupBox::SetBounds(::Rectangle newBounds) {
    this->bounds = newBounds;
}

const char *GroupBox::GetText() const {
    return text;
}

void GroupBox::SetText(const char *newText) {
    this->text = newText;
}

void GroupBox::Show() const {
    ::GuiGroupBox(bounds, text);
}

RAYGUI_CPP_END_NAMESPACE
