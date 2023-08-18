#ifndef RAYGUI_CPP_COMBO_BOX_H
#define RAYGUI_CPP_COMBO_BOX_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ComboBox {
public:
    ComboBox();
    ComboBox(::Rectangle bounds, const char *text, int active);
    ComboBox(float x, float y, float width, float height, const char *text, int active);
    ComboBox(::Vector2 position, ::Vector2 size, const char *text, int active);

    ~ComboBox() = default;

    RAYGUI_NODISCARD ::Rectangle GetBounds() const;
    void SetBounds(::Rectangle newBounds);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD int GetActive() const;
    void SetActive(int newActive);

    RAYGUI_NODISCARD bool Show() const;

private:
    ::Rectangle bounds;
    const char *text;
    int active;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_COMBO_BOX_H
