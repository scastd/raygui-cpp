#ifndef RAYGUI_CPP_SCROLL_PANEL_H
#define RAYGUI_CPP_SCROLL_PANEL_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ScrollPanel : public Component<int> {
public:
    ScrollPanel();
    ScrollPanel(const char *text, ::Rectangle content, ::Vector2 scroll, ::Rectangle view);
    ScrollPanel(Bounds bounds, const char *text, ::Rectangle content, ::Vector2 scroll, ::Rectangle view);

    RAYGUI_CPP_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_CPP_NODISCARD ::Rectangle GetContent() const;
    void SetContent(::Rectangle newContent);

    RAYGUI_CPP_NODISCARD ::Vector2 GetScroll() const;
    void SetScroll(::Vector2 newScroll);

    RAYGUI_CPP_NODISCARD ::Rectangle GetView() const;
    void SetView(::Rectangle newView);

    RAYGUI_CPP_NODISCARD int Show() override;

private:
    const char *text;
    ::Rectangle content;
    ::Vector2 scroll;
    ::Rectangle view;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_SCROLL_PANEL_H
