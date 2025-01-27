#include "raygui-cpp/Paintable.h"

RAYGUI_CPP_BEGIN_NAMESPACE

void Paintable::SetBaseColor(const Color color) {
    SetPropertyColor(BASE_COLOR_NORMAL, color);
}

void Paintable::SetTextColor(const Color color) {
    SetPropertyColor(TEXT_COLOR_NORMAL, color);
}

void Paintable::SetBorderColor(const Color color) {
    SetPropertyColor(BORDER_COLOR_NORMAL, color);
}

void Paintable::PreRender() const {
    for (auto const &[control, properties]: m_properties) {
        for (auto prop: properties) {
            prop.SetPrevious(GetColor(GuiGetStyle(control, prop.property)));
            GuiSetStyle(control, prop.property, ColorToInt(prop.current));
        }
    }
}

void Paintable::PostRender() const {
    for (auto const &[control, properties]: m_properties) {
        for (const auto &prop: properties) {
            GuiSetStyle(control, prop.property, ColorToInt(prop.previous));
        }
    }
}

void Paintable::AddProperty(const GuiControl control, const GuiControlProperty property, const Color &color) {
    m_properties[control].push_back(
            { .property = property, .previous = GetColor(GuiGetStyle(control, property)), .current = color });
}

RAYGUI_CPP_END_NAMESPACE
