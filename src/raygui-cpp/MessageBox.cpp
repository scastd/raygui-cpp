#include "raygui-cpp/MessageBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

MessageBox::MessageBox() : title(""), message(""), buttons("") {}

MessageBox::MessageBox(const char *title, const char *message, const char *buttons)
    : title(title), message(message), buttons(buttons) {}

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

int MessageBox::Show() {
    WITH_STATE_RENDER(int ret = ::GuiMessageBox(GetBounds().GetRectangle(), title, message, buttons))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
