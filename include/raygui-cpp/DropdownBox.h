#ifndef RAYGUI_CPP_DROPDOWN_BOX_H
#define RAYGUI_CPP_DROPDOWN_BOX_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class DropdownBox : public Component<bool> {
public:
    DropdownBox();
    DropdownBox(const char *text, int *active, bool editMode);
    DropdownBox(Bounds bounds, const char *text, int *active, bool editMode);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD int *GetActive() const;
    void SetActive(int *newActive);

    RAYGUI_NODISCARD bool GetEditMode() const;
    void SetEditMode(bool newEditMode);

    RAYGUI_NODISCARD bool Show() override;

    void OnClick(const Callback &onClick) override;
    void OnUpdate(const Callback &onUpdate) override;

private:
    const char *text;
    int *active;
    bool editMode;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_DROPDOWN_BOX_H
