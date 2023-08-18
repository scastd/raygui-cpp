#ifndef RAYGUI_CPP_LABEL_BUTTON_H
#define RAYGUI_CPP_LABEL_BUTTON_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class LabelButton {
public:
    LabelButton();
    LabelButton(Rectangle bounds, const char *text);
    LabelButton(float x, float y, float width, float height, const char *text);
    LabelButton(Vector2 position, Vector2 size, const char *text);

    RAYGUI_NODISCARD Rectangle GetBounds() const;
    void SetBounds(Rectangle newBounds);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD bool Show() const;

private:
    Rectangle bounds;
    const char *text;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_LABEL_BUTTON_H
