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

    RAYGUI_CPP_NODISCARD bool Show(bool canClick) override;

    /**
     * Same as Show(bool), but tests the hover/click against the given mouse position instead of
     * GetMousePosition(). Use it when the button is drawn inside BeginMode2D, passing the mouse
     * position in world space (e.g. GetScreenToWorld2D(GetMousePosition(), camera)).
     */
    RAYGUI_CPP_NODISCARD bool Show(bool canClick, Vector2 mousePoint) const;

    void OnClick(const Callback &onClick) override;
    void OnUpdate(const Callback &onUpdate) override;

private:
    Texture2D texture;
};

RAYGUI_CPP_END_NAMESPACE

#endif //IMAGE_BUTTON_H
