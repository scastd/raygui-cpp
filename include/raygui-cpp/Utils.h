#ifndef RAYGUI_CPP_UTILS_H
#define RAYGUI_CPP_UTILS_H

#include "Component.h"
#include "Directives.h"

RAYGUI_CPP_BEGIN_NAMESPACE

/**
 * @brief Converts a component to a component of type T.
 *
 * @param component The component to convert.
 * @tparam T The type to cast to.
 */
template<typename T>
auto ToComponent(rgc::Component<T> *component) {
    return component;
}

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_UTILS_H
