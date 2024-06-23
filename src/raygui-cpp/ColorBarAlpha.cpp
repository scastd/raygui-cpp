#include "raygui-cpp/ColorBarAlpha.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ColorBarAlpha::ColorBarAlpha() : text(""), alpha(0) {}

ColorBarAlpha::ColorBarAlpha(const char *text, float alpha) : text(text), alpha(alpha) {}

ColorBarAlpha::ColorBarAlpha(Bounds bounds, const char *text, float alpha)
    : Component<int>(bounds), text(text), alpha(alpha) {}

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

int ColorBarAlpha::Show() {
    WITH_STATE_RENDER(int ret = ::GuiColorBarAlpha(GetBounds().GetRectangle(), text, &alpha))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
