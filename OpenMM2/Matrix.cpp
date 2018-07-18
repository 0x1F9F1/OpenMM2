#include "stdafx.h"
#include "Matrix.h"

void Matrix34::Identity()
{
    m00 = 1.0f;
    m01 = 0.0f;
    m02 = 0.0f;
    m03 = 0.0f;
    m10 = 1.0f;
    m11 = 0.0f;
    m12 = 0.0f;
    m13 = 0.0f;
    m20 = 1.0f;
    m21 = 0.0f;
    m22 = 0.0f;
    m23 = 0.0f;
}

void Matrix44::FastInverse(const Matrix44 & rhs)
{
    m00 = rhs.m00;
    m10 = rhs.m01;
    m20 = rhs.m02;
    m30 = -(rhs.m02 * rhs.m32 + rhs.m01 * rhs.m31 + rhs.m00 * rhs.m30);

    m01 = rhs.m10;
    m11 = rhs.m11;
    m21 = rhs.m12;
    m31 = -(rhs.m12 * rhs.m32 + rhs.m11 * rhs.m31 + rhs.m10 * rhs.m30);

    m02 = rhs.m20;
    m12 = rhs.m21;
    m22 = rhs.m22;
    m32 = -(rhs.m22 * rhs.m32 + rhs.m21 * rhs.m31 + rhs.m20 * rhs.m30);

    m03 = 0.0f;
    m13 = 0.0f;
    m23 = 0.0f;
    m33 = 1.0f;
}

Matrix44 & Matrix44::Dot(const Matrix44 & rhs)
{
    m00 = m00 * rhs.m00 + m01 * rhs.m10 + m02 * rhs.m20 + m03 * rhs.m30;
    m01 = m00 * rhs.m01 + m01 * rhs.m11 + m02 * rhs.m21 + m03 * rhs.m31;
    m02 = m00 * rhs.m02 + m01 * rhs.m12 + m02 * rhs.m22 + m03 * rhs.m32;
    m03 = m00 * rhs.m03 + m01 * rhs.m13 + m02 * rhs.m23 + m03 * rhs.m33;

    m10 = m10 * rhs.m00 + m11 * rhs.m10 + m12 * rhs.m20 + m13 * rhs.m30;
    m11 = m10 * rhs.m01 + m11 * rhs.m11 + m12 * rhs.m21 + m13 * rhs.m31;
    m12 = m10 * rhs.m02 + m11 * rhs.m12 + m12 * rhs.m22 + m13 * rhs.m32;
    m13 = m10 * rhs.m03 + m11 * rhs.m13 + m12 * rhs.m23 + m13 * rhs.m33;

    m20 = m20 * rhs.m00 + m21 * rhs.m10 + m22 * rhs.m20 + m23 * rhs.m30;
    m21 = m20 * rhs.m01 + m21 * rhs.m11 + m22 * rhs.m21 + m23 * rhs.m31;
    m22 = m20 * rhs.m02 + m21 * rhs.m12 + m22 * rhs.m22 + m23 * rhs.m32;
    m23 = m20 * rhs.m03 + m21 * rhs.m13 + m22 * rhs.m23 + m23 * rhs.m33;

    m30 = m30 * rhs.m00 + m31 * rhs.m10 + m32 * rhs.m20 + m33 * rhs.m30;
    m31 = m30 * rhs.m01 + m31 * rhs.m11 + m32 * rhs.m21 + m33 * rhs.m31;
    m32 = m30 * rhs.m02 + m31 * rhs.m12 + m32 * rhs.m22 + m33 * rhs.m32;
    m33 = m30 * rhs.m03 + m31 * rhs.m13 + m32 * rhs.m23 + m33 * rhs.m33;

    return *this;
}
