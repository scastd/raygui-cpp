#include "raygui-cpp/ScrollPanel.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ScrollPanel::ScrollPanel() : text(""), content({ 0, 0, 0, 0 }), scroll({}), view({}) {}

ScrollPanel::ScrollPanel(const char *text, ::Rectangle content, ::Vector2 scroll, ::Rectangle view)
    : text(text), content(content), scroll(scroll), view(view) {}

ScrollPanel::ScrollPanel(Bounds bounds, const char *text, ::Rectangle content, ::Vector2 scroll, ::Rectangle view)
    : Component<int>(bounds), text(text), content(content), scroll(scroll), view(view) {}

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

::Vector2 ScrollPanel::GetScroll() const {
    return scroll;
}

void ScrollPanel::SetScroll(::Vector2 newScroll) {
    this->scroll = newScroll;
}

::Rectangle ScrollPanel::GetView() const {
    return view;
}

void ScrollPanel::SetView(::Rectangle newView) {
    this->view = newView;
}

int ScrollPanel::Show() {
    WITH_STATE_RENDER(int ret = ::GuiScrollPanel(GetBounds().GetRectangle(), text, content, &scroll, &view))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
