#ifndef RAYGUI_CPP_WINDOW_BOX_H
#define RAYGUI_CPP_WINDOW_BOX_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class WindowBox {
public:
    WindowBox();
    WindowBox(Rectangle bounds, const char *title);
    WindowBox(float x, float y, float width, float height, const char *title);
    WindowBox(Vector2 position, Vector2 size, const char *title);

    ~WindowBox();

    RAYGUI_NODISCARD Rectangle GetBounds() const;
    void SetBounds(Rectangle newBounds);

    RAYGUI_NODISCARD const char *GetTitle() const;
    void SetTitle(const char *newTitle);

    RAYGUI_NODISCARD bool Draw() const;

private:
    Rectangle bounds;
    const char *title;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_WINDOW_BOX_H
