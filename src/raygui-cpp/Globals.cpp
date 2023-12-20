#include "raygui-cpp/Globals.h"

RAYGUI_CPP_BEGIN_NAMESPACE

void Globals::GuiEnable() {
    ::GuiEnable();
}

void Globals::GuiDisable() {
    ::GuiDisable();
}

void Globals::GuiLock() {
    ::GuiLock();
}

void Globals::GuiUnlock() {
    ::GuiUnlock();
}

bool Globals::GuiIsLocked() {
    return ::GuiIsLocked();
}

void Globals::GuiSetAlpha(float alpha) {
    ::GuiSetAlpha(alpha);
}

void Globals::GuiSetState(int state) {
    ::GuiSetState(state);
}

int Globals::GuiGetState() {
    return ::GuiGetState();
}

void Globals::Font::GuiSetFont(const ::Font &font) {
    ::GuiSetFont(font);
}

::Font Globals::Font::GuiGetFont() {
    return ::GuiGetFont();
}

void Globals::Style::GuiSetStyle(::GuiControl control, int property, int value) {
    ::GuiSetStyle(control, property, value);
}

int Globals::Style::GuiGetStyle(::GuiControl control, int property) {
    return ::GuiGetStyle(control, property);
}

void Globals::Style::GuiLoadStyle(const char *fileName) {
    ::GuiLoadStyle(fileName);
}

void Globals::Style::GuiLoadStyleDefault() {
    ::GuiLoadStyleDefault();
}

void Globals::Tooltip::GuiEnableTooltip() {
    ::GuiEnableTooltip();
}

void Globals::Tooltip::GuiDisableTooltip() {
    ::GuiDisableTooltip();
}

void Globals::Tooltip::GuiSetTooltip(const char *tooltip) {
    ::GuiSetTooltip(tooltip);
}

const char *Globals::Icon::GuiIconText(int iconId, const char *text) {
    return ::GuiIconText(iconId, text);
}

#if !defined(RAYGUI_NO_ICONS)
void Globals::Icon::GuiSetIconScale(int scale) {
    ::GuiSetIconScale(scale);
}

unsigned int *Globals::Icon::GuiGetIcons() {
    return ::GuiGetIcons();
}

char **Globals::Icon::GuiLoadIcons(const char *fileName, bool loadIconsName) {
    return ::GuiLoadIcons(fileName, loadIconsName);
}

void Globals::Icon::GuiDrawIcon(int iconId, int posX, int posY, int pixelSize, ::Color color) {
    ::GuiDrawIcon(iconId, posX, posY, pixelSize, color);
}
#endif

RAYGUI_CPP_END_NAMESPACE
