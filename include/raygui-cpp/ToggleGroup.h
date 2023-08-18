#ifndef RAYGUI_CPP_TOGGLE_GROUP_H
#define RAYGUI_CPP_TOGGLE_GROUP_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ToggleGroup {
private:
    ToggleGroup();
    ToggleGroup(Rectangle bounds, const char *text, int active);
    ToggleGroup(float x, float y, float width, float height, const char *text, int active);
    ToggleGroup(Vector2 position, Vector2 size, const char *text, int active);

    ~ToggleGroup();

    RAYGUI_NODISCARD Rectangle GetBounds() const;
    void SetBounds(Rectangle newBounds);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD int GetActive() const;
    void SetActive(int newActive);

    RAYGUI_NODISCARD bool Show() const;

public:
    Rectangle bounds;
    const char *text;
    int active;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_TOGGLE_GROUP_H
