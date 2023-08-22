#include "raygui-cpp/TextBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

TextBox::TextBox() : Component<bool>(), text(nullptr), textSize(0), editMode(false) {}

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

bool TextBox::Show() const {
    return ::GuiTextBox(GetBounds().GetRectangle(), text, textSize, editMode);
}

RAYGUI_CPP_END_NAMESPACE
