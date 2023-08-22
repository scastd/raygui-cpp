#include "raygui-cpp/WindowBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

WindowBox::WindowBox() : Component<bool>(), title(nullptr) {}

WindowBox::WindowBox(Bounds bounds, const char *title) : Component<bool>(bounds), title(title) {}

const char *WindowBox::GetTitle() const {
    return title;
}

void WindowBox::SetTitle(const char *newTitle) {
    this->title = newTitle;
}

bool WindowBox::Show() const {
    return ::GuiWindowBox(GetBounds().GetRectangle(), title);
}

RAYGUI_CPP_END_NAMESPACE
