#ifndef RAYGUI_CPP_TEXT_INPUT_BOX_H
#define RAYGUI_CPP_TEXT_INPUT_BOX_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class TextInputBox {
public:
    TextInputBox();
    TextInputBox(::Rectangle bounds, const char *title, const char *message, const char *buttons, char *text,
                 int textMaxSize, int *secretViewActive);
    TextInputBox(float x, float y, float width, float height, const char *title, const char *message,
                 const char *buttons, char *text, int textMaxSize, int *secretViewActive);
    TextInputBox(::Vector2 position, ::Vector2 size, const char *title, const char *message, const char *buttons,
                 char *text, int textMaxSize, int *secretViewActive);

    ~TextInputBox();

    RAYGUI_NODISCARD ::Rectangle GetBounds() const;
    void SetBounds(::Rectangle newBounds);

    RAYGUI_NODISCARD const char *GetTitle() const;
    void SetTitle(const char *newTitle);

    RAYGUI_NODISCARD const char *GetMessage() const;
    void SetMessage(const char *newMessage);

    RAYGUI_NODISCARD const char *GetButtons() const;
    void SetButtons(const char *newButtons);

    RAYGUI_NODISCARD char *GetText() const;
    void SetText(char *newText);

    RAYGUI_NODISCARD int GetTextMaxSize() const;
    void SetTextMaxSize(int newTextMaxSize);

    RAYGUI_NODISCARD int *GetSecretViewActive() const;
    void SetSecretViewActive(int *newSecretViewActive);

    RAYGUI_NODISCARD int Show() const;

private:
    ::Rectangle bounds;
    const char *title;
    const char *message;
    const char *buttons;
    char *text;
    int textMaxSize;
    int *secretViewActive;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_TEXT_INPUT_BOX_H
