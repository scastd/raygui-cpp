#ifndef RAYGUI_CPP_GRID_H
#define RAYGUI_CPP_GRID_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class Grid : public Component<int> {
public:
    Grid();
    Grid(const char *text, float spacing, int subdivisions, Vector2 mouseCell);
    Grid(Bounds bounds, const char *text, float spacing, int subdivisions, Vector2 mouseCell);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD float GetSpacing() const;
    void SetSpacing(float newSpacing);

    RAYGUI_NODISCARD int GetSubdivisions() const;
    void SetSubdivisions(int newSubdivisions);

    RAYGUI_NODISCARD ::Vector2 GetMouseCell() const;
    void SetMouseCell(::Vector2 newMouseCell);

    RAYGUI_NODISCARD int Show() override;

private:
    const char *text;
    float spacing;
    int subdivisions;
    Vector2 mouseCell;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_GRID_H
