#include "raygui-cpp/Style.h"

RAYGUI_CPP_BEGIN_NAMESPACE

Style::Style() : m_position(Style::Position::TOP_LEFT), m_margin({ 0, 0 }) {}

Style::Style(Style::Position position) : m_position(position), m_margin({ 0, 0 }) {}

Style::Style(Position position, Margin margin) : m_position(position), m_margin(margin) {}

Style::Style(Position position, float margin) : m_position(position), m_margin({ margin, margin }) {}

Style::Style(Style::Position position, float horizontalMargin, float verticalMargin)
    : m_position(position), m_margin({ horizontalMargin, verticalMargin }) {}

Style::Position Style::GetPosition() const {
    return m_position;
}

Margin Style::GetMargin() const {
    return m_margin;
}

RAYGUI_CPP_END_NAMESPACE
