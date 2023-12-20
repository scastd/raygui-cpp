#ifndef RAYGUI_CPP_LIST_VIEW_H
#define RAYGUI_CPP_LIST_VIEW_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ListView : public Component<int> {
public:
    ListView();
    ListView(const char *text, int *scrollIndex, int active);
    ListView(Bounds bounds, const char *text, int *scrollIndex, int active);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD int *GetScrollIndex() const;
    void SetScrollIndex(int *newScrollIndex);

    RAYGUI_NODISCARD int GetActive() const;
    void SetActive(int newActive);

    RAYGUI_NODISCARD int Show() override;

private:
    const char *text;
    int *scrollIndex;
    int active;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_LIST_VIEW_H
