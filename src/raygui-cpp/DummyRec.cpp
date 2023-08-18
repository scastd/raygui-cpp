#include "raygui-cpp/DummyRec.h"

RAYGUI_CPP_BEGIN_NAMESPACE

DummyRec::DummyRec() : bounds(), text(nullptr) {}

DummyRec::DummyRec(::Rectangle bounds, const char *text) : bounds(bounds), text(text) {}

DummyRec::DummyRec(float x, float y, float width, float height, const char *text)
    : bounds{ x, y, width, height }, text(text) {}

DummyRec::DummyRec(::Vector2 position, ::Vector2 size, const char *text)
    : bounds({ position.x, position.y, size.x, size.y }), text(text) {}

DummyRec::~DummyRec() {
    delete text;
}

::Rectangle DummyRec::GetBounds() const {
    return bounds;
}

void DummyRec::SetBounds(::Rectangle newBounds) {
    this->bounds = newBounds;
}

const char *DummyRec::GetText() const {
    return text;
}

void DummyRec::SetText(const char *newText) {
    this->text = newText;
}

void DummyRec::Show() const {
    ::GuiDummyRec(bounds, text);
}

RAYGUI_CPP_END_NAMESPACE
