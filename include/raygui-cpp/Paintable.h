#ifndef PAINTABLE_H
#define PAINTABLE_H

#include "Directives.h"
#include <raygui.h>
#include <unordered_map>
#include <vector>

RAYGUI_CPP_BEGIN_NAMESPACE

class Paintable {
public:
    Paintable() = default;
    virtual ~Paintable() = default;

    void SetBaseColor(Color color);
    void SetTextColor(Color color);
    void SetBorderColor(Color color);
    virtual void SetPropertyColor(GuiControlProperty property, Color color) = 0;

protected:
    void PreRender() const;
    void PostRender() const;

    void AddProperty(GuiControl control, GuiControlProperty property, const Color &color);

private:
    struct PropColor {
        GuiControlProperty property;
        Color previous;
        Color current;

        void SetProperty(const GuiControlProperty p) {
            this->property = p;
        }

        void SetPrevious(const Color p) {
            this->previous = p;
        }

        void SetCurrent(const Color c) {
            this->current = c;
        }
    };

    std::unordered_map<GuiControl, std::vector<PropColor>> m_properties{};
};

RAYGUI_CPP_END_NAMESPACE

#endif // PAINTABLE_H
