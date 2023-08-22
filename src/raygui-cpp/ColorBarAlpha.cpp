#include "raygui-cpp/ColorBarAlpha.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ColorBarAlpha::ColorBarAlpha() : Component<float>({}), text(""), alpha(0) {}

ColorBarAlpha::ColorBarAlpha(Bounds bounds, const char *text, float alpha)
    : Component<float>(bounds), text(text), alpha(alpha) {}

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
    return ::GuiColorBarAlpha(GetBounds().GetRectangle(), text, alpha);
}

RAYGUI_CPP_END_NAMESPACE
