#include "raygui-cpp/Grid.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Grid::Grid() : Component<::Vector2>(), text(nullptr), spacing(0), subdivisions(0) {}

Grid::Grid(Bounds bounds, const char *text, float spacing, int subdivisions)
    : Component<::Vector2>(bounds), text(text), spacing(spacing), subdivisions(subdivisions) {}

const char *Grid::GetText() const {
    return text;
}

void Grid::SetText(const char *newText) {
    this->text = newText;
}

float Grid::GetSpacing() const {
    return spacing;
}

void Grid::SetSpacing(float newSpacing) {
    this->spacing = newSpacing;
}

int Grid::GetSubdivisions() const {
    return subdivisions;
}

void Grid::SetSubdivisions(int newSubdivisions) {
    this->subdivisions = newSubdivisions;
}

::Vector2 Grid::Show() const {
    return ::GuiGrid(GetBounds().GetRectangle(), text, spacing, subdivisions);
}

RAYGUI_CPP_END_NAMESPACE
