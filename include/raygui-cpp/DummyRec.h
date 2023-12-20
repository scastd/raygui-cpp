#ifndef RAYGUI_CPP_DUMMY_REC_H
#define RAYGUI_CPP_DUMMY_REC_H

#include "Component.h"
#include "Directives.h"
#include <raygui.h>

RAYGUI_CPP_BEGIN_NAMESPACE

class DummyRec : public Component<void> {
public:
    DummyRec();
    explicit DummyRec(const char *text);
    DummyRec(Bounds bounds, const char *text);

    RAYGUI_NODISCARD const char *GetText() const;
    void SetText(const char *newText);

    void Show() override;

private:
    const char *text;
};

RAYGUI_CPP_END_NAMESPACE

#endif // RAYGUI_CPP_DUMMY_REC_H
