#ifndef RAYGUI_CPP_TOGGLE_H
#define RAYGUI_CPP_TOGGLE_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class Toggle {
public:
    Toggle();
    Toggle(::Rectangle bounds, const char *text, bool active);
    Toggle(float x, float y, float width, float height, const char *text, bool active);
    Toggle(::Vector2 position, ::Vector2 size, const char *text, bool active);

    ~Toggle();

    RAYGUI_NODISCARD ::Rectangle GetBounds() const;
    void SetBounds(::Rectangle newBounds);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD bool IsActive() const;
    void SetActive(bool newActive);

    RAYGUI_NODISCARD bool Show() const;

private:
    ::Rectangle bounds;
    const char *text;
    bool active; // Checked
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_TOGGLE_H
