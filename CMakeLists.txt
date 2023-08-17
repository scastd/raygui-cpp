cmake_minimum_required(VERSION 3.17)
project(raygui_cpp
        LANGUAGES CXX
        VERSION 0.0.1
        DESCRIPTION "C++ wrapper for raygui")

# Add dependencies
add_subdirectory(dependencies/raylib)

add_subdirectory(src)

target_link_libraries(${PROJECT_NAME} raylib)
