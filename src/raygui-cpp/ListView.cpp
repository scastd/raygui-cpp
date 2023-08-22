#include "raygui-cpp/ListView.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ListView::ListView() : Component<int>({}), text(""), scrollIndex(nullptr), active(0) {}

ListView::ListView(Bounds bounds, const char *text, int *scrollIndex, int active)
    : Component<int>(bounds), text(text), scrollIndex(scrollIndex), active(active) {}

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
    return ::GuiListView(GetBounds().GetRectangle(), text, scrollIndex, active);
}

RAYGUI_CPP_END_NAMESPACE
