set(RAYGUI_CPP_SOURCE_FILES
        Button.cpp
        CheckBox.cpp
        ColorBarAlpha.cpp
        ColorBarHue.cpp
        ColorPanel.cpp
        ColorPicker.cpp
        ComboBox.cpp
        DropdownBox.cpp
        DummyRec.cpp
        Globals.cpp
        Grid.cpp
        GroupBox.cpp
        LabelButton.cpp
        Label.cpp
        Line.cpp
        ListView.cpp
        ListViewEx.cpp
        MessageBox.cpp
        Panel.cpp
        ProgressBar.cpp
        ScrollPanel.cpp
        SliderBar.cpp
        Slider.cpp
        Spinner.cpp
        StatusBar.cpp
        TabBar.cpp
        TextBox.cpp
        TextInputBox.cpp
        Toggle.cpp
        ToggleGroup.cpp
        ValueBox.cpp
        WindowBox.cpp
)

set(RAYGUI_CPP_HEADER_FILES
        ../include/Button.h
        ../include/CheckBox.h
        ../include/ColorBarAlpha.h
        ../include/ColorBarHue.h
        ../include/ColorPanel.h
        ../include/ColorPicker.h
        ../include/ComboBox.h
        ../include/Directives.h
        ../include/DropdownBox.h
        ../include/DummyRec.h
        ../include/Globals.h
        ../include/Grid.h
        ../include/GroupBox.h
        ../include/LabelButton.h
        ../include/Label.h
        ../include/Line.h
        ../include/ListViewEx.h
        ../include/ListView.h
        ../include/MessageBox.h
        ../include/Panel.h
        ../include/ProgressBar.h
        ../include/ScrollPanel.h
        ../include/SliderBar.h
        ../include/Slider.h
        ../include/Spinner.h
        ../include/StatusBar.h
        ../include/TabBar.h
        ../include/TextBox.h
        ../include/TextInputBox.h
        ../include/ToggleGroup.h
        ../include/Toggle.h
        ../include/ValueBox.h
        ../include/WindowBox.h
)

add_library(raygui_cpp STATIC ${RAYGUI_CPP_SOURCE_FILES} ${RAYGUI_CPP_HEADER_FILES})

target_include_directories(raygui_cpp
        PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>
        PUBLIC $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
        PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}
)

set_target_properties(raygui_cpp PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO
        VERSION ${PROJECT_VERSION}
        SOVERSION ${PROJECT_VERSION_MAJOR}
)
