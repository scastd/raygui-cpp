# Setup the project and settings
project(raylib C)
set(PROJECT_VERSION 4.2.0)
set(API_VERSION 420)

# Used as public API to be included into other projects
set(raylib_public_headers
    raylib.h
    raygui.h # Added to the library
    )

# Sources to be compiled
set(raylib_sources
    raygui.c # Added to the library
    )

add_library(raylib ${raylib_sources} ${raylib_public_headers})

set_target_properties(raylib PROPERTIES
                      PUBLIC_HEADER "${raylib_public_headers}"
                      VERSION ${PROJECT_VERSION}
                      SOVERSION ${API_VERSION}
                      )

if (WITH_PIC OR BUILD_SHARED_LIBS)
    set_property(TARGET raylib PROPERTY POSITION_INDEPENDENT_CODE ON)
endif ()

# Registering include directories
target_include_directories(raylib
                           PUBLIC
                           $<INSTALL_INTERFACE:include>
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                           PRIVATE
                           ${CMAKE_CURRENT_SOURCE_DIR}
                           )
