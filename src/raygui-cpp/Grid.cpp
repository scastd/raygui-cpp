#include "raygui-cpp/Grid.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Grid::Grid() : text(nullptr), spacing(0), subdivisions(0), mouseCell({}) {}

Grid::Grid(const char *text, float spacing, int subdivisions, Vector2 mouseCell)
    : text(text), spacing(spacing), subdivisions(subdivisions), mouseCell(mouseCell) {}

Grid::Grid(Bounds bounds, const char *text, float spacing, int subdivisions, Vector2 mouseCell)
    : Component<int>(bounds), text(text), spacing(spacing), subdivisions(subdivisions), mouseCell(mouseCell) {}

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

Vector2 Grid::GetMouseCell() const {
    return mouseCell;
}

void Grid::SetMouseCell(Vector2 newMouseCell) {
    this->mouseCell = newMouseCell;
}

int Grid::Show() {
    WITH_STATE_RENDER(int ret = ::GuiGrid(GetBounds().GetRectangle(), text, spacing, subdivisions, &mouseCell))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
