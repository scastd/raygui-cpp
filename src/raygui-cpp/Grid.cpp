#include "raygui-cpp/Grid.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Grid::Grid() : bounds({ 0, 0, 0, 0 }), text(nullptr), spacing(0), subdivisions(0) {}

Grid::Grid(::Rectangle bounds, const char *text, float spacing, int subdivisions)
    : bounds(bounds), text(text), spacing(spacing), subdivisions(subdivisions) {}

Grid::Grid(float x, float y, float width, float height, const char *text, float spacing, int subdivisions)
    : bounds({ x, y, width, height }), text(text), spacing(spacing), subdivisions(subdivisions) {}

Grid::Grid(::Vector2 position, ::Vector2 size, const char *text, float spacing, int subdivisions)
    : bounds({ position.x, position.y, size.x, size.y }), text(text), spacing(spacing), subdivisions(subdivisions) {}

::Rectangle Grid::GetBounds() const {
    return bounds;
}

void Grid::SetBounds(::Rectangle newBounds) {
    this->bounds = newBounds;
}

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
    return ::GuiGrid(bounds, text, spacing, subdivisions);
}

RAYGUI_CPP_END_NAMESPACE
