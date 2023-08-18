#include "raygui-cpp/ListViewEx.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ListViewEx::ListViewEx()
    : bounds({ 0, 0, 0, 0 }), text(nullptr), count(0), focus(nullptr), scrollIndex(nullptr), active(0) {}

ListViewEx::ListViewEx(Rectangle bounds, const char **text, int count, int *focus, int *scrollIndex, int active)
    : bounds(bounds), text(text), count(count), focus(focus), scrollIndex(scrollIndex), active(active) {}

ListViewEx::ListViewEx(float x, float y, float width, float height, const char **text, int count, int *focus,
                       int *scrollIndex, int active)
    : bounds({ x, y, width, height }), text(text), count(count), focus(focus), scrollIndex(scrollIndex),
      active(active) {}

ListViewEx::ListViewEx(Vector2 position, Vector2 size, const char **text, int count, int *focus, int *scrollIndex,
                       int active)
    : bounds({ position.x, position.y, size.x, size.y }), text(text), count(count), focus(focus),
      scrollIndex(scrollIndex), active(active) {}

ListViewEx::~ListViewEx() {
    delete text;
    delete focus;
    delete scrollIndex;
}

Rectangle ListViewEx::GetBounds() const {
    return bounds;
}

void ListViewEx::SetBounds(Rectangle newBounds) {
    this->bounds = newBounds;
}

const char **ListViewEx::GetText() const {
    return text;
}

void ListViewEx::SetText(const char **newText) {
    this->text = newText;
}

int ListViewEx::GetCount() const {
    return count;
}

void ListViewEx::SetCount(int newCount) {
    this->count = newCount;
}

int *ListViewEx::GetFocus() const {
    return focus;
}

void ListViewEx::SetFocus(int *newFocus) {
    this->focus = newFocus;
}

int *ListViewEx::GetScrollIndex() const {
    return scrollIndex;
}

void ListViewEx::SetScrollIndex(int *newScrollIndex) {
    this->scrollIndex = newScrollIndex;
}

int ListViewEx::GetActive() const {
    return active;
}

void ListViewEx::SetActive(int newActive) {
    this->active = newActive;
}

int ListViewEx::Show() const {
    return ::GuiListViewEx(bounds, text, count, focus, scrollIndex, active);
}

RAYGUI_CPP_END_NAMESPACE
