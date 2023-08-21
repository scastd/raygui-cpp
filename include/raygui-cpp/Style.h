#ifndef RAYGUI_CPP_STYLE_H
#define RAYGUI_CPP_STYLE_H

#include "Directives.h"

RAYGUI_CPP_BEGIN_NAMESPACE

class Style {
public:
    enum class Position {
        TOP_LEFT,
        TOP_CENTER,
        TOP_RIGHT,
        CENTER_LEFT,
        CENTER,
        CENTER_RIGHT,
        BOTTOM_LEFT,
        BOTTOM_CENTER,
        BOTTOM_RIGHT
    };

    struct Margin {
        float top;
        float right;
        float bottom;
        float left;
    };

    Style(Position position);
    Style(Position position, Margin margin);
    Style(Position position, float margin);
    Style(Position position, float horizontalMargin, float verticalMargin);
    Style(Position position, float top, float right, float bottom, float left);

    RAYGUI_NODISCARD Position GetPosition() const;

    RAYGUI_NODISCARD Margin GetMargin() const;

private:
    const Position m_position;
    const Margin m_margin;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_STYLE_H
