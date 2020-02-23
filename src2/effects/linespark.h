/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

// 0x631638 | ?SLH@@3VHashTable@@A
inline extern_var(0x631638, class HashTable, SLH);

class asSparkLut
{
public:
    // 0x460470 | ?Get@asSparkLut@@SAPAV1@PAD@Z
    static inline class asSparkLut* Get(char* arg1)
    {
        return stub<cdecl_t<class asSparkLut*, char*>>(0x460470, arg1);
    }

    // 0x4604B0 | ?Init@asSparkLut@@QAEXPAD@Z
    inline void Init(char* arg1)
    {
        return stub<member_func_t<void, asSparkLut, char*>>(0x4604B0, this, arg1);
    }

    // 0x5C6404 | ?BuiltinClut@asSparkLut@@0PAIA
    inline extern_var(0x5C6404, uint32_t*, BuiltinClut);
};

struct asLineSparks : asCullable
{
public:
    // asLineSparks::`vftable' @ 0x5B1968

    // 0x460690 | ??0asLineSparks@@QAE@XZ
    inline asLineSparks()
    {
        stub<member_func_t<void, asLineSparks>>(0x460690, this);
    }

    // 0x460740 | ?Init@asLineSparks@@QAEXHPAD@Z
    inline void Init(i32 arg1, char* arg2)
    {
        return stub<member_func_t<void, asLineSparks, i32, char*>>(0x460740, this, arg1, arg2);
    }

    // 0x460830 | ?RadialBlast@asLineSparks@@QAEXHAAVVector3@@0@Z
    inline void RadialBlast(i32 arg1, class Vector3& arg2, class Vector3& arg3)
    {
        return stub<member_func_t<void, asLineSparks, i32, class Vector3&, class Vector3&>>(
            0x460830, this, arg1, arg2, arg3);
    }

    // 0x460BE0 | ?Update@asLineSparks@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, asLineSparks>>(0x460BE0, this);
    }

    // 0x460C20 | ?Update@asLineSparks@@QAEXM@Z
    inline void Update(f32 arg1)
    {
        return stub<member_func_t<void, asLineSparks, f32>>(0x460C20, this, arg1);
    }

    // 0x460DE0 | ?Draw@asLineSparks@@QAEXXZ
    inline void Draw()
    {
        return stub<member_func_t<void, asLineSparks>>(0x460DE0, this);
    }

    // 0x5C6400 | ?bEnabled@asLineSparks@@0_NA
    static inline extern_var(0x5C6400, bool, bEnabled);

    // 0x631650 | ?RefCount@asLineSparks@@0HA
    inline extern_var(0x631650, int32_t, RefCount);

    // 0x4606B0 | ??1asLineSparks@@UAE@XZ
    virtual inline ~asLineSparks()
    {
        stub<member_func_t<void, asLineSparks>>(0x4606B0, this);
    }
};
