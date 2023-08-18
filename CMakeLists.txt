cmake_minimum_required(VERSION 3.17)
project(raygui_cpp
        LANGUAGES C CXX
        VERSION 0.0.1
        DESCRIPTION "C++ wrapper for raygui")

# Add dependencies
set(RAYGUI_CPP_SOURCE_FILES
        # C files
        dependencies/raylib/src/raygui.c
        # C++ files
        src/Button.cpp
        src/CheckBox.cpp
        src/ColorBarAlpha.cpp
        src/ColorBarHue.cpp
        src/ColorPanel.cpp
        src/ColorPicker.cpp
        src/ComboBox.cpp
        src/DropdownBox.cpp
        src/DummyRec.cpp
        src/Globals.cpp
        src/Grid.cpp
        src/GroupBox.cpp
        src/LabelButton.cpp
        src/Label.cpp
        src/Line.cpp
        src/ListView.cpp
        src/ListViewEx.cpp
        src/MessageBox.cpp
        src/Panel.cpp
        src/ProgressBar.cpp
        src/ScrollPanel.cpp
        src/SliderBar.cpp
        src/Slider.cpp
        src/Spinner.cpp
        src/StatusBar.cpp
        src/TabBar.cpp
        src/TextBox.cpp
        src/TextInputBox.cpp
        src/Toggle.cpp
        src/ToggleGroup.cpp
        src/ValueBox.cpp
        src/WindowBox.cpp
)

set(RAYGUI_CPP_HEADER_FILES
        # C files
        dependencies/raylib/src/raylib.h
        dependencies/raylib/src/raygui.h
        # C++ files
        include/Button.h
        include/CheckBox.h
        include/ColorBarAlpha.h
        include/ColorBarHue.h
        include/ColorPanel.h
        include/ColorPicker.h
        include/ComboBox.h
        include/Directives.h
        include/DropdownBox.h
        include/DummyRec.h
        include/Globals.h
        include/Grid.h
        include/GroupBox.h
        include/LabelButton.h
        include/Label.h
        include/Line.h
        include/ListViewEx.h
        include/ListView.h
        include/MessageBox.h
        include/Panel.h
        include/ProgressBar.h
        include/ScrollPanel.h
        include/SliderBar.h
        include/Slider.h
        include/Spinner.h
        include/StatusBar.h
        include/TabBar.h
        include/TextBox.h
        include/TextInputBox.h
        include/ToggleGroup.h
        include/Toggle.h
        include/ValueBox.h
        include/WindowBox.h
)

option(BUILD_SHARED_LIBS "Build raygui_cpp as shared library" OFF)

if (BUILD_SHARED_LIBS)
    message(STATUS "Building raygui_cpp as shared library")
    add_library(raygui_cpp SHARED ${RAYGUI_CPP_SOURCE_FILES} ${RAYGUI_CPP_HEADER_FILES})
else ()
    message(STATUS "Building raygui_cpp as static library")
    add_library(raygui_cpp STATIC ${RAYGUI_CPP_SOURCE_FILES} ${RAYGUI_CPP_HEADER_FILES})
endif ()

target_include_directories(raygui_cpp
        PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/dependencies/raylib/src
)

set_target_properties(raygui_cpp PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO
        VERSION ${PROJECT_VERSION}
        SOVERSION ${PROJECT_VERSION_MAJOR}
)
