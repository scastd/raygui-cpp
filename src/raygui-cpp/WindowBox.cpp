#include "raygui-cpp/WindowBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

WindowBox::WindowBox() : bounds({ 0, 0, 0, 0 }), title(nullptr) {}

WindowBox::WindowBox(::Rectangle bounds, const char *title) : bounds(bounds), title(title) {}

WindowBox::WindowBox(float x, float y, float width, float height, const char *title)
    : bounds({ x, y, width, height }), title(title) {}

WindowBox::WindowBox(::Vector2 position, ::Vector2 size, const char *title)
    : bounds({ position.x, position.y, size.x, size.y }), title(title) {}

::Rectangle WindowBox::GetBounds() const {
    return bounds;
}

void WindowBox::SetBounds(::Rectangle newBounds) {
    this->bounds = newBounds;
}

const char *WindowBox::GetTitle() const {
    return title;
}

void WindowBox::SetTitle(const char *newTitle) {
    this->title = newTitle;
}

bool WindowBox::Show() const {
    return ::GuiWindowBox(bounds, title);
}

RAYGUI_CPP_END_NAMESPACE
