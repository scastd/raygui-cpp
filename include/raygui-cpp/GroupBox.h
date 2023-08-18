#ifndef RAYGUI_CPP_GROUPBOX_H
#define RAYGUI_CPP_GROUPBOX_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class GroupBox {
public:
    GroupBox();
    GroupBox(const ::Rectangle &bounds, const char *text);
    GroupBox(float x, float y, float width, float height, const char *text);
    GroupBox(const ::Vector2 &position, const ::Vector2 &size, const char *text);

    ~GroupBox();

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

#endif // RAYGUI_CPP_GROUPBOX_H
