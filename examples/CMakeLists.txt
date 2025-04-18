set(TEST_SOURCES
        ButtonPlacement.cpp
        ChildComponents.cpp
        ButtonCallbacks.cpp
        SimpleButton.cpp
        ButtonColors.cpp
        extras/ImageButton.cpp
)

foreach (source ${TEST_SOURCES})
    get_filename_component(name ${source} NAME_WE)
    add_executable(${name} ${source})
    target_link_libraries(${name} raygui_cpp)
    add_dependencies(${name} copy_example_assets)
endforeach ()

# Copy assets to build directory as a custom target to execute before running in CLion
add_custom_target(
        copy_example_assets
        COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/assets ${CMAKE_CURRENT_BINARY_DIR}/assets
)
message(STATUS "Copying assets from ${CMAKE_CURRENT_SOURCE_DIR}/assets to ${CMAKE_CURRENT_BINARY_DIR}/assets")
