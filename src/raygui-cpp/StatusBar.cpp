#include "raygui-cpp/StatusBar.h"

RAYGUI_CPP_BEGIN_NAMESPACE

StatusBar::StatusBar() : Component<void>(), text(nullptr) {}

StatusBar::StatusBar(Bounds bounds, const char *text) : Component<void>(bounds), text(text) {}

const char *StatusBar::GetText() const {
    return text;
}

void StatusBar::SetText(const char *newText) {
    this->text = newText;
}

void StatusBar::Show() const {
    ::GuiStatusBar(GetBounds().GetRectangle(), text);
}

RAYGUI_CPP_END_NAMESPACE
