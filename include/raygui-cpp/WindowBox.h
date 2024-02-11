#ifndef RAYGUI_CPP_WINDOW_BOX_H
#define RAYGUI_CPP_WINDOW_BOX_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class WindowBox : public Component<bool> {
public:
    WindowBox();
    explicit WindowBox(const char *title);
    WindowBox(Bounds bounds, const char *title);

    RAYGUI_NODISCARD const char *GetTitle() const;
    void SetTitle(const char *newTitle);

    RAYGUI_NODISCARD bool Show() override;

    void AddChild(Component *child) override;

private:
    const char *title;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_WINDOW_BOX_H
