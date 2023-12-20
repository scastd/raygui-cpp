#ifndef RAYGUI_CPP_LIST_VIEW_EX_H
#define RAYGUI_CPP_LIST_VIEW_EX_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ListViewEx : public Component<int> {
public:
    ListViewEx();
    ListViewEx(const char **text, int count, int *focus, int *scrollIndex, int active);
    ListViewEx(Bounds bounds, const char **text, int count, int *focus, int *scrollIndex, int active);

    RAYGUI_NODISCARD const char **GetText() const;
    void SetText(const char **newText);

    RAYGUI_NODISCARD int GetCount() const;
    void SetCount(int newCount);

    RAYGUI_NODISCARD int *GetFocus() const;
    void SetFocus(int *newFocus);

    RAYGUI_NODISCARD int *GetScrollIndex() const;
    void SetScrollIndex(int *newScrollIndex);

    RAYGUI_NODISCARD int GetActive() const;
    void SetActive(int newActive);

    RAYGUI_NODISCARD int Show() override;

private:
    const char **text;
    int count;
    int *focus;
    int *scrollIndex;
    int active;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_LIST_VIEW_EX_H
