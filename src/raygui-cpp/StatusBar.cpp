#include "raygui-cpp/StatusBar.h"

RAYGUI_CPP_BEGIN_NAMESPACE

StatusBar::StatusBar() : text(nullptr) {}

StatusBar::StatusBar(const char *text) : text(text) {}

StatusBar::StatusBar(Bounds bounds, const char *text) : Component<void>(bounds), text(text) {}

const char *StatusBar::GetText() const {
    return text;
}

void StatusBar::SetText(const char *newText) {
    this->text = newText;
}

void StatusBar::Show() { WITH_STATE_RENDER(::GuiStatusBar(GetBounds().GetRectangle(), text)) }

RAYGUI_CPP_END_NAMESPACE
