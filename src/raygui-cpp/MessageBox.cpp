#include "raygui-cpp/MessageBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

MessageBox::MessageBox() : bounds({ 0, 0, 0, 0 }), title(""), message(""), buttons("") {}

MessageBox::MessageBox(::Rectangle bounds, const char *title, const char *message, const char *buttons)
    : bounds(bounds), title(title), message(message), buttons(buttons) {}

MessageBox::MessageBox(float x, float y, float width, float height, const char *title, const char *message,
                       const char *buttons)
    : bounds({ x, y, width, height }), title(title), message(message), buttons(buttons) {}

MessageBox::MessageBox(::Vector2 position, ::Vector2 size, const char *title, const char *message, const char *buttons)
    : bounds({ position.x, position.y, size.x, size.y }), title(title), message(message), buttons(buttons) {}

MessageBox::~MessageBox() {
    delete title;
    delete message;
    delete buttons;
}

::Rectangle MessageBox::GetBounds() const {
    return bounds;
}

void MessageBox::SetBounds(::Rectangle newBounds) {
    this->bounds = newBounds;
}

const char *MessageBox::GetTitle() const {
    return title;
}

void MessageBox::SetTitle(const char *newTitle) {
    this->title = newTitle;
}

const char *MessageBox::GetMessage() const {
    return message;
}

void MessageBox::SetMessage(const char *newMessage) {
    this->message = newMessage;
}

const char *MessageBox::GetButtons() const {
    return buttons;
}

void MessageBox::SetButtons(const char *newButtons) {
    this->buttons = newButtons;
}

int MessageBox::Show() const {
    return ::GuiMessageBox(bounds, title, message, buttons);
}

RAYGUI_CPP_END_NAMESPACE
