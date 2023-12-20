#ifndef RAYGUI_CPP_COMBO_BOX_H
#define RAYGUI_CPP_COMBO_BOX_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ComboBox : public Component<int> {
public:
    ComboBox();
    ComboBox(const char *text, int active);
    ComboBox(Bounds bounds, const char *text, int active);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD int GetActive() const;
    void SetActive(int newActive);

    RAYGUI_NODISCARD int Show() override;

private:
    const char *text;
    int active;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_COMBO_BOX_H
