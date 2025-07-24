#ifndef RAYGUI_CPP_LABEL_H
#define RAYGUI_CPP_LABEL_H

#include "Component.h"
#include "Directives.h"
#include "Paintable.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class Label : public Component<void>, public Paintable {
public:
    Label();
    explicit Label(const char *text);
    Label(Bounds bounds, const char *text);

    RAYGUI_CPP_NODISCARD const char *GetText() const;
    virtual void SetText(const char *newText);

    void Show(bool canClick) override;

    void SetPropertyColor(GuiControlProperty property, Color color) override;

private:
    const char *text;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_LABEL_H
