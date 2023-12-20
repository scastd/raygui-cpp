#ifndef RAYGUI_CPP_VALUE_BOX_H
#define RAYGUI_CPP_VALUE_BOX_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ValueBox : public Component<bool> {
public:
    ValueBox();
    ValueBox(const char *text, int *value, int minValue, int maxValue, bool editMode);
    ValueBox(Bounds bounds, const char *text, int *value, int minValue, int maxValue, bool editMode);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD int *GetValue() const;
    void SetValue(int *newValue);

    RAYGUI_NODISCARD int GetMinValue() const;
    void SetMinValue(int newMinValue);

    RAYGUI_NODISCARD int GetMaxValue() const;
    void SetMaxValue(int newMaxValue);

    RAYGUI_NODISCARD bool IsEditMode() const;
    void SetEditMode(bool newEditMode);

    RAYGUI_NODISCARD bool Show() override;

private:
    const char *text;
    int *value;
    int minValue;
    int maxValue;
    bool editMode;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_VALUE_BOX_H
