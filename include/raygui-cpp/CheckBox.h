#ifndef RAYGUI_CPP_CHECK_BOX_H
#define RAYGUI_CPP_CHECK_BOX_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class CheckBox : public Component<bool> {
public:
    CheckBox();
    CheckBox(const char *text, bool checked);
    CheckBox(Bounds bounds, const char *text, bool checked = false);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD bool IsChecked() const;
    void SetChecked(bool newChecked);

    RAYGUI_NODISCARD bool Show() override;

private:
    const char *text;
    bool checked;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_CHECK_BOX_H
