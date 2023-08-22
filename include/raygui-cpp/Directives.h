#ifndef RAYGUI_CPP_DIRECTIVES_H
#define RAYGUI_CPP_DIRECTIVES_H

// Defines the namespace of the library as rgc (raylib gui cpp)
// Less typing for the user
#define RAYGUI_CPP_NAMESPACE rgc

#define RAYGUI_CPP_BEGIN_NAMESPACE namespace RAYGUI_CPP_NAMESPACE {
#define RAYGUI_CPP_END_NAMESPACE }

#define RAYGUI_NODISCARD [[nodiscard]]

#endif // RAYGUI_CPP_DIRECTIVES_H
