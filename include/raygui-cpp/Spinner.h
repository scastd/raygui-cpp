#ifndef RAYGUI_CPP_SPINNER_H
#define RAYGUI_CPP_SPINNER_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class Spinner : public Component<bool> {
public:
    Spinner();
    Spinner(const char *text, int *value, int minValue, int maxValue, bool editMode);
    Spinner(Bounds bounds, const char *text, int *value, int minValue, int maxValue, bool editMode);

    RAYGUI_CPP_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_CPP_NODISCARD int *GetValue() const;
    void SetValue(int *newValue);

    RAYGUI_CPP_NODISCARD int GetMinValue() const;
    void SetMinValue(int newMinValue);

    RAYGUI_CPP_NODISCARD int GetMaxValue() const;
    void SetMaxValue(int newMaxValue);

    RAYGUI_CPP_NODISCARD bool IsEditMode() const;
    void SetEditMode(bool newEditMode);

    RAYGUI_CPP_NODISCARD bool Show(bool canClick) override;

private:
    const char *text;
    int *value;
    int minValue;
    int maxValue;
    bool editMode;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_SPINNER_H
