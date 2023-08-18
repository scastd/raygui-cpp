#include "raygui-cpp/StatusBar.h"

RAYGUI_CPP_BEGIN_NAMESPACE

StatusBar::StatusBar() : bounds({0, 0, 0, 0}), text(nullptr) {}

StatusBar::StatusBar(Rectangle bounds, const char *text) : bounds(bounds), text(text) {}

StatusBar::StatusBar(float x, float y, float width, float height, const char *text) : bounds({x, y, width, height}), text(text) {}

StatusBar::StatusBar(Vector2 position, Vector2 size, const char *text) : bounds({position.x, position.y, size.x, size.y}), text(text) {}

StatusBar::~StatusBar() {
    delete text;
}

Rectangle StatusBar::GetBounds() const {
    return bounds;
}

void StatusBar::SetBounds(Rectangle newBounds) {
    this->bounds = newBounds;
}

const char *StatusBar::GetText() const {
    return text;
}

void StatusBar::SetText(const char *newText) {
    this->text = newText;
}

void StatusBar::Show() const {
    ::GuiStatusBar(bounds, text);
}

RAYGUI_CPP_END_NAMESPACE
