/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "matrix44.h"

#include <xmmintrin.h>

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

run_once([]
{
    create_hook("Matrix44::Dot", "SSE Dot", 0x4C0FC0, static_cast<Matrix44& (Matrix44::*)(const Matrix44& lhs, const Matrix44& rhs)>(&Matrix44::Dot));
});