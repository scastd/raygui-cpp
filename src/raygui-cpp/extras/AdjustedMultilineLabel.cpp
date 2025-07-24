#include "raygui-cpp/extras/AdjustedMultilineLabel.h"

RAYGUI_CPP_BEGIN_NAMESPACE

AdjustedMultilineLabel::AdjustedMultilineLabel() : Label("") {
    UpdateBoundsFromText();
}

AdjustedMultilineLabel::AdjustedMultilineLabel(const char *text) : Label(text) {
    UpdateBoundsFromText();
}

AdjustedMultilineLabel::AdjustedMultilineLabel(const Bounds bounds, const char *text) : Label(bounds, text) {
    UpdateBoundsFromText();
}

void AdjustedMultilineLabel::SetText(const char *newText) {
    Label::SetText(newText);
    UpdateBoundsFromText();
}

void AdjustedMultilineLabel::UpdateBoundsFromText() {
    const char *text = GetText();
    const auto bounds = GetBounds();

    if (text == nullptr || strlen(text) == 0) {
        SetBounds({ bounds.GetX(), bounds.GetY(), 0, 0 });
        return;
    }

    Bounds newBounds = MeasureMultilineText(text);
    newBounds.SetPosition(bounds.GetX(), bounds.GetY());
    SetBounds(newBounds);
}

Bounds AdjustedMultilineLabel::MeasureMultilineText(const char *text) {
    if (text == nullptr || strlen(text) == 0) {
        return { 0, 0, 0, 0 };
    }

    const int fontSize = GuiGetStyle(DEFAULT, TEXT_SIZE);
    const auto font = GuiGetFont();
    int lineCount = 0;
    const char **lines = TextSplit(text, '\n', &lineCount);
    Vector2 maxSize = { 0, 0 };

    for (int i = 0; i < lineCount; i++) {
        auto [x, y] = MeasureTextEx(font, lines[i], static_cast<float>(fontSize), 1.0f);

        if (x > maxSize.x) {
            maxSize.x = x;
        }
    }

    const int lineSpacing = GuiGetStyle(DEFAULT, TEXT_LINE_SPACING);
    maxSize.y = static_cast<float>(lineCount * fontSize + (lineCount - 1) * lineSpacing);
    return { 0, 0, maxSize.x, maxSize.y };
}

RAYGUI_CPP_END_NAMESPACE
