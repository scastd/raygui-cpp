#include "Globals.h"

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

void Globals::GuiIsLocked() {
    ::GuiIsLocked();
}

void Globals::GuiFade(float alpha) {
    ::GuiFade(alpha);
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

void Globals::Style::GuiSetStyle(GuiControl control, int property, int value) {
    ::GuiSetStyle(control, property, value);
}

int Globals::Style::GuiGetStyle(GuiControl control, int property) {
    return ::GuiGetStyle(control, property);
}

RAYGUI_CPP_END_NAMESPACE
