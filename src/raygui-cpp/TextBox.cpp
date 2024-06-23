#include "raygui-cpp/TextBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

TextBox::TextBox() : text(nullptr), textSize(0), editMode(false) {}

TextBox::TextBox(char *text, int textSize, bool editMode) : text(text), textSize(textSize), editMode(editMode) {}

TextBox::TextBox(Bounds bounds, char *text, int textSize, bool editMode)
    : Component<bool>(bounds), text(text), textSize(textSize), editMode(editMode) {}

const char *TextBox::GetText() const {
    return text;
}

void TextBox::SetText(char *newText) {
    this->text = newText;
}

int TextBox::GetTextSize() const {
    return textSize;
}

void TextBox::SetTextSize(int newTextSize) {
    this->textSize = newTextSize;
}

bool TextBox::GetEditMode() const {
    return editMode;
}

void TextBox::SetEditMode(bool newEditMode) {
    this->editMode = newEditMode;
}

bool TextBox::Show() {
    WITH_STATE_RENDER(int ret = ::GuiTextBox(GetBounds().GetRectangle(), text, textSize, editMode))
    return ret;
}

RAYGUI_CPP_END_NAMESPACE
