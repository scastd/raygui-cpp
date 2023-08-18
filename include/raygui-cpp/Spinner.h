#ifndef RAYGUI_CPP_SPINNER_H
#define RAYGUI_CPP_SPINNER_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class Spinner {
public:
    Spinner();
    Spinner(const ::Rectangle &bounds, const char *text, int *value, int minValue, int maxValue, bool editMode);
    Spinner(float x, float y, float width, float height, const char *text, int *value, int minValue, int maxValue,
            bool editMode);
    Spinner(const ::Vector2 &position, const ::Vector2 &size, const char *text, int *value, int minValue, int maxValue,
            bool editMode);

    ~Spinner();

    RAYGUI_NODISCARD ::Rectangle GetBounds() const;
    void SetBounds(const ::Rectangle &newBounds);

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

    RAYGUI_NODISCARD bool Show() const;

private:
    ::Rectangle bounds;
    const char *text;
    int *value;
    int minValue;
    int maxValue;
    bool editMode;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_SPINNER_H
