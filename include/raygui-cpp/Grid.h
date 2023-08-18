#ifndef RAYGUI_CPP_GRID_H
#define RAYGUI_CPP_GRID_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class Grid {
public:
    Grid();
    Grid(Rectangle bounds, const char *text, float spacing, int subdivisions);
    Grid(float x, float y, float width, float height, const char *text, float spacing, int subdivisions);
    Grid(Vector2 position, Vector2 size, const char *text, float spacing, int subdivisions);

    ~Grid();

    RAYGUI_NODISCARD Rectangle GetBounds() const;
    void SetBounds(Rectangle newBounds);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD float GetSpacing() const;
    void SetSpacing(float newSpacing);

    RAYGUI_NODISCARD int GetSubdivisions() const;
    void SetSubdivisions(int newSubdivisions);

    RAYGUI_NODISCARD Vector2 Show() const;

private:
    Rectangle bounds;
    const char *text;
    float spacing;
    int subdivisions;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_GRID_H
