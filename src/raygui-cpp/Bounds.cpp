#include "raygui-cpp/Bounds.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Bounds::Bounds() : m_rectangle({ 0, 0, 0, 0 }) {}

Bounds::Bounds(::Rectangle rectangle) : m_rectangle(rectangle) {}

Bounds::Bounds(float x, float y, float width, float height) : m_rectangle({ x, y, width, height }) {}

Bounds::Bounds(::Vector2 position, ::Vector2 size) : m_rectangle({ position.x, position.y, size.x, size.y }) {}

::Rectangle Bounds::GetRectangle() const {
    return m_rectangle;
}

void Bounds::SetRectangle(::Rectangle newRectangle) {
    m_rectangle = newRectangle;
}

float Bounds::GetX() const {
    return m_rectangle.x;
}

void Bounds::SetX(float newX) {
    m_rectangle.x = newX;
}

float Bounds::GetY() const {
    return m_rectangle.y;
}

void Bounds::SetY(float newY) {
    m_rectangle.y = newY;
}

float Bounds::GetWidth() const {
    return m_rectangle.width;
}

void Bounds::SetWidth(float newWidth) {
    m_rectangle.width = newWidth;
}

float Bounds::GetHeight() const {
    return m_rectangle.height;
}

void Bounds::SetHeight(float newHeight) {
    m_rectangle.height = newHeight;
}

Bounds Bounds::WindowBounds() {
    return { 0, 0, static_cast<float>(GetScreenWidth()), static_cast<float>(GetScreenHeight()) };
}

Bounds Bounds::OfSize(float width, float height) {
    return { 0, 0, width, height };
}

RAYGUI_CPP_END_NAMESPACE
