#ifndef RAYGUI_CPP_DROPDOWN_BOX_H
#define RAYGUI_CPP_DROPDOWN_BOX_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class DropdownBox {
public:
    DropdownBox();
    DropdownBox(::Rectangle bounds, const char *text, int *active, bool editMode);
    DropdownBox(float x, float y, float width, float height, const char *text, int *active, bool editMode);
    DropdownBox(::Vector2 position, ::Vector2 size, const char *text, int *active, bool editMode);

    ~DropdownBox();

    RAYGUI_NODISCARD ::Rectangle GetBounds() const;
    void SetBounds(::Rectangle newBounds);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD int *GetActive() const;
    void SetActive(int *newActive);

    RAYGUI_NODISCARD bool GetEditMode() const;
    void SetEditMode(bool newEditMode);

    RAYGUI_NODISCARD bool Show() const;

private:
    ::Rectangle bounds;
    const char *text;
    int *active;
    bool editMode;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_DROPDOWN_BOX_H
