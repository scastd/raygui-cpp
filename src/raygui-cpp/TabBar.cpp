#include "raygui-cpp/TabBar.h"

RAYGUI_CPP_BEGIN_NAMESPACE

TabBar::TabBar() : bounds({ 0, 0, 0, 0 }), text(nullptr), count(0), active(nullptr) {}

TabBar::TabBar(::Rectangle bounds, const char **text, int count, int *active)
    : bounds(bounds), text(text), count(count), active(active) {}

TabBar::TabBar(float x, float y, float width, float height, const char **text, int count, int *active) : bounds({ x, y, width, height }), text(text), count(count), active(active) {}

TabBar::TabBar(::Vector2 position, ::Vector2 size, const char **text, int count, int *active)
    : bounds({ position.x, position.y, size.x, size.y }), text(text), count(count), active(active) {}

TabBar::~TabBar() {
    delete text;
    delete active;
}

::Rectangle TabBar::GetBounds() const {
    return bounds;
}

void TabBar::SetBounds(::Rectangle newBounds) {
    this->bounds = newBounds;
}

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
    return ::GuiTabBar(bounds, text, count, active);
}

RAYGUI_CPP_END_NAMESPACE
