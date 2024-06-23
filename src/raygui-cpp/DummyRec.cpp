#include "raygui-cpp/DummyRec.h"

RAYGUI_CPP_BEGIN_NAMESPACE

DummyRec::DummyRec() : text(nullptr) {}

DummyRec::DummyRec(const char *text) : text(text) {}

DummyRec::DummyRec(Bounds bounds, const char *text) : Component<void>(bounds), text(text) {}

const char *DummyRec::GetText() const {
    return text;
}

void DummyRec::SetText(const char *newText) {
    this->text = newText;
}

void DummyRec::Show() { WITH_STATE_RENDER(::GuiDummyRec(GetBounds().GetRectangle(), text)) }

RAYGUI_CPP_END_NAMESPACE
