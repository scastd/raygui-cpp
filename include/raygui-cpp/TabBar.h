#ifndef RAYGUI_CPP_TAB_BAR_H
#define RAYGUI_CPP_TAB_BAR_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class TabBar {
public:
    TabBar();
    TabBar(::Rectangle bounds, const char **text, int count, int *active);
    TabBar(float x, float y, float width, float height, const char **text, int count, int *active);
    TabBar(::Vector2 position, ::Vector2 size, const char **text, int count, int *active);

    ~TabBar() = default;

    RAYGUI_NODISCARD ::Rectangle GetBounds() const;
    void SetBounds(::Rectangle newBounds);

    RAYGUI_NODISCARD const char **GetText() const;
    void SetText(const char **newText);

    RAYGUI_NODISCARD int GetCount() const;
    void SetCount(int newCount);

    RAYGUI_NODISCARD int *GetActive() const;
    void SetActive(int *newActive);

    RAYGUI_NODISCARD int Show() const;

private:
    ::Rectangle bounds;
    const char **text;
    int count;
    int *active;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_TAB_BAR_H
