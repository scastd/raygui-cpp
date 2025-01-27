#ifndef RAYGUI_CPP_BUTTON_H
#define RAYGUI_CPP_BUTTON_H

#include "Component.h"
#include "Directives.h"
#include "Paintable.h"

#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class Button : public Component<bool>, public Paintable {
public:
    Button();
    explicit Button(const char *text);
    Button(Bounds bounds, const char *text);

    RAYGUI_CPP_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_CPP_NODISCARD bool Show() override;

    void OnClick(const Callback &onClick) override;
    void OnUpdate(const Callback &onUpdate) override;

    void SetPropertyColor(GuiControlProperty property, Color color) override;

private:
    const char *text;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_BUTTON_H
