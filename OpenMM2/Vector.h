#pragma once

class Vector2
{
public:
    float x;
    float y;
};

check_size(Vector2, 0x8);

class Vector3
{
public:
    float x;
    float y;
    float z;
};

check_size(Vector3, 0xC);