#ifndef RAYGUI_CPP_PANEL_H
#define RAYGUI_CPP_PANEL_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class Panel {
public:
    Panel();
    Panel(::Rectangle bounds, const char *text);
    Panel(float x, float y, float width, float height, const char *text);
    Panel(::Vector2 position, ::Vector2 size, const char *text);

    ~Panel();

    RAYGUI_NODISCARD ::Rectangle GetBounds() const;
    void SetBounds(::Rectangle newBounds);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    void Show() const;

private:
    ::Rectangle bounds;
    const char *text;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_PANEL_H
