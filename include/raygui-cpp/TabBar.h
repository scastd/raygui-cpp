#ifndef RAYGUI_CPP_TAB_BAR_H
#define RAYGUI_CPP_TAB_BAR_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class TabBar : public Component<int> {
public:
    TabBar();
    TabBar(const char *text, int *hscroll, int *active);
    TabBar(Bounds bounds, const char *text, int *hscroll, int *active);

    RAYGUI_CPP_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_CPP_NODISCARD int *GetHscroll() const;
    void SetHscroll(int *newHscroll);

    RAYGUI_CPP_NODISCARD int *GetActive() const;
    void SetActive(int *newActive);

    RAYGUI_CPP_NODISCARD int Show(bool canClick) override;

private:
    const char *text;
    int *hscroll;
    int *active;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_TAB_BAR_H
