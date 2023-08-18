#ifndef RAYGUI_CPP_COLOR_BAR_ALPHA_H
#define RAYGUI_CPP_COLOR_BAR_ALPHA_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ColorBarAlpha {
public:
    ColorBarAlpha();
    ColorBarAlpha(Rectangle bounds, const char *text, float alpha);
    ColorBarAlpha(float x, float y, float width, float height, const char *text, float alpha);
    ColorBarAlpha(Vector2 position, Vector2 size, const char *text, float alpha);

    ~ColorBarAlpha();

    RAYGUI_NODISCARD Rectangle GetBounds() const;
    void SetBounds(Rectangle newBounds);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD float GetAlpha() const;
    void SetAlpha(float newAlpha);

    RAYGUI_NODISCARD float Show() const;

private:
    Rectangle bounds;
    const char *text;
    float alpha;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_COLOR_BAR_ALPHA_H
