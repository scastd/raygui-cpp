#ifndef RAYGUI_CPP_LINE_H
#define RAYGUI_CPP_LINE_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class Line : public Component<void> {
public:
    Line();
    explicit Line(const char *text);
    Line(Bounds bounds, const char *text);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    void Show() override;

private:
    const char *text;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_LINE_H
