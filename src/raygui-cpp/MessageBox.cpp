#include "raygui-cpp/MessageBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

MessageBox::MessageBox() : Component<int>(), title(""), message(""), buttons("") {}

MessageBox::MessageBox(Bounds bounds, const char *title, const char *message, const char *buttons)
    : Component<int>(bounds), title(title), message(message), buttons(buttons) {}

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
    return ::GuiMessageBox(GetBounds().GetRectangle(), title, message, buttons);
}

RAYGUI_CPP_END_NAMESPACE
