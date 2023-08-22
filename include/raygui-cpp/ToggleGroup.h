#ifndef RAYGUI_CPP_TOGGLE_GROUP_H
#define RAYGUI_CPP_TOGGLE_GROUP_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ToggleGroup : public Component<int> {
public:
    ToggleGroup();
    ToggleGroup(const char *text, int active);
    ToggleGroup(Bounds bounds, const char *text, int active);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD int GetActive() const;
    void SetActive(int newActive);

    RAYGUI_NODISCARD int Show() const override;

private:
    const char *text;
    int active;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_TOGGLE_GROUP_H
