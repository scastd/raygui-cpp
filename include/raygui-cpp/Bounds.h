#ifndef RAYGUI_CPP_BOUNDS_H
#define RAYGUI_CPP_BOUNDS_H

#include "Directives.h"
#include "raylib.h"

RAYGUI_CPP_BEGIN_NAMESPACE

class Bounds {
public:
    Bounds();
    explicit Bounds(::Rectangle rectangle);
    Bounds(float x, float y, float width, float height);
    Bounds(::Vector2 position, ::Vector2 size);

    RAYGUI_NODISCARD ::Rectangle GetRectangle() const;
    void SetRectangle(::Rectangle newRectangle);

    RAYGUI_NODISCARD float GetX() const;
    void SetX(float newX);

    RAYGUI_NODISCARD float GetY() const;
    void SetY(float newY);

    RAYGUI_NODISCARD float GetWidth() const;
    void SetWidth(float newWidth);

    RAYGUI_NODISCARD float GetHeight() const;
    void SetHeight(float newHeight);

    RAYGUI_NODISCARD static Bounds WindowBounds();

private:
    ::Rectangle m_rectangle;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_BOUNDS_H
