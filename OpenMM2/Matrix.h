#pragma once

#include "Vector.h"

class Matrix34
{
public:
    float m00, m01, m02;
    float m10, m11, m12;
    float m20, m21, m22;
    float m30, m31, m32;

    Matrix34() = default;

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

    Matrix44() = default;

    Matrix44(const Matrix34& rhs)
        : m00(rhs.m00), m01(rhs.m01), m02(rhs.m02), m03(0.0f)
        , m10(rhs.m10), m11(rhs.m11), m12(rhs.m12), m13(0.0f)
        , m20(rhs.m20), m21(rhs.m21), m22(rhs.m22), m23(0.0f)
        , m30(rhs.m30), m31(rhs.m31), m32(rhs.m32), m33(1.0f)
    { }

    void FastInverse(const Matrix44& rhs);

    Matrix44& Dot(const Matrix44& rhs);
    Matrix44& Dot(const Matrix44& lhs, const Matrix44& rhs);
};

check_size(Matrix44, 0x40);
