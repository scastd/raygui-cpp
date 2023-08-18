#include "raygui-cpp/Line.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Line::Line() : bounds({ 0, 0, 0, 0 }), text(nullptr) {}

Line::Line(const ::Rectangle &bounds, const char *text) : bounds(bounds), text(text) {}

Line::Line(float x, float y, float width, float height, const char *text)
    : bounds({ x, y, width, height }), text(text) {}

Line::Line(const ::Vector2 &position, const ::Vector2 &size, const char *text)
    : bounds({ position.x, position.y, size.x, size.y }), text(text) {}

Line::~Line() {
    delete text;
}

::Rectangle Line::GetBounds() const {
    return bounds;
}

void Line::SetBounds(::Rectangle newBounds) {
    bounds = newBounds;
}

const char *Line::GetText() const {
    return text;
}

void Line::SetText(const char *newText) {
    text = newText;
}

void Line::Show() const {
    ::GuiLine(bounds, text);
}

RAYGUI_CPP_END_NAMESPACE
