#ifndef RAYGUI_CPP_BOUNDS_H
#define RAYGUI_CPP_BOUNDS_H

#include "Directives.h"
#include "Margin.h"
#include "raygui.h"

RAYGUI_CPP_BEGIN_NAMESPACE

class Bounds {
public:
    Bounds();
    explicit Bounds(::Rectangle rectangle);
    Bounds(float x, float y, float width, float height);
    Bounds(::Vector2 position, ::Vector2 size);

    RAYGUI_CPP_NODISCARD ::Rectangle GetRectangle() const;
    void SetRectangle(::Rectangle newRectangle);

    RAYGUI_CPP_NODISCARD ::Vector2 GetPosition() const;
    void SetPosition(::Vector2 newPosition);
    void Set(float x, float y);

    RAYGUI_CPP_NODISCARD float GetX() const;
    void SetX(float newX);

    RAYGUI_CPP_NODISCARD float GetY() const;
    void SetY(float newY);

    RAYGUI_CPP_NODISCARD float GetWidth() const;
    void SetWidth(float newWidth);

    RAYGUI_CPP_NODISCARD float GetHeight() const;
    void SetHeight(float newHeight);

    RAYGUI_CPP_NODISCARD static Bounds WindowBounds();

    /**
     * @brief Creates a Bounds object with the given width and height,
     * and with the position set to (0, 0).
     *
     * @param width The width of the Bounds object.
     * @param height The height of the Bounds object.
     *
     * @return A Bounds object with the given width and height.
     */
    RAYGUI_CPP_NODISCARD static Bounds OfSize(float width, float height);

    RAYGUI_CPP_NODISCARD static Bounds WithText(const char *text);

    RAYGUI_CPP_NODISCARD static Bounds WithText(const char *text, int fontSize);

    RAYGUI_CPP_NODISCARD static Bounds WithText(const char *text, int fontSize, Margin textMargins);

    RAYGUI_CPP_NODISCARD static Bounds WithPositionAndText(float x, float y, const char *text);

    RAYGUI_CPP_NODISCARD static Bounds WithPositionAndText(float x, float y, const char *text, int fontSize);

    RAYGUI_CPP_NODISCARD static Bounds WithPositionAndText(float x, float y, const char *text, int fontSize,
                                                           Margin textMargins);

private:
    ::Rectangle m_rectangle;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_BOUNDS_H
