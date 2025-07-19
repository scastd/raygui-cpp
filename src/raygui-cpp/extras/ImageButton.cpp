#include "raygui-cpp/extras/ImageButton.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ImageButton::ImageButton() : texture({}) {}

ImageButton::ImageButton(Bounds bounds, Texture2D texture) : Component(bounds), texture(texture) {}

Texture2D ImageButton::GetTexture() const {
    return texture;
}

void ImageButton::SetTexture(Texture2D newTexture) {
    this->texture = newTexture;
}

bool ImageButton::Show(const bool canClick) {
    Rectangle textureSource = { 0, 0, (float) texture.width, (float) texture.height };

    int state = GuiGetState();
    bool clicked = false;

    if (state != STATE_DISABLED) {
        Vector2 mousePoint = GetMousePosition();
        Rectangle bounds = GetBounds().GetRectangle();

        if (CheckCollisionPointRec(mousePoint, bounds)) {
            if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) {
                state = STATE_PRESSED;
            } else if (IsMouseButtonReleased(MOUSE_LEFT_BUTTON)) {
                clicked = true;
            } else {
                state = STATE_FOCUSED;
            }
        }
    }

    // Draw only the texture if it's valid
    if (texture.id > 0) {
        DrawTexturePro(texture, textureSource, GetBounds().GetRectangle(), { 0, 0 }, 0.0f, WHITE);
    }

    if (clicked && HasOnClick() && canClick) {
        CallOnClick();
    }

    return clicked && canClick;
}

void ImageButton::OnClick(const Component::Callback &onClick) {
    SetOnClick(onClick);
}

void ImageButton::OnUpdate(const Component::Callback &onUpdate) {
    SetOnUpdate(onUpdate);
}

RAYGUI_CPP_END_NAMESPACE