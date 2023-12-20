#ifndef RAYGUI_CPP_MESSAGE_BOX_H
#define RAYGUI_CPP_MESSAGE_BOX_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class MessageBox : public Component<int> {
public:
    MessageBox();
    MessageBox(const char *title, const char *message, const char *buttons);
    MessageBox(Bounds bounds, const char *title, const char *message, const char *buttons);

    RAYGUI_NODISCARD const char *GetTitle() const;
    void SetTitle(const char *newTitle);

    RAYGUI_NODISCARD const char *GetMessage() const;
    void SetMessage(const char *newMessage);

    RAYGUI_NODISCARD const char *GetButtons() const;
    void SetButtons(const char *newButtons);

    RAYGUI_NODISCARD int Show() override;

private:
    const char *title;
    const char *message;
    const char *buttons;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_MESSAGE_BOX_H
