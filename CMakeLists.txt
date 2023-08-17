cmake_minimum_required(VERSION 3.17)
project(raygui_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

# Add dependencies
add_subdirectory(dependencies/raylib)

file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "include/*.h")

add_library(${PROJECT_NAME} SHARED ${SOURCES} ${HEADERS})

target_include_directories(${PROJECT_NAME} PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>)
target_include_directories(${PROJECT_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_BINARY_DIR}/include/>)
target_include_directories(${PROJECT_NAME} INTERFACE $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} raylib)
