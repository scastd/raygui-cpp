#ifndef RAYGUI_CPP_COLOR_BAR_ALPHA_H
#define RAYGUI_CPP_COLOR_BAR_ALPHA_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ColorBarAlpha : public Component<int> {
public:
    ColorBarAlpha();
    ColorBarAlpha(const char *text, float alpha = 1.0f);
    ColorBarAlpha(Bounds bounds, const char *text, float alpha = 1.0f);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    RAYGUI_NODISCARD float GetAlpha() const;
    void SetAlpha(float newAlpha);

    RAYGUI_NODISCARD int Show() override;

private:
    const char *text;
    float alpha;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_COLOR_BAR_ALPHA_H
