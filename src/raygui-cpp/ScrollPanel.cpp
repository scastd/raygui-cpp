#include "raygui-cpp/ScrollPanel.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ScrollPanel::ScrollPanel() : bounds({ 0, 0, 0, 0 }), text(""), content({ 0, 0, 0, 0 }), scroll(new Vector2()) {}

ScrollPanel::ScrollPanel(const Rectangle &bounds, const char *text, const Rectangle &content, Vector2 *scroll)
    : bounds(bounds), text(text), content(content), scroll(scroll) {}

ScrollPanel::ScrollPanel(float x, float y, float width, float height, const char *text, const Rectangle &content, Vector2 *scroll)
    : bounds({ x, y, width, height }), text(text), content(content), scroll(scroll) {}

ScrollPanel::ScrollPanel(const Vector2 &position, const Vector2 &size, const char *text, const Rectangle &content, Vector2 *scroll)
    : bounds({ position.x, position.y, size.x, size.y }), text(text), content(content), scroll(scroll) {}

ScrollPanel::~ScrollPanel() {
    delete text;
    delete scroll;
}

Rectangle ScrollPanel::GetBounds() const {
    return bounds;
}

void ScrollPanel::SetBounds(Rectangle newBounds) {
    this->bounds = newBounds;
}

const char *ScrollPanel::GetText() const {
    return text;
}

void ScrollPanel::SetText(const char *newText) {
    this->text = newText;
}

Rectangle ScrollPanel::GetContent() const {
    return content;
}

void ScrollPanel::SetContent(Rectangle newContent) {
    this->content = newContent;
}

Vector2 *ScrollPanel::GetScroll() const {
    return scroll;
}

void ScrollPanel::SetScroll(Vector2 *newScroll) {
    this->scroll = newScroll;
}

Rectangle ScrollPanel::Show() const {
    return ::GuiScrollPanel(bounds, text, content, scroll);
}

RAYGUI_CPP_END_NAMESPACE
