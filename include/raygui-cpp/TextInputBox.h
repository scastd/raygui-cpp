#ifndef RAYGUI_CPP_TEXT_INPUT_BOX_H
#define RAYGUI_CPP_TEXT_INPUT_BOX_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class TextInputBox : public Component<int> {
public:
    TextInputBox();
    TextInputBox(const char *title, const char *message, char *text, int textSize, const char *btnText, int *btnActive,
                 bool *secretViewActive);
    TextInputBox(Bounds bounds, const char *title, const char *message, char *text, int textSize, const char *btnText,
                 int *btnActive, bool *secretViewActive);

    RAYGUI_CPP_NODISCARD const char *GetTitle() const;
    void SetTitle(const char *newTitle);

    RAYGUI_CPP_NODISCARD const char *GetMessage() const;
    void SetMessage(const char *newMessage);

    RAYGUI_CPP_NODISCARD char *GetText() const;
    void SetText(char *newText);

    RAYGUI_CPP_NODISCARD int GetTextSize() const;
    void SetTextSize(int newTextSize);

    RAYGUI_CPP_NODISCARD const char *GetBtnText() const;
    void SetBtnText(const char *newBtnText);

    RAYGUI_CPP_NODISCARD int *GetBtnActive() const;
    void SetBtnActive(int *newBtnActive);

    RAYGUI_CPP_NODISCARD bool *GetSecretViewActive() const;
    void SetSecretViewActive(bool *newSecretViewActive);

    RAYGUI_CPP_NODISCARD int Show(bool canClick) override;

private:
    const char *title;
    const char *message;
    char *text;
    int textSize;
    const char *btnText;
    int *btnActive;
    bool *secretViewActive;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_TEXT_INPUT_BOX_H
