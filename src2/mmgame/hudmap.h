/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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

#pragma once

#include "node/node.h"

/*
    mmgame:hudmap

    0x42EB60 | public: __thiscall mmHudMap::mmHudMap(void) | ??0mmHudMap@@QAE@XZ
    0x42EC70 | public: virtual __thiscall mmHudMap::~mmHudMap(void) | ??1mmHudMap@@UAE@XZ
    0x42EC80 | public: void __thiscall mmHudMap::Init(class Matrix34 *,class mmGame *,char *) | ?Init@mmHudMap@@QAEXPAVMatrix34@@PAVmmGame@@PAD@Z
    0x42EE90 | public: virtual void __thiscall mmHudMap::Reset(void) | ?Reset@mmHudMap@@UAEXXZ
    0x42EEA0 | public: void __thiscall mmHudMap::RegisterOpponents(struct OppIconInfo *,int) | ?RegisterOpponents@mmHudMap@@QAEXPAUOppIconInfo@@H@Z
    0x42EEC0 | public: void __thiscall mmHudMap::RegisterCopsnRobbers(class Vector3 * *) | ?RegisterCopsnRobbers@mmHudMap@@QAEXPAPAVVector3@@@Z
    0x42EEE0 | public: void __thiscall mmHudMap::Activate(void) | ?Activate@mmHudMap@@QAEXXZ
    0x42EEF0 | public: void __thiscall mmHudMap::Deactivate(void) | ?Deactivate@mmHudMap@@QAEXXZ
    0x42EF00 | protected: int __thiscall mmHudMap::GetNextMapMode(void) | ?GetNextMapMode@mmHudMap@@IAEHXZ
    0x42EF20 | protected: int __thiscall mmHudMap::GetCurrentMapMode(void) | ?GetCurrentMapMode@mmHudMap@@IAEHXZ
    0x42EF30 | protected: void __thiscall mmHudMap::SetMapMode(int) | ?SetMapMode@mmHudMap@@IAEXH@Z
    0x42F1A0 | public: virtual void __thiscall mmHudMap::Update(void) | ?Update@mmHudMap@@UAEXXZ
    0x42F1B0 | public: virtual void __thiscall mmHudMap::Cull(void) | ?Cull@mmHudMap@@UAEXXZ
    0x42F580 | private: void __thiscall mmHudMap::DrawIcon(enum mmHudMap::IconType,class Matrix34 const &) | ?DrawIcon@mmHudMap@@AAEXW4IconType@1@ABVMatrix34@@@Z
    0x42F600 | private: void __thiscall mmHudMap::DrawPlayer(void) | ?DrawPlayer@mmHudMap@@AAEXXZ
    0x42F690 | private: void __thiscall mmHudMap::DrawIndicator(enum mmHudMap::IndicatorType,class Vector3 const &) | ?DrawIndicator@mmHudMap@@AAEXW4IndicatorType@1@ABVVector3@@@Z
    0x42F6F0 | private: void __thiscall mmHudMap::DrawOpponents(void) | ?DrawOpponents@mmHudMap@@AAEXXZ
    0x42F7D0 | private: void __thiscall mmHudMap::DrawCops(void) | ?DrawCops@mmHudMap@@AAEXXZ
    0x42F830 | private: void __thiscall mmHudMap::DrawWaypoints(void) | ?DrawWaypoints@mmHudMap@@AAEXXZ
    0x42F890 | private: void __thiscall mmHudMap::DrawCopsnRobbers(void) | ?DrawCopsnRobbers@mmHudMap@@AAEXXZ
    0x42FA00 | public: void __thiscall mmHudMap::ToggleMapRes(void) | ?ToggleMapRes@mmHudMap@@QAEXXZ
    0x42FA10 | public: void __thiscall mmHudMap::ToggleMapOrient(void) | ?ToggleMapOrient@mmHudMap@@QAEXXZ
    0x42FA20 | public: void __thiscall mmHudMap::SetZoomIn(bool) | ?SetZoomIn@mmHudMap@@QAEX_N@Z
    0x42FA30 | public: bool __thiscall mmHudMap::GetZoomIn(void) | ?GetZoomIn@mmHudMap@@QAE_NXZ
    0x42FA40 | public: void __thiscall mmHudMap::SetOrient(bool) | ?SetOrient@mmHudMap@@QAEX_N@Z
    0x42FA50 | public: bool __thiscall mmHudMap::GetOrient(void) | ?GetOrient@mmHudMap@@QAE_NXZ
    public: void __thiscall mmHudMap::AddWidgets(class bkBank *) | ?AddWidgets@mmHudMap@@QAEXPAVbkBank@@@Z
    0x42FA60 | public: virtual void __thiscall mmHudMap::FileIO(class datParser &) | ?FileIO@mmHudMap@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall mmHudMap::`vector deleting destructor'(unsigned int) | ??_EmmHudMap@@UAEPAXI@Z
    0x42FCC0 | public: virtual void * __thiscall mmHudMap::`scalar deleting destructor'(unsigned int) | ??_GmmHudMap@@UAEPAXI@Z
    0x42FCF0 | class Matrix44 & __cdecl Convert(class Matrix44 &,class Matrix34 const &) | ?Convert@@YAAAVMatrix44@@AAV1@ABVMatrix34@@@Z
    0x42FD60 | public: virtual char * __thiscall mmHudMap::GetClassName(void) | ?GetClassName@mmHudMap@@UAEPADXZ
    0x5B0D00 | const mmHudMap::`vftable' | ??_7mmHudMap@@6B@
    0x5C4740 | unsigned int * HudmapIconColors | ?HudmapIconColors@@3PAIA
*/

class mmHudMap : public asNode
{
    // const mmHudMap::`vftable' @ 0x5B0D00

public:
    // 0x42EB60 | ??0mmHudMap@@QAE@XZ
    mmHudMap();

    // 0x42FCC0 | ??_GmmHudMap@@UAEPAXI@Z
    // 0x42EC70 | ??1mmHudMap@@UAE@XZ
    ~mmHudMap() override;

    // 0x42EEE0 | ?Activate@mmHudMap@@QAEXXZ
    void Activate();

    // 0x42F1B0 | ?Cull@mmHudMap@@UAEXXZ
    void Cull() override;

    // 0x42EEF0 | ?Deactivate@mmHudMap@@QAEXXZ
    void Deactivate();

    // 0x42FA60 | ?FileIO@mmHudMap@@UAEXAAVdatParser@@@Z
    void FileIO(class datParser& arg1) override;

    // 0x42FD60 | ?GetClassName@mmHudMap@@UAEPADXZ
    char* GetClassName() override;

    // 0x42FA50 | ?GetOrient@mmHudMap@@QAE_NXZ
    bool GetOrient();

    // 0x42FA30 | ?GetZoomIn@mmHudMap@@QAE_NXZ
    bool GetZoomIn();

    // 0x42EC80 | ?Init@mmHudMap@@QAEXPAVMatrix34@@PAVmmGame@@PAD@Z
    void Init(class Matrix34* arg1, class mmGame* arg2, char* arg3);

    // 0x42EEC0 | ?RegisterCopsnRobbers@mmHudMap@@QAEXPAPAVVector3@@@Z
    void RegisterCopsnRobbers(class Vector3** arg1);

    // 0x42EEA0 | ?RegisterOpponents@mmHudMap@@QAEXPAUOppIconInfo@@H@Z
    void RegisterOpponents(struct OppIconInfo* arg1, i32 arg2);

    // 0x42EE90 | ?Reset@mmHudMap@@UAEXXZ
    void Reset() override;

    // 0x42FA40 | ?SetOrient@mmHudMap@@QAEX_N@Z
    void SetOrient(bool arg1);

    // 0x42FA20 | ?SetZoomIn@mmHudMap@@QAEX_N@Z
    void SetZoomIn(bool arg1);

    // 0x42FA10 | ?ToggleMapOrient@mmHudMap@@QAEXXZ
    void ToggleMapOrient();

    // 0x42FA00 | ?ToggleMapRes@mmHudMap@@QAEXXZ
    void ToggleMapRes();

    // 0x42F1A0 | ?Update@mmHudMap@@UAEXXZ
    void Update() override;

protected:
    // 0x42EF20 | ?GetCurrentMapMode@mmHudMap@@IAEHXZ
    i32 GetCurrentMapMode();

    // 0x42EF00 | ?GetNextMapMode@mmHudMap@@IAEHXZ
    i32 GetNextMapMode();

    // 0x42EF30 | ?SetMapMode@mmHudMap@@IAEXH@Z
    void SetMapMode(i32 arg1);

private:
    // 0x42F7D0 | ?DrawCops@mmHudMap@@AAEXXZ
    void DrawCops();

    // 0x42F890 | ?DrawCopsnRobbers@mmHudMap@@AAEXXZ
    void DrawCopsnRobbers();

    // 0x42F580 | ?DrawIcon@mmHudMap@@AAEXW4IconType@1@ABVMatrix34@@@Z
    void DrawIcon(enum mmHudMap::IconType arg1, class Matrix34 const& arg2);

    // 0x42F690 | ?DrawIndicator@mmHudMap@@AAEXW4IndicatorType@1@ABVVector3@@@Z
    void DrawIndicator(enum mmHudMap::IndicatorType arg1, class Vector3 const& arg2);

    // 0x42F6F0 | ?DrawOpponents@mmHudMap@@AAEXXZ
    void DrawOpponents();

    // 0x42F600 | ?DrawPlayer@mmHudMap@@AAEXXZ
    void DrawPlayer();

    // 0x42F830 | ?DrawWaypoints@mmHudMap@@AAEXXZ
    void DrawWaypoints();
};

check_size(mmHudMap, 0xC8);

// 0x42FCF0 | ?Convert@@YAAAVMatrix44@@AAV1@ABVMatrix34@@@Z
class Matrix44& Convert(class Matrix44& arg1, class Matrix34 const& arg2);

// 0x5C4740 | ?HudmapIconColors@@3PAIA
inline extern_var(0x5C4740, u32*, HudmapIconColors);
