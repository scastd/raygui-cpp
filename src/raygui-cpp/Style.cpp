#include "raygui-cpp/Style.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Style::Style(Position position, Margin margin) : m_position(position), m_margin(margin) {}

Style::Style(Position position, float margin) : m_position(position), m_margin({ margin, margin, margin, margin }) {}

Style::Style(Style::Position position, float horizontalMargin, float verticalMargin)
    : m_position(position), m_margin({ verticalMargin, horizontalMargin, verticalMargin, horizontalMargin }) {}

Style::Style(Position position, float top, float right, float bottom, float left)
    : m_position(position), m_margin({ top, right, bottom, left }) {}

Style::Position Style::GetPosition() const {
    return m_position;
}

Style::Margin Style::GetMargin() const {
    return m_margin;
}

RAYGUI_CPP_END_NAMESPACE
