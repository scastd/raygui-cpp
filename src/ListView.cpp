#include "ListView.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ListView::ListView() : bounds({ 0, 0, 0, 0 }), text(""), scrollIndex(nullptr), active(0) {}

ListView::ListView(Rectangle bounds, const char *text, int *scrollIndex, int active)
    : bounds(bounds), text(text), scrollIndex(scrollIndex), active(active) {}

ListView::ListView(float x, float y, float width, float height, const char *text, int *scrollIndex, int active)
    : bounds({ x, y, width, height }), text(text), scrollIndex(scrollIndex), active(active) {}

ListView::ListView(Vector2 position, Vector2 size, const char *text, int *scrollIndex, int active)
    : bounds({ position.x, position.y, size.x, size.y }), text(text), scrollIndex(scrollIndex), active(active) {}

ListView::~ListView() {
    delete text;
    delete scrollIndex;
}

Rectangle ListView::GetBounds() const {
    return bounds;
}

void ListView::SetBounds(Rectangle newBounds) {
    this->bounds = newBounds;
}

const char *ListView::GetText() const {
    return text;
}

void ListView::SetText(const char *newText) {
    this->text = newText;
}

int *ListView::GetScrollIndex() const {
    return scrollIndex;
}

void ListView::SetScrollIndex(int *newScrollIndex) {
    this->scrollIndex = newScrollIndex;
}

int ListView::GetActive() const {
    return active;
}

void ListView::SetActive(int newActive) {
    this->active = newActive;
}

int ListView::Show() const {
    return ::GuiListView(bounds, text, scrollIndex, active);
}

RAYGUI_CPP_END_NAMESPACE
