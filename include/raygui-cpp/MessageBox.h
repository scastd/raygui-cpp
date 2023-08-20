#ifndef RAYGUI_CPP_MESSAGE_BOX_H
#define RAYGUI_CPP_MESSAGE_BOX_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class MessageBox {
public:
    MessageBox();
    MessageBox(::Rectangle bounds, const char *title, const char *message, const char *buttons);
    MessageBox(float x, float y, float width, float height, const char *title, const char *message,
               const char *buttons);
    MessageBox(::Vector2 position, ::Vector2 size, const char *title, const char *message, const char *buttons);

    ~MessageBox() = default;

    RAYGUI_NODISCARD ::Rectangle GetBounds() const;
    void SetBounds(::Rectangle newBounds);

    RAYGUI_NODISCARD const char *GetTitle() const;
    void SetTitle(const char *newTitle);

    RAYGUI_NODISCARD const char *GetMessage() const;
    void SetMessage(const char *newMessage);

    RAYGUI_NODISCARD const char *GetButtons() const;
    void SetButtons(const char *newButtons);

    RAYGUI_NODISCARD int Show() const;

private:
    ::Rectangle bounds;
    const char *title;
    const char *message;
    const char *buttons;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_MESSAGE_BOX_H
