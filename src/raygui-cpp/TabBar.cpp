#include "raygui-cpp/TabBar.h"

RAYGUI_CPP_BEGIN_NAMESPACE

TabBar::TabBar() : text(nullptr), hscroll(nullptr), active(nullptr) {}

TabBar::TabBar(const char *text, int *hscroll, int *active)
    : text(text), hscroll(hscroll), active(active) {}

TabBar::TabBar(Bounds bounds, const char *text, int *hscroll, int *active)
    : Component<int>(bounds), text(text), hscroll(hscroll), active(active) {}

const char *TabBar::GetText() const {
    return text;
}

void TabBar::SetText(const char *newText) {
    this->text = newText;
}

int *TabBar::GetHscroll() const {
    return hscroll;
}

void TabBar::SetHscroll(int *newHscroll) {
    this->hscroll = newHscroll;
}

int *TabBar::GetActive() const {
    return active;
}

void TabBar::SetActive(int *newActive) {
    this->active = newActive;
}

int TabBar::Show(const bool canClick) {
    WITH_STATE_RENDER(int ret = ::GuiTabBar(GetBounds().GetRectangle(), text, hscroll, active))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
