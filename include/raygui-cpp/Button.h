#ifndef RAYGUI_CPP_BUTTON_H
#define RAYGUI_CPP_BUTTON_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class Button : public Component<bool> {
public:
    Button();
    Button(::Rectangle bounds, const char *text);
    Button(float x, float y, float width, float height, const char *text);
    Button(::Vector2 position, ::Vector2 size, const char *text);

    RAYGUI_NODISCARD ::Rectangle GetBounds() const;
    void SetBounds(::Rectangle newBounds);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD bool Show() const override;

private:
    ::Rectangle bounds;
    const char *text;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_BUTTON_H
