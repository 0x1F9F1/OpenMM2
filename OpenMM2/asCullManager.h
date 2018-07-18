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
    uint32_t dword18;
    uint32_t CameraCount;
    asCamera *CameraArray[MAX_CULLABLE_CAMERAS];
    asCamera *CurrentCamera;
    int CurrentCullables;
    int MaxCullables;
    int CurrentCullables2D;
    int MaxCullables2D;
    int CurrentCullables2DFG;
    int MaxCullables2DFG;
    asCullable **CullableArray;
    asCullable **Cullables2D;
    asCullable **Cullables2DFG;
    Matrix34 **CullablsMatrices;
    int BaseColor;
    int field_90;
    int field_94;
    Timer Timer1;
    Timer Timer2;
    int field_A0;
    bool ShouldReset;
    char field_A5;
    char field_A6;
    char field_A7;

    asCullManager(int maxCullables, int maxCullables2D);
    ~asCullManager();

    virtual void Update() override;
    virtual void Reset() override;

    virtual void DeclareCamera(asCamera * camera);
    virtual void DeclareCullable(asCullable * cullable);
    virtual void DeclareCullable2D(asCullable * cullable);
    virtual void DeclareCullable2DFG(asCullable * cullable);

    declstatic(asCullManager*, Instance);
};

check_size(asCullManager, 0xA8);