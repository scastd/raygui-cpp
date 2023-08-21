#include "raygui-cpp/Bounds.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Bounds::Bounds() : m_bounds({ 0, 0, 0, 0 }) {}

Bounds::Bounds(::Rectangle bounds) : m_bounds(bounds) {}

Bounds::Bounds(float x, float y, float width, float height) : m_bounds({ x, y, width, height }) {}

Bounds::Bounds(::Vector2 position, ::Vector2 size) : m_bounds({ position.x, position.y, size.x, size.y }) {}

::Rectangle Bounds::GetBounds() const {
    return m_bounds;
}

void Bounds::SetBounds(::Rectangle newBounds) {
    m_bounds = newBounds;
}

float Bounds::GetX() const {
    return m_bounds.x;
}

void Bounds::SetX(float newX) {
    m_bounds.x = newX;
}

float Bounds::GetY() const {
    return m_bounds.y;
}

void Bounds::SetY(float newY) {
    m_bounds.y = newY;
}

float Bounds::GetWidth() const {
    return m_bounds.width;
}

void Bounds::SetWidth(float newWidth) {
    m_bounds.width = newWidth;
}

float Bounds::GetHeight() const {
    return m_bounds.height;
}

void Bounds::SetHeight(float newHeight) {
    m_bounds.height = newHeight;
}

RAYGUI_CPP_END_NAMESPACE
