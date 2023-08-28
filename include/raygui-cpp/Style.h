#ifndef RAYGUI_CPP_STYLE_H
#define RAYGUI_CPP_STYLE_H

#include "Directives.h"
#include "Margin.h"

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

    Style();
    explicit Style(Position position);
    Style(Position position, Margin margin);
    Style(Position position, float margin);
    Style(Position position, float horizontalMargin, float verticalMargin);

    RAYGUI_NODISCARD Position GetPosition() const;

    RAYGUI_NODISCARD Margin GetMargin() const;

private:
    Position m_position;
    Margin m_margin;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_STYLE_H
