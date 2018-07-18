#pragma once

#include "Vector.h"

class Matrix34
{
public:
    float m00, m01, m02, m03;
    float m10, m11, m12, m13;
    float m20, m21, m22, m23;

    void Identity();
};

check_size(Matrix34, 0x30);

class Matrix44
{
public:
    float m00, m01, m02, m03;
    float m10, m11, m12, m13;
    float m20, m21, m22, m23;
    float m30, m31, m32, m33;

    void FastInverse(const Matrix44& rhs);

    Matrix44& Dot(const Matrix44& rhs);
};

check_size(Matrix44, 0x40);