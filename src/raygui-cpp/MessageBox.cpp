#include "raygui-cpp/MessageBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

MessageBox::MessageBox() : title(""), message(""), buttons(""), btnActive(nullptr) {}

MessageBox::MessageBox(const char *title, const char *message, const char *buttons, int *btnActive)
    : title(title), message(message), buttons(buttons), btnActive(btnActive) {}

MessageBox::MessageBox(Bounds bounds, const char *title, const char *message, const char *buttons, int *btnActive)
    : Component<int>(bounds), title(title), message(message), buttons(buttons), btnActive(btnActive) {}

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

int *MessageBox::GetBtnActive() const {
    return this->btnActive;
}

void MessageBox::SetBtnActive(int *newBtnActive) {
    this->btnActive = newBtnActive;
}

int MessageBox::Show(const bool canClick) {
    WITH_STATE_RENDER(int ret = ::GuiMessageBox(GetBounds().GetRectangle(), title, message, buttons, btnActive))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
