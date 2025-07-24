#ifndef IMAGE_ICON_H
#define IMAGE_ICON_H

#include "../Component.h"
#include "../Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ImageIcon : public Component<void> {
public:
    ImageIcon();
    explicit ImageIcon(const Texture2D &texture);
    ImageIcon(Bounds bounds, const Texture2D &texture);
    ImageIcon(Bounds bounds, const std::string &texturePath);

    RAYGUI_CPP_NODISCARD Texture2D GetTexture() const;
    void SetTexture(const Texture2D &newTexture);

    void Show(bool canClick) override;

    void OnClick(const Callback &onClick) override;
    void OnUpdate(const Callback &onUpdate) override;

private:
    Texture2D texture;
    Rectangle textureSource;
};

RAYGUI_CPP_END_NAMESPACE

#endif //IMAGE_ICON_H
