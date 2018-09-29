#include "stdafx.h"
#include "Matrix.h"

#include <xmmintrin.h>

void Matrix34::Identity()
{
    m00 = 1.0f;
    m01 = 0.0f;
    m02 = 0.0f;

    m10 = 0.0f;
    m11 = 1.0f;
    m12 = 0.0f;

    m20 = 0.0f;
    m21 = 0.0f;
    m22 = 1.0f;

    m30 = 0.0f;
    m31 = 0.0f;
    m32 = 0.0f;
}

void Matrix44::FastInverse(const Matrix44 & rhs)
{
    m00 = rhs.m00;
    m10 = rhs.m01;
    m20 = rhs.m02;
    m30 = -(rhs.m00 * rhs.m30 + rhs.m01 * rhs.m31 + rhs.m02 * rhs.m32);

    m01 = rhs.m10;
    m11 = rhs.m11;
    m21 = rhs.m12;
    m31 = -(rhs.m10 * rhs.m30 + rhs.m11 * rhs.m31 + rhs.m12 * rhs.m32);

    m02 = rhs.m20;
    m12 = rhs.m21;
    m22 = rhs.m22;
    m32 = -(rhs.m20 * rhs.m30 + rhs.m21 * rhs.m31 + rhs.m22 * rhs.m32);

    m03 = 0.0f;
    m13 = 0.0f;
    m23 = 0.0f;
    m33 = 1.0f;
}

Matrix44 & Matrix44::Dot(const Matrix44 & rhs)
{
    return Dot(*this, rhs);
}

Matrix44 & Matrix44::Dot(const Matrix44 & lhs, const Matrix44 & rhs)
{
    __m128 temp = _mm_loadu_ps(&rhs.m00);
    __m128 res0 = _mm_mul_ps(_mm_load_ps1(&lhs.m00), temp);
    __m128 res1 = _mm_mul_ps(_mm_load_ps1(&lhs.m10), temp);
    __m128 res2 = _mm_mul_ps(_mm_load_ps1(&lhs.m20), temp);
    __m128 res3 = _mm_mul_ps(_mm_load_ps1(&lhs.m30), temp);

    temp = _mm_loadu_ps(&rhs.m10);
    res0 = _mm_add_ps(res0, _mm_mul_ps(_mm_load_ps1(&lhs.m01), temp));
    res1 = _mm_add_ps(res1, _mm_mul_ps(_mm_load_ps1(&lhs.m11), temp));
    res2 = _mm_add_ps(res2, _mm_mul_ps(_mm_load_ps1(&lhs.m21), temp));
    res3 = _mm_add_ps(res3, _mm_mul_ps(_mm_load_ps1(&lhs.m31), temp));

    temp = _mm_loadu_ps(&rhs.m20);
    res0 = _mm_add_ps(res0, _mm_mul_ps(_mm_load_ps1(&lhs.m02), temp));
    res1 = _mm_add_ps(res1, _mm_mul_ps(_mm_load_ps1(&lhs.m12), temp));
    res2 = _mm_add_ps(res2, _mm_mul_ps(_mm_load_ps1(&lhs.m22), temp));
    res3 = _mm_add_ps(res3, _mm_mul_ps(_mm_load_ps1(&lhs.m32), temp));

    temp = _mm_loadu_ps(&rhs.m30);
    _mm_storeu_ps(&m00, _mm_add_ps(res0, _mm_mul_ps(_mm_load_ps1(&lhs.m03), temp)));
    _mm_storeu_ps(&m10, _mm_add_ps(res1, _mm_mul_ps(_mm_load_ps1(&lhs.m13), temp)));
    _mm_storeu_ps(&m20, _mm_add_ps(res2, _mm_mul_ps(_mm_load_ps1(&lhs.m23), temp)));
    _mm_storeu_ps(&m30, _mm_add_ps(res3, _mm_mul_ps(_mm_load_ps1(&lhs.m33), temp)));

    return *this;
}
