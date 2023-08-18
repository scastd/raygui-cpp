#ifndef RAYGUI_CPP_CHECK_BOX_H
#define RAYGUI_CPP_CHECK_BOX_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class CheckBox {
public:
    CheckBox();
    CheckBox(Rectangle bounds, const char *text, bool checked);
    CheckBox(float x, float y, float width, float height, const char *text, bool checked);
    CheckBox(Vector2 position, Vector2 size, const char *text, bool checked);

    ~CheckBox();

    RAYGUI_NODISCARD Rectangle GetBounds() const;
    void SetBounds(Rectangle newBounds);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD bool IsChecked() const;
    void SetChecked(bool newChecked);

    RAYGUI_NODISCARD bool Show() const;

private:
    Rectangle bounds;
    const char *text;
    bool checked;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_CHECK_BOX_H
