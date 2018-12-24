#include "stdafx.h"
#include "asCullManager.h"
#include "asLinearCS.h"
#include "gfxPipeline.h"
#include "asCamera.h"

defn_static(0x661784, asCullManager::Instance);

asCullManager::asCullManager(int maxCullables, int maxCullables2D)
    : MaxCullables(maxCullables)
    , MaxCullables2D(maxCullables2D)
    , MaxCullables2DFG(maxCullables2D)
    , CullableArray(new asCullable*[maxCullables])
    , Cullables2D(new asCullable*[maxCullables2D])
    , Cullables2DFG(new asCullable*[maxCullables2D])
    , CullablsMatrices(new Matrix34*[maxCullables])
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
    if (ShouldReset)
    {
        ShouldReset = false;
    }
    else
    {
        gfxPipeline::BeginFrame();

        gfxPipeline::Clear(3, BaseColor, 1.0, 0);

        for (int i = 0; i < CurrentCullables2D; ++i)
        {
            Cullables2D[i]->Cull();
        }

        gfxPipeline::BeginScene();

        Matrix34* oldMatrix = asLinearCS::CurrentMatrix;

        for (uint32_t i = 0; i < CameraCount; ++i)
        {
            CurrentCamera = CameraArray[i];

            CurrentCamera->DrawBegin();

            for (int j = 0; j < CurrentCullables; ++j)
            {
                asLinearCS::CurrentMatrix = CullablsMatrices[j];

                CullableArray[j]->Cull();
            }

            CurrentCamera->DrawEnd();
        }

        CurrentCamera = nullptr;

        asLinearCS::CurrentMatrix = oldMatrix;

        gfxPipeline::EndScene();

        for (int i = 0; i < CurrentCullables2DFG; ++i)
        {
            Cullables2DFG[i]->Cull();
        }

        gfxPipeline::EndFrame();
    }

    CameraCount = 0;
    CurrentCullables2DFG = 0;
    CurrentCullables2D = 0;
    CurrentCullables = 0;
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
    }
    else
    {
        Cullables2DFG[CurrentCullables2DFG] = cullable;

        ++CurrentCullables2DFG;
    }
}
