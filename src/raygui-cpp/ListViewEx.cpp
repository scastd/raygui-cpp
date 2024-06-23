#include "raygui-cpp/ListViewEx.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ListViewEx::ListViewEx() : text(nullptr), count(0), focus(nullptr), scrollIndex(nullptr), active(0) {}

ListViewEx::ListViewEx(const char **text, int count, int *focus, int *scrollIndex, int active)
    : text(text), count(count), focus(focus), scrollIndex(scrollIndex), active(active) {}

ListViewEx::ListViewEx(Bounds bounds, const char **text, int count, int *focus, int *scrollIndex, int active)
    : Component<int>(bounds), text(text), count(count), focus(focus), scrollIndex(scrollIndex), active(active) {}

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

int ListViewEx::Show() {
    WITH_STATE_RENDER(int ret = ::GuiListViewEx(GetBounds().GetRectangle(), text, count, scrollIndex, &active, focus))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
