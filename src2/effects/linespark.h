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

#include "node/cullable.h"

/*
    effects:linespark

    0x460470 | public: static class asSparkLut * __cdecl asSparkLut::Get(char *) | ?Get@asSparkLut@@SAPAV1@PAD@Z
    0x4604B0 | public: void __thiscall asSparkLut::Init(char *) | ?Init@asSparkLut@@QAEXPAD@Z
    0x460690 | public: __thiscall asLineSparks::asLineSparks(void) | ??0asLineSparks@@QAE@XZ
    0x4606B0 | public: virtual __thiscall asLineSparks::~asLineSparks(void) | ??1asLineSparks@@UAE@XZ
    0x460740 | public: void __thiscall asLineSparks::Init(int,char *) | ?Init@asLineSparks@@QAEXHPAD@Z
    public: void __thiscall asLineSparks::AddWidgets(class bkBank &) | ?AddWidgets@asLineSparks@@QAEXAAVbkBank@@@Z
    0x460830 | public: void __thiscall asLineSparks::RadialBlast(int,class Vector3 &,class Vector3 &) | ?RadialBlast@asLineSparks@@QAEXHAAVVector3@@0@Z
    0x460BE0 | public: void __thiscall asLineSparks::Update(void) | ?Update@asLineSparks@@QAEXXZ
    0x460C20 | public: void __thiscall asLineSparks::Update(float) | ?Update@asLineSparks@@QAEXM@Z
    0x460DE0 | public: void __thiscall asLineSparks::Draw(void) | ?Draw@asLineSparks@@QAEXXZ
    0x460E70 | public: virtual void * __thiscall asLineSparks::`scalar deleting destructor'(unsigned int) | ??_GasLineSparks@@UAEPAXI@Z
    public: virtual void * __thiscall asLineSparks::`vector deleting destructor'(unsigned int) | ??_EasLineSparks@@UAEPAXI@Z
    0x460EA0 | public: virtual __thiscall asCullable::~asCullable(void) | ??1asCullable@@UAE@XZ
    0x5B1968 | const asLineSparks::`vftable' | ??_7asLineSparks@@6B@
    0x5C6400 | private: static bool asLineSparks::bEnabled | ?bEnabled@asLineSparks@@0_NA
    0x5C6404 | private: static unsigned int * asSparkLut::BuiltinClut | ?BuiltinClut@asSparkLut@@0PAIA
    0x631638 | class HashTable SLH | ?SLH@@3VHashTable@@A
    0x631650 | private: static int asLineSparks::RefCount | ?RefCount@asLineSparks@@0HA
*/

class asSparkLut
{
public:
    // 0x4604B0 | ?Init@asSparkLut@@QAEXPAD@Z
    void Init(char* arg1);

    // 0x460470 | ?Get@asSparkLut@@SAPAV1@PAD@Z
    static class asSparkLut* Get(char* arg1);

private:
    // 0x5C6404 | ?BuiltinClut@asSparkLut@@0PAIA
    static inline extern_var(0x5C6404, u32*, BuiltinClut);
};

check_size(asSparkLut, 0x0);

class asLineSparks : public asCullable
{
    // const asLineSparks::`vftable' @ 0x5B1968

public:
    // 0x460690 | ??0asLineSparks@@QAE@XZ
    asLineSparks();

    // 0x460E70 | ??_GasLineSparks@@UAEPAXI@Z
    // 0x4606B0 | ??1asLineSparks@@UAE@XZ
    ~asLineSparks() override;

    // 0x460DE0 | ?Draw@asLineSparks@@QAEXXZ
    void Draw();

    // 0x460740 | ?Init@asLineSparks@@QAEXHPAD@Z
    void Init(i32 arg1, char* arg2);

    // 0x460830 | ?RadialBlast@asLineSparks@@QAEXHAAVVector3@@0@Z
    void RadialBlast(i32 arg1, class Vector3& arg2, class Vector3& arg3);

    // 0x460BE0 | ?Update@asLineSparks@@QAEXXZ
    void Update();

    // 0x460C20 | ?Update@asLineSparks@@QAEXM@Z
    void Update(f32 arg1);

private:
    // 0x631650 | ?RefCount@asLineSparks@@0HA
    static inline extern_var(0x631650, i32, RefCount);

    // 0x5C6400 | ?bEnabled@asLineSparks@@0_NA
    static inline extern_var(0x5C6400, bool, bEnabled);
};

check_size(asLineSparks, 0x60);

// 0x631638 | ?SLH@@3VHashTable@@A
inline extern_var(0x631638, class HashTable, SLH);
