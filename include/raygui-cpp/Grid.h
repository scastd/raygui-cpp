#ifndef RAYGUI_CPP_GRID_H
#define RAYGUI_CPP_GRID_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class Grid : public Component<::Vector2> {
public:
    Grid();
    Grid(const char *text, float spacing, int subdivisions);
    Grid(Bounds bounds, const char *text, float spacing, int subdivisions);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD float GetSpacing() const;
    void SetSpacing(float newSpacing);

    RAYGUI_NODISCARD int GetSubdivisions() const;
    void SetSubdivisions(int newSubdivisions);

    RAYGUI_NODISCARD ::Vector2 Show() const override;

private:
    const char *text;
    float spacing;
    int subdivisions;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_GRID_H
