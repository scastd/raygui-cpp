#ifndef RAYGUI_CPP_COLOR_BAR_HUE_H
#define RAYGUI_CPP_COLOR_BAR_HUE_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ColorBarHue {
public:
    ColorBarHue();
    ColorBarHue(::Rectangle bounds, const char *text, float value);
    ColorBarHue(float x, float y, float width, float height, const char *text, float value);
    ColorBarHue(::Vector2 position, ::Vector2 size, const char *text, float value);

    ~ColorBarHue();

    RAYGUI_NODISCARD ::Rectangle GetBounds() const;
    void SetBounds(::Rectangle newBounds);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD float GetValue() const;
    void SetValue(float newValue);

    RAYGUI_NODISCARD float Show() const;

private:
    ::Rectangle bounds;
    const char *text;
    float value;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_COLOR_BAR_HUE_H
