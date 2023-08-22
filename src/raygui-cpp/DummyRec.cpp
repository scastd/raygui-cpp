#include "raygui-cpp/DummyRec.h"

RAYGUI_CPP_BEGIN_NAMESPACE

DummyRec::DummyRec() : Component<void>({}), text(nullptr) {}

DummyRec::DummyRec(Bounds bounds, const char *text) : Component<void>(bounds), text(text) {}

const char *DummyRec::GetText() const {
    return text;
}

void DummyRec::SetText(const char *newText) {
    this->text = newText;
}

void DummyRec::Show() const {
    ::GuiDummyRec(GetBounds().GetRectangle(), text);
}

RAYGUI_CPP_END_NAMESPACE
