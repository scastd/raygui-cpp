#include "raygui-cpp/TextInputBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

TextInputBox::TextInputBox()
    : title(""), message(""), text(nullptr), textSize(0), btnText(""), btnActive(nullptr), secretViewActive(nullptr) {}

TextInputBox::TextInputBox(const char *title, const char *message, char *text, int textSize, const char *btnText,
                           int *btnActive, bool *secretViewActive)
    : title(title), message(message), text(text), textSize(textSize), btnText(btnText), btnActive(btnActive),
      secretViewActive(secretViewActive) {}

TextInputBox::TextInputBox(Bounds bounds, const char *title, const char *message, char *text, int textSize,
                           const char *btnText, int *btnActive, bool *secretViewActive)
    : Component<int>(bounds), title(title), message(message), text(text), textSize(textSize), btnText(btnText),
      btnActive(btnActive), secretViewActive(secretViewActive) {}

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

char *TextInputBox::GetText() const {
    return text;
}

void TextInputBox::SetText(char *newText) {
    this->text = newText;
}

int TextInputBox::GetTextSize() const {
    return textSize;
}

void TextInputBox::SetTextSize(int newTextSize) {
    this->textSize = newTextSize;
}

const char *TextInputBox::GetBtnText() const {
    return btnText;
}

void TextInputBox::SetBtnText(const char *newBtnText) {
    this->btnText = newBtnText;
}

int *TextInputBox::GetBtnActive() const {
    return btnActive;
}

void TextInputBox::SetBtnActive(int *newBtnActive) {
    this->btnActive = newBtnActive;
}

bool *TextInputBox::GetSecretViewActive() const {
    return secretViewActive;
}

void TextInputBox::SetSecretViewActive(bool *newSecretViewActive) {
    this->secretViewActive = newSecretViewActive;
}

int TextInputBox::Show(const bool canClick) {
    WITH_STATE_RENDER(int ret = ::GuiTextInputBox(GetBounds().GetRectangle(), title, message, text, textSize, btnText,
                                                  btnActive, secretViewActive))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
