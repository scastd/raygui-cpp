#ifndef RAYGUI_CPP_PANEL_H
#define RAYGUI_CPP_PANEL_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class Panel : public Component<void> {
public:
    Panel();
    explicit Panel(const char *text);
    Panel(Bounds bounds, const char *text);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    void Show() override;

    void AddChild(Component *child) override;

private:
    const char *text;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_PANEL_H
