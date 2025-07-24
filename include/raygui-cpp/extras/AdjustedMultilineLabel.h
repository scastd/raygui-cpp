#ifndef ADJUSTED_MULTILINE_LABEL_H
#define ADJUSTED_MULTILINE_LABEL_H

#include "raygui-cpp/Directives.h"
#include "raygui-cpp/Label.h"

RAYGUI_CPP_BEGIN_NAMESPACE

class AdjustedMultilineLabel : public Label {
public:
    AdjustedMultilineLabel();
    explicit AdjustedMultilineLabel(const char *text);
    AdjustedMultilineLabel(Bounds bounds, const char *text);

    void SetText(const char *newText) override;

private:
    void UpdateBoundsFromText();
    static Bounds MeasureMultilineText(const char *text);
};

RAYGUI_CPP_END_NAMESPACE

#endif //ADJUSTED_MULTILINE_LABEL_H
