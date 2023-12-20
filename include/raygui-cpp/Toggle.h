#ifndef RAYGUI_CPP_TOGGLE_H
#define RAYGUI_CPP_TOGGLE_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class Toggle : public Component<bool> {
public:
    Toggle();
    Toggle(const char *text, bool active = false);
    Toggle(Bounds bounds, const char *text, bool active = false);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD bool IsActive() const;
    void SetActive(bool newActive);

    RAYGUI_NODISCARD bool Show() override;

private:
    const char *text;
    bool active; // Checked
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_TOGGLE_H
