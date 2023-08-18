#include "raygui-cpp/TextInputBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

TextInputBox::TextInputBox()
    : bounds({ 0, 0, 0, 0 }), title(""), message(""), buttons(""), text(""), textMaxSize(0), secretViewActive(nullptr) {
}

TextInputBox::TextInputBox(Rectangle bounds, const char *title, const char *message, const char *buttons, char *text,
                           int textMaxSize, int *secretViewActive)
    : bounds(bounds), title(title), message(message), buttons(buttons), text(text), textMaxSize(textMaxSize),
      secretViewActive(secretViewActive) {}

TextInputBox::TextInputBox(float x, float y, float width, float height, const char *title, const char *message,
                           const char *buttons, char *text, int textMaxSize, int *secretViewActive)
    : bounds({ x, y, width, height }), title(title), message(message), buttons(buttons), text(text),
      textMaxSize(textMaxSize), secretViewActive(secretViewActive) {}

TextInputBox::TextInputBox(Vector2 position, Vector2 size, const char *title, const char *message, const char *buttons,
                           char *text, int textMaxSize, int *secretViewActive) : bounds({ position.x, position.y, size.x, size.y }),
                                                                                title(title), message(message),
                                                                                buttons(buttons), text(text),
                                                                                textMaxSize(textMaxSize),
                                                                                secretViewActive(secretViewActive) {}

TextInputBox::~TextInputBox() {
    delete title;
    delete message;
    delete buttons;
    delete text;
    delete secretViewActive;
}

Rectangle TextInputBox::GetBounds() const {
    return bounds;
}

void TextInputBox::SetBounds(Rectangle newBounds) {
    this->bounds = newBounds;
}

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
    return ::GuiTextInputBox(bounds, title, message, buttons, text, textMaxSize, secretViewActive);
}

RAYGUI_CPP_END_NAMESPACE
