#ifndef RAYGUI_CPP_DUMMY_REC_H
#define RAYGUI_CPP_DUMMY_REC_H

#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class DummyRec {
public:
    DummyRec();
    DummyRec(::Rectangle bounds, const char *text);
    DummyRec(float x, float y, float width, float height, const char *text);
    DummyRec(::Vector2 position, ::Vector2 size, const char *text);

    ~DummyRec();

    RAYGUI_NODISCARD ::Rectangle GetBounds() const;
    void SetBounds(::Rectangle newBounds);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    void Show() const;

private:
    ::Rectangle bounds;
    const char *text;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_DUMMY_REC_H
