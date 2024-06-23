#include "raygui-cpp/Label.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Label::Label() : text("") {}

Label::Label(const char *text) : text(text) {}

Label::Label(Bounds bounds, const char *text) : Component<void>(bounds), text(text) {}

const char *Label::GetText() const {
    return text;
}

void Label::SetText(const char *newText) {
    this->text = newText;
}

void Label::Show() { WITH_STATE_RENDER(::GuiLabel(GetBounds().GetRectangle(), text)) }

RAYGUI_CPP_END_NAMESPACE
