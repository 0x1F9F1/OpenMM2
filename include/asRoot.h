#pragma once

#include "asNode.h"
#include "Matrix.h"

struct asRoot
    : public asNode
{
    Matrix34 Matrix {};

    bool Paused {false};
    bool ShouldPause {false};
    bool EnableNan {false};

    asRoot();

    void Init(bool nanSignal);

    bool IsPaused();
    void SetPause(bool paused);
    void TogglePause();

    virtual void Update(void) override;
    virtual void Reset(void) override;
    virtual char * GetClassName(void) override;
};

check_size(asRoot, 0x4C);

static_var(0x661738, asRoot, ROOT);