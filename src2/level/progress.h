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

/*
    level:progress

    0x462E30 | public: static void __cdecl lvlProgress::BeginTask(char const *) | ?BeginTask@lvlProgress@@SAXPBD@Z
    0x462E80 | public: static void __cdecl lvlProgress::UpdateTask(float,bool) | ?UpdateTask@lvlProgress@@SAXM_N@Z
    0x462F00 | public: static void __cdecl lvlProgress::PushSubTask(float,char *) | ?PushSubTask@lvlProgress@@SAXMPAD@Z
    0x462F40 | public: static void __cdecl lvlProgress::PushSubTask(float,float,char *) | ?PushSubTask@lvlProgress@@SAXMMPAD@Z
    0x462FB0 | public: static float __cdecl lvlProgress::PopSubTask(void) | ?PopSubTask@lvlProgress@@SAMXZ
    0x462FD0 | public: static float __cdecl lvlProgress::GetPercent(void) | ?GetPercent@lvlProgress@@SAMXZ
    0x463000 | public: static void __cdecl lvlProgress::EndTask(void) | ?EndTask@lvlProgress@@SAXXZ
    0x463020 | public: static void __cdecl lvlProgress::SetCallback(void (__cdecl*)(char const *,int)) | ?SetCallback@lvlProgress@@SAXP6AXPBDH@Z@Z
    0x631658 | private: static float * lvlProgress::sm_SubTaskEnd | ?sm_SubTaskEnd@lvlProgress@@0PAMA
    0x631678 | private: static char * * lvlProgress::sm_SubTaskName | ?sm_SubTaskName@lvlProgress@@0PAPADA
    0x631698 | private: static int lvlProgress::sm_SubTaskLevel | ?sm_SubTaskLevel@lvlProgress@@0HA
    0x6316A0 | private: static float * lvlProgress::sm_SubTaskStart | ?sm_SubTaskStart@lvlProgress@@0PAMA
*/

struct lvlProgress
{
public:
    // 0x462E30 | ?BeginTask@lvlProgress@@SAXPBD@Z
    static void BeginTask(char const* arg1);

    // 0x463000 | ?EndTask@lvlProgress@@SAXXZ
    static void EndTask();

    // 0x462FD0 | ?GetPercent@lvlProgress@@SAMXZ
    static f32 GetPercent();

    // 0x462FB0 | ?PopSubTask@lvlProgress@@SAMXZ
    static f32 PopSubTask();

    // 0x462F00 | ?PushSubTask@lvlProgress@@SAXMPAD@Z
    static void PushSubTask(f32 arg1, char* arg2);

    // 0x462F40 | ?PushSubTask@lvlProgress@@SAXMMPAD@Z
    static void PushSubTask(f32 arg1, f32 arg2, char* arg3);

    // 0x463020 | ?SetCallback@lvlProgress@@SAXP6AXPBDH@Z@Z
    static void SetCallback(void (*arg1)(char const*, i32));

    // 0x462E80 | ?UpdateTask@lvlProgress@@SAXM_N@Z
    static void UpdateTask(f32 arg1, bool arg2);

private:
    // 0x631658 | ?sm_SubTaskEnd@lvlProgress@@0PAMA
    static inline extern_var(0x631658, f32*, sm_SubTaskEnd);

    // 0x631698 | ?sm_SubTaskLevel@lvlProgress@@0HA
    static inline extern_var(0x631698, i32, sm_SubTaskLevel);

    // 0x631678 | ?sm_SubTaskName@lvlProgress@@0PAPADA
    static inline extern_var(0x631678, char**, sm_SubTaskName);

    // 0x6316A0 | ?sm_SubTaskStart@lvlProgress@@0PAMA
    static inline extern_var(0x6316A0, f32*, sm_SubTaskStart);
};
