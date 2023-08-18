#ifndef RAYGUI_CPP_LIST_VIEW_H
#define RAYGUI_CPP_LIST_VIEW_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ListView {
public:
    ListView();
    ListView(Rectangle bounds, const char *text, int *scrollIndex, int active);
    ListView(float x, float y, float width, float height, const char *text, int *scrollIndex, int active);
    ListView(Vector2 position, Vector2 size, const char *text, int *scrollIndex, int active);

    ~ListView();

    RAYGUI_NODISCARD Rectangle GetBounds() const;
    void SetBounds(Rectangle newBounds);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD int *GetScrollIndex() const;
    void SetScrollIndex(int *newScrollIndex);

    RAYGUI_NODISCARD int GetActive() const;
    void SetActive(int newActive);

    RAYGUI_NODISCARD int Show() const;

private:
    Rectangle bounds;
    const char *text;
    int *scrollIndex;
    int active;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_LIST_VIEW_H
