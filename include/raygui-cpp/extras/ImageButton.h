#ifndef IMAGE_BUTTON_H
#define IMAGE_BUTTON_H

#include "../Component.h"
#include "../Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class ImageButton : public Component<bool> {
public:
    ImageButton();
    ImageButton(Bounds bounds, Texture2D texture);

    RAYGUI_CPP_NODISCARD Texture2D GetTexture() const;
    void SetTexture(Texture2D newTexture);

    RAYGUI_CPP_NODISCARD bool Show() override;

    void OnClick(const Callback &onClick) override;
    void OnUpdate(const Callback &onUpdate) override;

private:
    Texture2D texture;
};

RAYGUI_CPP_END_NAMESPACE

#endif //IMAGE_BUTTON_H
