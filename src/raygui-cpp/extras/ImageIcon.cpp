#include "raygui-cpp/extras/ImageIcon.h"

RAYGUI_CPP_BEGIN_NAMESPACE

ImageIcon::ImageIcon() : texture(), textureSource() {}

ImageIcon::ImageIcon(const Texture2D &texture)
    : Component(Bounds::OfSize((float) texture.width, (float) texture.height)), texture(texture),
      textureSource({ 0, 0, (float) texture.width, (float) texture.height }) {}

ImageIcon::ImageIcon(const Bounds bounds, const Texture2D &texture)
    : Component(bounds), texture(texture), textureSource({ 0, 0, (float) texture.width, (float) texture.height }) {}

ImageIcon::ImageIcon(const Bounds bounds, const std::string &texturePath)
    : Component(bounds), texture(), textureSource() {
    texture = LoadTexture(texturePath.c_str());
    textureSource = { 0, 0, (float) texture.width, (float) texture.height };
}

Texture2D ImageIcon::GetTexture() const {
    return texture;
}

void ImageIcon::SetTexture(const Texture2D &newTexture) {
    this->texture = newTexture;
}

void ImageIcon::Show(const bool canClick) {
    const Rectangle textureSource = { 0, 0, (float) texture.width, (float) texture.height };

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
}

void ImageIcon::OnClick(const Callback &onClick) {
    SetOnClick(onClick);
}

void ImageIcon::OnUpdate(const Callback &onUpdate) {
    SetOnUpdate(onUpdate);
}

RAYGUI_CPP_END_NAMESPACE