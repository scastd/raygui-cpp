#ifndef RAYGUI_CPP_LABEL_BUTTON_H
#define RAYGUI_CPP_LABEL_BUTTON_H

#include "Component.h"
#include "Directives.h"
#include "Paintable.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class LabelButton : public Component<bool>, public Paintable {
public:
    LabelButton();
    explicit LabelButton(const char *text);
    LabelButton(Bounds bounds, const char *text);

    RAYGUI_CPP_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_CPP_NODISCARD bool Show(bool canClick) override;

    void SetPropertyColor(GuiControlProperty property, Color color) override;

private:
    const char *text;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_LABEL_BUTTON_H
