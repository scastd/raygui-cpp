#include "raygui-cpp/TextBox.h"

RAYGUI_CPP_BEGIN_NAMESPACE

TextBox::TextBox() : bounds({ 0, 0, 0, 0 }), text(nullptr), textSize(0), editMode(false) {}

TextBox::TextBox(Rectangle bounds, char *text, int textSize, bool editMode)
    : bounds(bounds), text(text), textSize(textSize), editMode(editMode) {}

TextBox::TextBox(float x, float y, float width, float height, char *text, int textSize, bool editMode)
    : bounds({ x, y, width, height }), text(text), textSize(textSize), editMode(editMode) {}

TextBox::TextBox(Vector2 position, Vector2 size, char *text, int textSize, bool editMode)
    : bounds({ position.x, position.y, size.x, size.y }), text(text), textSize(textSize),
      editMode(editMode) {}

TextBox::~TextBox() {
    delete text;
}

Rectangle TextBox::GetBounds() const {
    return bounds;
}

void TextBox::SetBounds(Rectangle newBounds) {
    this->bounds = newBounds;
}

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
    return ::GuiTextBox(bounds, text, textSize, editMode);
}

RAYGUI_CPP_END_NAMESPACE
