#include "raygui-cpp/Line.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Line::Line() : text(nullptr) {}

Line::Line(const char *text) : text(text) {}

Line::Line(Bounds bounds, const char *text) : Component<void>(bounds), text(text) {}

const char *Line::GetText() const {
    return text;
}

void Line::SetText(const char *newText) {
    text = newText;
}

void Line::Show() { WITH_STATE_RENDER(::GuiLine(GetBounds().GetRectangle(), text)) }

RAYGUI_CPP_END_NAMESPACE
