#include "raygui-cpp/Panel.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Panel::Panel() : text("") {}

Panel::Panel(const char *text) : text(text) {}

Panel::Panel(Bounds bounds, const char *text) : Component<void>(bounds), text(text) {}

const char *Panel::GetText() const {
    return text;
}

void Panel::SetText(const char *newText) {
    this->text = newText;
}

void Panel::Show() {
    WITH_STATE_RENDER(::GuiPanel(GetBounds().GetRectangle(), text))

    this->ShowChildren();
}

void Panel::AddChild(Component *child) {
    this->AddChildInternal(child);
}

RAYGUI_CPP_END_NAMESPACE
