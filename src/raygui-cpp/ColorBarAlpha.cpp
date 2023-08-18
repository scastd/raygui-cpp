#include "raygui-cpp/ColorBarAlpha.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ColorBarAlpha::ColorBarAlpha() : bounds({0, 0, 0, 0}), text(""), alpha(0) {}

ColorBarAlpha::ColorBarAlpha(Rectangle bounds, const char *text, float alpha) : bounds(bounds), text(text), alpha(alpha) {}

ColorBarAlpha::ColorBarAlpha(float x, float y, float width, float height, const char *text, float alpha) : bounds({x, y, width, height}), text(text), alpha(alpha) {}

ColorBarAlpha::ColorBarAlpha(Vector2 position, Vector2 size, const char *text, float alpha) : bounds({position.x, position.y, size.x, size.y}), text(text), alpha(alpha) {}

ColorBarAlpha::~ColorBarAlpha() {
    delete text;
}

Rectangle ColorBarAlpha::GetBounds() const {
    return bounds;
}

void ColorBarAlpha::SetBounds(Rectangle newBounds) {
    this->bounds = newBounds;
}

const char *ColorBarAlpha::GetText() const {
    return text;
}

void ColorBarAlpha::SetText(const char *newText) {
    this->text = newText;
}

float ColorBarAlpha::GetAlpha() const {
    return alpha;
}

void ColorBarAlpha::SetAlpha(float newAlpha) {
    this->alpha = newAlpha;
}

float ColorBarAlpha::Show() const {
    return ::GuiColorBarAlpha(bounds, text, alpha);
}

RAYGUI_CPP_END_NAMESPACE
