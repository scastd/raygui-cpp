#ifndef RAYGUI_CPP_TOGGLE_SLIDER_H
#define RAYGUI_CPP_TOGGLE_SLIDER_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ToggleSlider : public Component<int> {
public:
    ToggleSlider();
    ToggleSlider(const char *text, int active);
    ToggleSlider(Bounds bounds, const char *text, int active);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD int GetActive() const;
    void SetActive(int newActive);

    RAYGUI_NODISCARD int Show() override;

private:
    const char *text;
    int active;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_TOGGLE_SLIDER_H
