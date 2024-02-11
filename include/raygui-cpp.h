#ifndef RAYGUI_CPP_RAYGUI_CPP_H
#define RAYGUI_CPP_RAYGUI_CPP_H

// **************************************************************************************************
// IMPORTANT NOTE:
//
// This section is included to make sure that the implementation of raygui is included only once
// for the entire project.
// This is necessary because raygui is implemented in raygui.h, and if it is
// included in multiple files, the linker will complain about multiple definitions of the same
// functions.
// **************************************************************************************************
#define RAYGUI_IMPLEMENTATION
#include <raygui.h>
#undef RAYGUI_IMPLEMENTATION

#include "raygui-cpp/Button.h"
#include "raygui-cpp/CheckBox.h"
#include "raygui-cpp/ColorBarAlpha.h"
#include "raygui-cpp/ColorBarHue.h"
#include "raygui-cpp/ColorPanel.h"
#include "raygui-cpp/ColorPicker.h"
#include "raygui-cpp/ComboBox.h"
#include "raygui-cpp/Directives.h"
#include "raygui-cpp/DropdownBox.h"
#include "raygui-cpp/DummyRec.h"
#include "raygui-cpp/Globals.h"
#include "raygui-cpp/Grid.h"
#include "raygui-cpp/GroupBox.h"
#include "raygui-cpp/Label.h"
#include "raygui-cpp/LabelButton.h"
#include "raygui-cpp/Line.h"
#include "raygui-cpp/ListView.h"
#include "raygui-cpp/ListViewEx.h"
#include "raygui-cpp/MessageBox.h"
#include "raygui-cpp/Panel.h"
#include "raygui-cpp/ProgressBar.h"
#include "raygui-cpp/ScrollPanel.h"
#include "raygui-cpp/Slider.h"
#include "raygui-cpp/SliderBar.h"
#include "raygui-cpp/Spinner.h"
#include "raygui-cpp/StatusBar.h"
#include "raygui-cpp/TabBar.h"
#include "raygui-cpp/TextBox.h"
#include "raygui-cpp/TextInputBox.h"
#include "raygui-cpp/Toggle.h"
#include "raygui-cpp/ToggleGroup.h"
#include "raygui-cpp/ValueBox.h"
#include "raygui-cpp/WindowBox.h"

#include "raygui-cpp/Utils.h"

#endif // RAYGUI_CPP_RAYGUI_CPP_H
