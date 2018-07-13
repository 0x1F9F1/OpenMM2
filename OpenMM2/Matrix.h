#pragma once

#include "Vector.h"

class Matrix34
{
public:
    float m11;
    float m12;
    float m13;
    float m14;
    float m21;
    float m22;
    float m23;
    float m24;
    float m31;
    float m32;
    float m33;
    float m34;
};

check_size(Matrix34, 0x30);