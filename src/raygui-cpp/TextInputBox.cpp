#include "raygui-cpp/TextInputBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

TextInputBox::TextInputBox()
    : title(""), message(""), buttons(""), text(nullptr), textMaxSize(0), secretViewActive(nullptr) {}

TextInputBox::TextInputBox(const char *title, const char *message, const char *buttons, char *text, int textMaxSize,
                           int *secretViewActive)
    : title(title), message(message), buttons(buttons), text(text), textMaxSize(textMaxSize),
      secretViewActive(secretViewActive) {}

TextInputBox::TextInputBox(Bounds bounds, const char *title, const char *message, const char *buttons, char *text,
                           int textMaxSize, int *secretViewActive)
    : Component<int>(bounds), title(title), message(message), buttons(buttons), text(text), textMaxSize(textMaxSize),
      secretViewActive(secretViewActive) {}

const char *TextInputBox::GetTitle() const {
    return title;
}

void TextInputBox::SetTitle(const char *newTitle) {
    this->title = newTitle;
}

const char *TextInputBox::GetMessage() const {
    return message;
}

void TextInputBox::SetMessage(const char *newMessage) {
    this->message = newMessage;
}

const char *TextInputBox::GetButtons() const {
    return buttons;
}

void TextInputBox::SetButtons(const char *newButtons) {
    this->buttons = newButtons;
}

char *TextInputBox::GetText() const {
    return text;
}

void TextInputBox::SetText(char *newText) {
    this->text = newText;
}

int TextInputBox::GetTextMaxSize() const {
    return textMaxSize;
}

void TextInputBox::SetTextMaxSize(int newTextMaxSize) {
    this->textMaxSize = newTextMaxSize;
}

int *TextInputBox::GetSecretViewActive() const {
    return secretViewActive;
}

void TextInputBox::SetSecretViewActive(int *newSecretViewActive) {
    this->secretViewActive = newSecretViewActive;
}

int TextInputBox::Show() const {
    return ::GuiTextInputBox(GetBounds().GetRectangle(), title, message, buttons, text, textMaxSize, secretViewActive);
}

RAYGUI_CPP_END_NAMESPACE
