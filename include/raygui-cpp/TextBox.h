#ifndef RAYGUI_CPP_TEXT_BOX_H
#define RAYGUI_CPP_TEXT_BOX_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class TextBox : public Component<bool> {
public:
    TextBox();
    TextBox(char *text, int textSize, bool editMode);
    TextBox(Bounds bounds, char *text, int textSize, bool editMode);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(char *newText);

    RAYGUI_NODISCARD int GetTextSize() const;
    void SetTextSize(int newTextSize);

    RAYGUI_NODISCARD bool GetEditMode() const;
    void SetEditMode(bool newEditMode);

    RAYGUI_NODISCARD bool Show() override;

private:
    char *text;
    int textSize;
    bool editMode;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_TEXT_BOX_H
