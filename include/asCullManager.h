#pragma once

#include "asNode.h"
#include "Timer.h"

class asCamera;
class Matrix34;

#define MAX_CULLABLE_CAMERAS 16

class asCullManager
    : public asNode
{
public:
    uint32_t dword18 {0};
    uint32_t CameraCount {0};
    asCamera *CameraArray[MAX_CULLABLE_CAMERAS] {nullptr};
    asCamera *CurrentCamera {nullptr};
    int CurrentCullables {0};
    int MaxCullables {0};
    int CurrentCullables2D {0};
    int MaxCullables2D {0};
    int CurrentCullables2DFG {0};
    int MaxCullables2DFG {0};
    asCullable **CullableArray {nullptr};
    asCullable **Cullables2D {nullptr};
    asCullable **Cullables2DFG {nullptr};
    Matrix34 **CullablsMatrices {nullptr};
    uint32_t BaseColor {0xFF001E3C};
    int field_90 {0};
    int field_94 {0};
    Timer Timer1 {};
    Timer Timer2 {};
    int field_A0 {0};
    bool ShouldReset {false};
    char field_A5 {0};
    char field_A6 {0};
    char field_A7 {0};

    asCullManager(int maxCullables, int maxCullables2D);
    ~asCullManager();

    virtual void Update() override;
    virtual void Reset() override;

    virtual void DeclareCamera(asCamera * camera);
    virtual void DeclareCullable(asCullable * cullable);
    virtual void DeclareCullable2D(asCullable * cullable);
    virtual void DeclareCullable2DFG(asCullable * cullable);

    inline_var(0x661784, asCullManager*, Instance);
};

check_size(asCullManager, 0xA8);