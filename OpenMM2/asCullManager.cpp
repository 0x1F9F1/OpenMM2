#include "stdafx.h"
#include "asCullManager.h"
#include "asLinearCS.h"

defnvar(0x661784, asCullManager::Instance);

asCullManager::asCullManager(int maxCullables, int maxCullables2D)
    : dword18(0)
    , CameraCount(0)
    , CameraArray()
    , CurrentCamera(nullptr)
    , CurrentCullables(0)
    , MaxCullables(maxCullables)
    , CurrentCullables2D(0)
    , MaxCullables2D(maxCullables2D)
    , CurrentCullables2DFG(0)
    , MaxCullables2DFG(maxCullables2D)
    , CullableArray(new asCullable*[maxCullables])
    , Cullables2D(new asCullable*[maxCullables2D])
    , Cullables2DFG(new asCullable*[maxCullables2D])
    , CullablsMatrices(new Matrix34*[maxCullables])
    , BaseColor(0xFF001E3C)
    , field_90(0)
    , field_94(0)
    , Timer1()
    , Timer2()
    , field_A0(0)
    , ShouldReset(0)
    , field_A5(0)
    , field_A6(0)
    , field_A7(0)
{
    Instance = this;

    Reset();

    Flags |= 0x400;
}

asCullManager::~asCullManager()
{
    Instance = nullptr;

    delete[] Cullables2DFG;
    delete[] Cullables2D;
    delete[] CullablsMatrices;
    delete[] CullableArray;
}

void asCullManager::Update()
{
    stub<thiscall_t<void, asCullManager>>(0x4A1450, this);
}

void asCullManager::Reset()
{
    CameraCount = 0;
    CurrentCullables2DFG = 0;
    CurrentCullables2D = 0;
    CurrentCullables = 0;
    field_94 = 0;
    field_90 = 0;
    field_A0 = 0;
    Timer1.Reset();
    Timer2.Reset();
    BaseColor = 0xFF001E3C;
}

void asCullManager::DeclareCamera(asCamera * camera)
{
    if (CameraCount >= MAX_CULLABLE_CAMERAS)
    {
        Errorf("Too many cameras declared, somthing's rotten in Denmark.");

        return;
    }

    CameraArray[CameraCount] = camera;

    ++CameraCount;
}

void asCullManager::DeclareCullable(asCullable * cullable)
{
    if (CurrentCullables >= MaxCullables)
    {
        Warningf("Increase CULLMGR::MaxCullables!. MaxCullables=%d", MaxCullables);
    }
    else
    {
        CullableArray[CurrentCullables] = cullable;

        CullablsMatrices[CurrentCullables] = asLinearCS::CurrentMatrix;

        ++CurrentCullables;
    }
}

void asCullManager::DeclareCullable2D(asCullable * cullable)
{
    if (CurrentCullables2D >= MaxCullables2D)
    {
        Warningf("Increase CULLMGR::MaxCullables2D!. MaxCullables2D=%d", MaxCullables2D);
    }
    else
    {
        Cullables2D[CurrentCullables2D] = cullable;

        ++CurrentCullables2D;
    }
}

void asCullManager::DeclareCullable2DFG(asCullable * cullable)
{
    if (CurrentCullables2DFG >= MaxCullables2DFG)
    {
        Warningf("Increase CULLMGR::MaxCullables2DFG!. MaxCullables2DFG=%d", MaxCullables2DFG);
        Warningf("Increase CULLMGR::MaxCullables2DFG!");
    }
    else
    {
        Cullables2DFG[CurrentCullables2DFG] = cullable;

        ++CurrentCullables2DFG;
    }
}
