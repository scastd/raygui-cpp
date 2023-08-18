#ifndef RAYGUI_CPP_TEXT_BOX_H
#define RAYGUI_CPP_TEXT_BOX_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class TextBox {
public:
    TextBox();
    TextBox(::Rectangle bounds, char *text, int textSize, bool editMode);
    TextBox(float x, float y, float width, float height, char *text, int textSize, bool editMode);
    TextBox(::Vector2 position, ::Vector2 size, char *text, int textSize, bool editMode);

    ~TextBox();

    RAYGUI_NODISCARD ::Rectangle GetBounds() const;
    void SetBounds(::Rectangle newBounds);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(char *newText);

    RAYGUI_NODISCARD int GetTextSize() const;
    void SetTextSize(int newTextSize);

    RAYGUI_NODISCARD bool GetEditMode() const;
    void SetEditMode(bool newEditMode);

    RAYGUI_NODISCARD bool Show() const;
private:
    ::Rectangle bounds;
    char *text;
    int textSize;
    bool editMode;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_TEXT_BOX_H
