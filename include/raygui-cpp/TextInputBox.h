#ifndef RAYGUI_CPP_TEXT_INPUT_BOX_H
#define RAYGUI_CPP_TEXT_INPUT_BOX_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class TextInputBox : public Component<int> {
public:
    TextInputBox();
    TextInputBox(const char *title, const char *message, const char *buttons, char *text, int textMaxSize,
                 bool secretViewActive);
    TextInputBox(Bounds bounds, const char *title, const char *message, const char *buttons, char *text,
                 int textMaxSize, bool secretViewActive);

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

    RAYGUI_NODISCARD bool GetSecretViewActive() const;
    void SetSecretViewActive(bool newSecretViewActive);

    RAYGUI_NODISCARD int Show() override;

private:
    const char *title;
    const char *message;
    const char *buttons;
    char *text;
    int textMaxSize;
    bool secretViewActive;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_TEXT_INPUT_BOX_H
