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

#pragma once

/*
    aud:manager

    0x5A0D60 | public: class audManager * __thiscall audManager::Create(int,int,int,int,int,int,int,int,int,int,int,enum audManager::SOUNDFLAG) | ?Create@audManager@@QAEPAV1@HHHHHHHHHHHW4SOUNDFLAG@1@@Z
    0x5A0F80 | public: void __thiscall audManager::RestartAudio(int,int,int) | ?RestartAudio@audManager@@QAEXHHH@Z
    0x5A0F90 | public: void __thiscall audManager::ShutDownAudio(void) | ?ShutDownAudio@audManager@@QAEXXZ
    0x5A0FE0 | public: void __thiscall audManager::Destroy(void) | ?Destroy@audManager@@QAEXXZ
    0x5A0FF0 | private: bool __thiscall audManager::InitControlStruct(class audSoundHeap *,struct _controlptrs_ *,int) | ?InitControlStruct@audManager@@AAE_NPAVaudSoundHeap@@PAU_controlptrs_@@H@Z
    0x5A1060 | public: void __thiscall audManager::Enable(bool) | ?Enable@audManager@@QAEX_N@Z
    0x5A1090 | public: bool __thiscall audManager::IsEnabled(void) | ?IsEnabled@audManager@@QAE_NXZ
    0x5A10B0 | public: void __thiscall audManager::Update(int) | ?Update@audManager@@QAEXH@Z
    0x5A1160 | public: int __thiscall audManager::AddHead(class audHead *) | ?AddHead@audManager@@QAEHPAVaudHead@@@Z
    0x5A11B0 | public: bool __thiscall audManager::RemoveHead(class audHead *) | ?RemoveHead@audManager@@QAE_NPAVaudHead@@@Z
    0x5A1270 | public: class audHead * __thiscall audManager::GetActiveHead(int) | ?GetActiveHead@audManager@@QAEPAVaudHead@@H@Z
    0x5A12E0 | public: int __thiscall audManager::AddControl(enum audManager::AUDTYPE,class audControl *) | ?AddControl@audManager@@QAEHW4AUDTYPE@1@PAVaudControl@@@Z
    0x5A1380 | public: bool __thiscall audManager::RemoveControl(enum audManager::AUDTYPE,class audControl *) | ?RemoveControl@audManager@@QAE_NW4AUDTYPE@1@PAVaudControl@@@Z
    0x5A1430 | public: bool __thiscall audManager::MoveToActive(enum audManager::AUDTYPE,class audControl *) | ?MoveToActive@audManager@@QAE_NW4AUDTYPE@1@PAVaudControl@@@Z
    0x5A1560 | public: bool __thiscall audManager::MoveFromActive(enum audManager::AUDTYPE,class audControl *) | ?MoveFromActive@audManager@@QAE_NW4AUDTYPE@1@PAVaudControl@@@Z
    0x5A15F0 | public: bool __thiscall audManager::MoveActiveToTop(enum audManager::AUDTYPE,class audControl *) | ?MoveActiveToTop@audManager@@QAE_NW4AUDTYPE@1@PAVaudControl@@@Z
    0x5A16B0 | public: bool __thiscall audManager::MoveActiveToBottom(enum audManager::AUDTYPE,class audControl *) | ?MoveActiveToBottom@audManager@@QAE_NW4AUDTYPE@1@PAVaudControl@@@Z
    0x5A1730 | public: bool __thiscall audManager::StopAllSounds(enum audManager::AUDTYPE) | ?StopAllSounds@audManager@@QAE_NW4AUDTYPE@1@@Z
    0x5A1810 | public: void __thiscall audManager::FreeAndDestroyAllSounds(void) | ?FreeAndDestroyAllSounds@audManager@@QAEXXZ
    0x5A18E0 | public: int __thiscall audManager::CountSounds(enum audManager::AUDTYPE) | ?CountSounds@audManager@@QAEHW4AUDTYPE@1@@Z
    0x5A1950 | public: int __thiscall audManager::CountActiveSounds(enum audManager::AUDTYPE) | ?CountActiveSounds@audManager@@QAEHW4AUDTYPE@1@@Z
    0x5A19C0 | public: void __thiscall audManager::SetVolAllSounds(enum audManager::AUDTYPE,float) | ?SetVolAllSounds@audManager@@QAEXW4AUDTYPE@1@M@Z
    0x5A1AB0 | public: float __thiscall audManager::GetMasterVolume(enum audManager::AUDTYPE) | ?GetMasterVolume@audManager@@QAEMW4AUDTYPE@1@@Z
    0x5A1B10 | public: void __thiscall audManager::SetSoundFlags(enum audManager::SOUNDFLAG,enum audManager::SOUNDFLAG) | ?SetSoundFlags@audManager@@QAEXW4SOUNDFLAG@1@0@Z
    0x5A1B40 | public: bool __thiscall audManager::IsSoundFlags(enum audManager::SOUNDFLAG) | ?IsSoundFlags@audManager@@QAE_NW4SOUNDFLAG@1@@Z
    0x5A1B60 | public: void __thiscall audManager::SetMaxConcurrent(enum audManager::AUDTYPE,int) | ?SetMaxConcurrent@audManager@@QAEXW4AUDTYPE@1@H@Z
    0x5A1BC0 | public: class audControl * __thiscall audManager::GetControlListPtr(enum audManager::AUDTYPE) | ?GetControlListPtr@audManager@@QAEPAVaudControl@@W4AUDTYPE@1@@Z
    0x5A1C20 | public: class audControl * __thiscall audManager::GetActiveControlListPtr(enum audManager::AUDTYPE) | ?GetActiveControlListPtr@audManager@@QAEPAVaudControl@@W4AUDTYPE@1@@Z
    0x5A1C80 | public: class audControl * __thiscall audManager::AllocControl(enum audManager::AUDTYPE) | ?AllocControl@audManager@@QAEPAVaudControl@@W4AUDTYPE@1@@Z
    0x5A1D20 | public: class audTimeNode * __thiscall audManager::AllocTimeNode(void) | ?AllocTimeNode@audManager@@QAEPAVaudTimeNode@@XZ
    0x5A1DA0 | public: class audStream * __thiscall audManager::AllocStreamNode(void) | ?AllocStreamNode@audManager@@QAEPAVaudStream@@XZ
    0x5A1E00 | public: class audHead * __thiscall audManager::AllocHeadNode(void) | ?AllocHeadNode@audManager@@QAEPAVaudHead@@XZ
    0x5A1E60 | public: class audFX * __thiscall audManager::AllocFXNode(void) | ?AllocFXNode@audManager@@QAEPAVaudFX@@XZ
    0x5A1EC0 | public: class audFileSystem * __thiscall audManager::AllocFileNode(void) | ?AllocFileNode@audManager@@QAEPAVaudFileSystem@@XZ
    0x5A1F20 | public: void __thiscall audManager::FreeControl(enum audManager::AUDTYPE,class audControl *) | ?FreeControl@audManager@@QAEXW4AUDTYPE@1@PAVaudControl@@@Z
    0x5A1FA0 | public: void __thiscall audManager::FreeTimeNode(class audTimeNode *) | ?FreeTimeNode@audManager@@QAEXPAVaudTimeNode@@@Z
    0x5A1FF0 | public: void __thiscall audManager::FreeStreamNode(class audStream *) | ?FreeStreamNode@audManager@@QAEXPAVaudStream@@@Z
    0x5A2040 | public: void __thiscall audManager::FreeHeadNode(class audHead *) | ?FreeHeadNode@audManager@@QAEXPAVaudHead@@@Z
    0x5A2090 | public: void __thiscall audManager::FreeFXNode(class audFX *) | ?FreeFXNode@audManager@@QAEXPAVaudFX@@@Z
    0x5A20E0 | public: void __thiscall audManager::FreeFileNode(class audFileSystem *) | ?FreeFileNode@audManager@@QAEXPAVaudFileSystem@@@Z
    0x6B4C24 | int audDebug | ?audDebug@@3HA
*/

#include "hooking.h"
