#include "raygui-cpp/ScrollPanel.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ScrollPanel::ScrollPanel() : Component<::Rectangle>(), text(""), content({ 0, 0, 0, 0 }), scroll(new ::Vector2()) {}

ScrollPanel::ScrollPanel(Bounds bounds, const char *text, ::Rectangle content, ::Vector2 *scroll)
    : Component<::Rectangle>(bounds), text(text), content(content), scroll(scroll) {}

const char *ScrollPanel::GetText() const {
    return text;
}

void ScrollPanel::SetText(const char *newText) {
    this->text = newText;
}

::Rectangle ScrollPanel::GetContent() const {
    return content;
}

void ScrollPanel::SetContent(::Rectangle newContent) {
    this->content = newContent;
}

::Vector2 *ScrollPanel::GetScroll() const {
    return scroll;
}

void ScrollPanel::SetScroll(::Vector2 *newScroll) {
    this->scroll = newScroll;
}

::Rectangle ScrollPanel::Show() const {
    return ::GuiScrollPanel(GetBounds().GetRectangle(), text, content, scroll);
}

RAYGUI_CPP_END_NAMESPACE
