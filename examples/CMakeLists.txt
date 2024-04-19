set(TEST_SOURCES
        ButtonPlacement.cpp
        ChildComponents.cpp
        ButtonCallbacks.cpp
)

foreach (source ${TEST_SOURCES})
    get_filename_component(name ${source} NAME_WE)
    add_executable(${name} ${source})
    target_link_libraries(${name} raygui_cpp)
endforeach ()
