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

::Vector2 Bounds::GetPosition() const {
    return { m_rectangle.x, m_rectangle.y };
}

void Bounds::SetPosition(::Vector2 newPosition) {
    SetX(newPosition.x);
    SetY(newPosition.y);
}

void Bounds::SetPosition(float x, float y) {
    SetX(x);
    SetY(y);
}

Vector2 Bounds::GetSize() const {
    return { m_rectangle.width, m_rectangle.height };
}

void Bounds::SetSize(Vector2 newSize) {
    SetWidth(newSize.x);
    SetHeight(newSize.y);
}

void Bounds::SetSize(float width, float height) {
    SetWidth(width);
    SetHeight(height);
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

Bounds Bounds::OfPosition(float x, float y) {
    return { x, y, 0, 0 };
}

Bounds Bounds::WithText(const char *text) {
    return WithText(text, GuiGetStyle(DEFAULT, TEXT_SIZE));
}

Bounds Bounds::WithText(const char *text, int fontSize) {
    return { 0, 0, static_cast<float>(MeasureText(text, fontSize)), static_cast<float>(fontSize) };
}

Bounds Bounds::WithText(const char *text, int fontSize, Margin textMargins) {
    return { 0, 0, static_cast<float>(MeasureText(text, fontSize)) + textMargins.h,
             static_cast<float>(fontSize) + textMargins.v };
}

Bounds Bounds::WithPositionAndText(float x, float y, const char *text) {
    Bounds bounds = WithText(text);
    bounds.SetPosition(x, y);
    return bounds;
}

Bounds Bounds::WithPositionAndText(float x, float y, const char *text, int fontSize) {
    Bounds bounds = WithText(text, fontSize);
    bounds.SetPosition(x, y);
    return bounds;
}

Bounds Bounds::WithPositionAndText(float x, float y, const char *text, int fontSize, Margin textMargins) {
    Bounds bounds = WithText(text, fontSize, textMargins);
    bounds.SetPosition(x, y);
    return bounds;
}

RAYGUI_CPP_END_NAMESPACE
