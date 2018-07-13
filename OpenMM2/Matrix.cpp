#include "stdafx.h"
#include "Matrix.h"

void Matrix34::Identity()
{
    this->m11 = 1.0f;
    this->m12 = 0.0f;
    this->m13 = 0.0f;
    this->m14 = 0.0f;
    this->m21 = 1.0f;
    this->m22 = 0.0f;
    this->m23 = 0.0f;
    this->m24 = 0.0f;
    this->m31 = 1.0f;
    this->m32 = 0.0f;
    this->m33 = 0.0f;
    this->m34 = 0.0f;
}
