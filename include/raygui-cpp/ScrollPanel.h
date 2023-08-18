#ifndef RAYGUI_CPP_SCROLL_PANEL_H
#define RAYGUI_CPP_SCROLL_PANEL_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ScrollPanel {
public:
    ScrollPanel();
    ScrollPanel(::Rectangle bounds, const char *text, ::Rectangle content, ::Vector2 *scroll);
    ScrollPanel(float x, float y, float width, float height, const char *text, ::Rectangle content, ::Vector2 *scroll);
    ScrollPanel(::Vector2 position, ::Vector2 size, const char *text, ::Rectangle content, ::Vector2 *scroll);

    ~ScrollPanel() = default;

    RAYGUI_NODISCARD ::Rectangle GetBounds() const;
    void SetBounds(::Rectangle newBounds);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD ::Rectangle GetContent() const;
    void SetContent(::Rectangle newContent);

    RAYGUI_NODISCARD ::Vector2 *GetScroll() const;
    void SetScroll(::Vector2 *newScroll);

    RAYGUI_NODISCARD ::Rectangle Show() const;

private:
    ::Rectangle bounds;
    const char *text;
    ::Rectangle content;
    ::Vector2 *scroll;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_SCROLL_PANEL_H
