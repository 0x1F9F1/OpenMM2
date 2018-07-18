#pragma once

#include "asNode.h"

#include "Matrix.h"

class asCamera
    : public asNode
{
public:
    int Cullable2D;
    int field_1C;
    uint32_t dword20;
    float float24;
    float float28;
    float float2C;
    float float30;
    uint32_t dword34;
    uint32_t dword38;
    uint32_t dword3C;
    uint32_t dword40;
    uint32_t dword44;
    uint32_t dword48;
    float dword4C;
    uint32_t dword50;
    float dword54;
    float gap58;
    float field_5C;
    float field_60;
    float field_64;
    float field_68;
    float field_6C;
    float field_70;
    float field_74;
    float field_78;
    float field_7C;
    float field_80;
    float field_84;
    float field_88;
    float field_8C;
    float field_90;
    float field_94;
    float field_98;
    float field_9C;
    uint32_t dwordA0;
    uint32_t dwordA4;
    uint32_t dwordA8;
    float dwordAC;
    uint32_t dwordB0;
    uint32_t dwordB4;
    float gapB8;
    float field_BC;
    float field_C0;
    float field_C4;
    float dwordC8;
    float dwordCC;
    float dwordD0;
    Matrix34 matrix34D4;
    Matrix34 matrix34104;
    uint32_t dword134;
    uint32_t dword138;
    uint32_t dword13C;
    uint32_t dword140;
    uint32_t dword144;
    uint32_t dword148;
    float dword14C;
    float dword150;
    float dword154;
    uint32_t dword158;
    uint32_t dword15C;
    uint32_t dword160;
    float dword164;
    uint32_t dword168;
    uint32_t dword16C;

    asCamera() = delete;

    virtual ~asCamera() override = 0;

    virtual void Update() override;

    void DrawBegin();
    void DrawEnd();
};

check_size(asCamera, 0x170);

