cmake_minimum_required(VERSION 3.8)
project(raygui_cpp
        LANGUAGES C CXX
        VERSION 0.1.0
        DESCRIPTION "C++ wrapper for raygui")

set(CMAKE_CXX_STANDARD 17)

# Add dependencies
set(RAYGUI_CPP_SOURCE_FILES
        # C++ files
        src/raygui-cpp/Button.cpp
        src/raygui-cpp/CheckBox.cpp
        src/raygui-cpp/ColorBarAlpha.cpp
        src/raygui-cpp/ColorBarHue.cpp
        src/raygui-cpp/ColorPanel.cpp
        src/raygui-cpp/ColorPicker.cpp
        src/raygui-cpp/ComboBox.cpp
        src/raygui-cpp/DropdownBox.cpp
        src/raygui-cpp/DummyRec.cpp
        src/raygui-cpp/Globals.cpp
        src/raygui-cpp/Grid.cpp
        src/raygui-cpp/GroupBox.cpp
        src/raygui-cpp/LabelButton.cpp
        src/raygui-cpp/Label.cpp
        src/raygui-cpp/Line.cpp
        src/raygui-cpp/ListView.cpp
        src/raygui-cpp/ListViewEx.cpp
        src/raygui-cpp/MessageBox.cpp
        src/raygui-cpp/Panel.cpp
        src/raygui-cpp/ProgressBar.cpp
        src/raygui-cpp/ScrollPanel.cpp
        src/raygui-cpp/SliderBar.cpp
        src/raygui-cpp/Slider.cpp
        src/raygui-cpp/Spinner.cpp
        src/raygui-cpp/StatusBar.cpp
        src/raygui-cpp/TabBar.cpp
        src/raygui-cpp/TextBox.cpp
        src/raygui-cpp/TextInputBox.cpp
        src/raygui-cpp/Toggle.cpp
        src/raygui-cpp/ToggleGroup.cpp
        src/raygui-cpp/ValueBox.cpp
        src/raygui-cpp/WindowBox.cpp
        src/raygui-cpp/Bounds.cpp
        src/raygui-cpp/Style.cpp
        src/raygui-cpp/ToggleSlider.cpp
        src/raygui-cpp/ColorPickerHSV.cpp
        src/raygui-cpp/ColorPanelHSV.cpp
)

set(RAYGUI_CPP_HEADER_FILES
        # C files
        dependencies/raylib/src/raygui.h
        # C++ files
        include/raygui-cpp/Button.h
        include/raygui-cpp/CheckBox.h
        include/raygui-cpp/ColorBarAlpha.h
        include/raygui-cpp/ColorBarHue.h
        include/raygui-cpp/ColorPanel.h
        include/raygui-cpp/ColorPicker.h
        include/raygui-cpp/ComboBox.h
        include/raygui-cpp/Directives.h
        include/raygui-cpp/DropdownBox.h
        include/raygui-cpp/DummyRec.h
        include/raygui-cpp/Globals.h
        include/raygui-cpp/Grid.h
        include/raygui-cpp/GroupBox.h
        include/raygui-cpp/LabelButton.h
        include/raygui-cpp/Label.h
        include/raygui-cpp/Line.h
        include/raygui-cpp/ListViewEx.h
        include/raygui-cpp/ListView.h
        include/raygui-cpp/MessageBox.h
        include/raygui-cpp/Panel.h
        include/raygui-cpp/ProgressBar.h
        include/raygui-cpp/ScrollPanel.h
        include/raygui-cpp/SliderBar.h
        include/raygui-cpp/Slider.h
        include/raygui-cpp/Spinner.h
        include/raygui-cpp/StatusBar.h
        include/raygui-cpp/TabBar.h
        include/raygui-cpp/TextBox.h
        include/raygui-cpp/TextInputBox.h
        include/raygui-cpp/ToggleGroup.h
        include/raygui-cpp/Toggle.h
        include/raygui-cpp/ValueBox.h
        include/raygui-cpp/WindowBox.h
        include/raygui-cpp.h
        include/raygui-cpp/Component.h
        include/raygui-cpp/Bounds.h
        include/raygui-cpp/Style.h
        include/raygui-cpp/Margin.h
        include/raygui-cpp/ToggleSlider.h
        include/raygui-cpp/ColorPickerHSV.h
        include/raygui-cpp/ColorPanelHSV.h
        include/raygui-cpp/Utils.h
)

option(BUILD_SHARED_LIBS "Build raygui_cpp as shared library" OFF)

if (BUILD_SHARED_LIBS)
    message(STATUS "Building raygui_cpp as shared library")
    add_library(raygui_cpp SHARED ${RAYGUI_CPP_SOURCE_FILES} ${RAYGUI_CPP_HEADER_FILES})
else ()
    message(STATUS "Building raygui_cpp as static library")
    add_library(raygui_cpp STATIC ${RAYGUI_CPP_SOURCE_FILES} ${RAYGUI_CPP_HEADER_FILES})
endif ()

include(cmake/CPM.cmake)
CPMAddPackage("gh:raysan5/raylib#5.0")

target_link_libraries(raygui_cpp
        PUBLIC raylib
)

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

# Examples
option(BUILD_RAYGUI_EXAMPLES "Build examples" ON)

if (BUILD_RAYGUI_EXAMPLES)
    message(STATUS "Building raygui examples")
    add_subdirectory(examples)
endif ()
