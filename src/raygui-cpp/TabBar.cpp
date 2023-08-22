#include "raygui-cpp/TabBar.h"

RAYGUI_CPP_BEGIN_NAMESPACE

TabBar::TabBar() : Component<int>({}), text(nullptr), count(0), active(nullptr) {}

TabBar::TabBar(Bounds bounds, const char **text, int count, int *active)
    : Component<int>(bounds), text(text), count(count), active(active) {}

const char **TabBar::GetText() const {
    return text;
}

void TabBar::SetText(const char **newText) {
    this->text = newText;
}

int TabBar::GetCount() const {
    return count;
}

void TabBar::SetCount(int newCount) {
    this->count = newCount;
}

int *TabBar::GetActive() const {
    return active;
}

void TabBar::SetActive(int *newActive) {
    this->active = newActive;
}

int TabBar::Show() const {
    return ::GuiTabBar(GetBounds().GetRectangle(), text, count, active);
}

RAYGUI_CPP_END_NAMESPACE
