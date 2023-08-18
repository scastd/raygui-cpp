#ifndef RAYGUI_CPP_COLOR_PANEL_H
#define RAYGUI_CPP_COLOR_PANEL_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ColorPanel {
public:
    ColorPanel();
    ColorPanel(::Rectangle bounds, const char *text, ::Color color);
    ColorPanel(float x, float y, float width, float height, const char *text, ::Color color);
    ColorPanel(::Vector2 position, ::Vector2 size, const char *text, ::Color color);

    ~ColorPanel();

    RAYGUI_NODISCARD ::Rectangle GetBounds() const;
    void SetBounds(::Rectangle newBounds);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD ::Color GetColor() const;
    void SetColor(::Color newColor);

    RAYGUI_NODISCARD ::Color Show() const;

private:
    ::Rectangle bounds;
    const char *text;
    ::Color color;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_COLOR_PANEL_H
