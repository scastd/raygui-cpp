#ifndef RAYGUI_CPP_COLOR_PICKER_H
#define RAYGUI_CPP_COLOR_PICKER_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ColorPicker : public Component<int> {
public:
    ColorPicker();
    ColorPicker(const char *text, ::Color color = ::BLACK);
    ColorPicker(Bounds bounds, const char *text, ::Color color = ::BLACK);

    RAYGUI_CPP_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_CPP_NODISCARD ::Color GetColor() const;
    void SetColor(::Color newColor);

    RAYGUI_CPP_NODISCARD int Show() override;

    void OnClick(const Callback &onClick) override;
    void OnUpdate(const Callback &onUpdate) override;

private:
    const char *text;
    ::Color color;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_COLOR_PICKER_H
