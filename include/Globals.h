#ifndef RAYGUI_CPP_GLOBALS_H
#define RAYGUI_CPP_GLOBALS_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class Globals {
public:
    static void GuiEnable();

    static void GuiDisable();

    static void GuiLock();

    static void GuiUnlock();

    static void GuiIsLocked();

    static void GuiFade(float alpha);

    static void GuiSetState(int state);

    static int GuiGetState();

    class Font {
        static void GuiSetFont(const ::Font &font);

        static ::Font GuiGetFont();
    };

    class Style {
        static void GuiSetStyle(GuiControl control, int property, int value);

        static int GuiGetStyle(GuiControl control, int property);
    };
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_GLOBALS_H
