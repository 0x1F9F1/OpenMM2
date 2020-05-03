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
    mmwidget:manager

    0x4E2DF0 | public: __thiscall MenuManager::MenuManager(void) | ??0MenuManager@@QAE@XZ
    0x4E3490 | public: virtual __thiscall MenuManager::~MenuManager(void) | ??1MenuManager@@UAE@XZ
    0x4E36F0 | public: void __thiscall MenuManager::GetScale(float &,float &,float &,float &) | ?GetScale@MenuManager@@QAEXAAM000@Z
    0x4E3760 | public: class uiWidget * __thiscall MenuManager::MouseAction(int,float,float) | ?MouseAction@MenuManager@@QAEPAVuiWidget@@HMM@Z
    0x4E37E0 | public: void __thiscall MenuManager::ClearAllWidgets(void) | ?ClearAllWidgets@MenuManager@@QAEXXZ
    0x4E3820 | public: void __thiscall MenuManager::Init(int,int,char *) | ?Init@MenuManager@@QAEXHHPAD@Z
    0x4E3B10 | public: void __thiscall MenuManager::Init(class asCamera *,int,int,float,float,float,float) | ?Init@MenuManager@@QAEXPAVasCamera@@HHMMMM@Z
    0x4E3D30 | public: void __thiscall MenuManager::InitCommonStuff(int,int) | ?InitCommonStuff@MenuManager@@QAEXHH@Z
    0x4E4030 | public: void __thiscall MenuManager::AddPointer(void) | ?AddPointer@MenuManager@@QAEXXZ
    0x4E4040 | public: void __thiscall MenuManager::InitGlobalStrings(void) | ?InitGlobalStrings@MenuManager@@QAEXXZ
    0x4E48A0 | public: void __thiscall MenuManager::LoadRaceNames(void) | ?LoadRaceNames@MenuManager@@QAEXXZ
    0x4E4C30 | public: char * __thiscall MenuManager::GetControllerName(int) | ?GetControllerName@MenuManager@@QAEPADH@Z
    0x4E4CD0 | public: void * __thiscall MenuManager::GetFont(int) | ?GetFont@MenuManager@@QAEPAXH@Z
    0x4E4DA0 | public: class Vector4 & __thiscall MenuManager::GetFGColor(int) | ?GetFGColor@MenuManager@@QAEAAVVector4@@H@Z
    0x4E4F20 | public: void __thiscall MenuManager::CheckBG(class UIMenu *) | ?CheckBG@MenuManager@@QAEXPAVUIMenu@@@Z
    0x4E4F40 | public: void __thiscall MenuManager::SetDefaultBackgroundImage(char *) | ?SetDefaultBackgroundImage@MenuManager@@QAEXPAD@Z
    0x4E4FA0 | public: void __thiscall MenuManager::SetBackgroundImage(char *) | ?SetBackgroundImage@MenuManager@@QAEXPAD@Z
    0x4E4FF0 | public: void __thiscall MenuManager::TogglePU(void) | ?TogglePU@MenuManager@@QAEXXZ
    0x4E5010 | public: void __thiscall MenuManager::EnablePU(void) | ?EnablePU@MenuManager@@QAEXXZ
    0x4E5080 | public: void __thiscall MenuManager::AdjustPopupCard(class UIMenu *) | ?AdjustPopupCard@MenuManager@@QAEXPAVUIMenu@@@Z
    0x4E50D0 | public: void __thiscall MenuManager::DisablePU(void) | ?DisablePU@MenuManager@@QAEXXZ
    0x4E5110 | public: void __thiscall MenuManager::OpenDialog(int) | ?OpenDialog@MenuManager@@QAEXH@Z
    0x4E5190 | public: void __thiscall MenuManager::CloseDialog(void) | ?CloseDialog@MenuManager@@QAEXXZ
    0x4E51C0 | public: void __thiscall MenuManager::Enable(int) | ?Enable@MenuManager@@QAEXH@Z
    0x4E5230 | public: void __thiscall MenuManager::Disable(int) | ?Disable@MenuManager@@QAEXH@Z
    0x4E5270 | public: void __thiscall MenuManager::EnableNavBar(void) | ?EnableNavBar@MenuManager@@QAEXXZ
    0x4E5290 | public: void __thiscall MenuManager::DisableNavBar(void) | ?DisableNavBar@MenuManager@@QAEXXZ
    0x4E52A0 | public: void __thiscall MenuManager::Kill(void) | ?Kill@MenuManager@@QAEXXZ
    0x4E5320 | public: void __thiscall MenuManager::PlaySound(int) | ?PlaySound@MenuManager@@QAEXH@Z
    0x4E53D0 | public: void __thiscall MenuManager::DeclareLastDrawn(class asNode *) | ?DeclareLastDrawn@MenuManager@@QAEXPAVasNode@@@Z
    0x4E53E0 | public: virtual void __thiscall MenuManager::ResChange(int,int) | ?ResChange@MenuManager@@UAEXHH@Z
    0x4E5410 | public: virtual void __thiscall MenuManager::Update(void) | ?Update@MenuManager@@UAEXXZ
    0x4E5440 | public: void __thiscall MenuManager::Flush(void) | ?Flush@MenuManager@@QAEXXZ
    0x4E5470 | public: void __thiscall MenuManager::CheckInput(void) | ?CheckInput@MenuManager@@QAEXXZ
    0x4E54F0 | public: void __thiscall MenuManager::ToggleFocus(int) | ?ToggleFocus@MenuManager@@QAEXH@Z
    0x4E5570 | public: void __thiscall MenuManager::RegisterWidgetFocus(int,float,float,float,float,class uiWidget *) | ?RegisterWidgetFocus@MenuManager@@QAEXHMMMMPAVuiWidget@@@Z
    0x4E55D0 | public: int __thiscall MenuManager::ScanGlobalKeys(int) | ?ScanGlobalKeys@MenuManager@@QAEHH@Z
    0x4E5840 | public: void __thiscall MenuManager::SwitchFocus(class UIMenu *) | ?SwitchFocus@MenuManager@@QAEXPAVUIMenu@@@Z
    0x4E5890 | public: void __thiscall MenuManager::NotifyMouseSelect(class UIMenu *) | ?NotifyMouseSelect@MenuManager@@QAEXPAVUIMenu@@@Z
    public: void __thiscall MenuManager::AddWidgets(class bkBank *) | ?AddWidgets@MenuManager@@QAEXPAVbkBank@@@Z
    0x4E58D0 | public: class UIMenu * __thiscall MenuManager::GetCurrentMenu(void) | ?GetCurrentMenu@MenuManager@@QAEPAVUIMenu@@XZ
    0x4E5900 | public: int __thiscall MenuManager::FindMenu(int) | ?FindMenu@MenuManager@@QAEHH@Z
    0x4E5940 | public: int __thiscall MenuManager::CurrentMenuSelected(void) | ?CurrentMenuSelected@MenuManager@@QAEHXZ
    0x4E5960 | public: int __thiscall MenuManager::MenuState(int) | ?MenuState@MenuManager@@QAEHH@Z
    0x4E59B0 | public: int __thiscall MenuManager::ActionID(int) | ?ActionID@MenuManager@@QAEHH@Z
    0x4E59F0 | public: void __thiscall MenuManager::ForceCurrentFocus(void) | ?ForceCurrentFocus@MenuManager@@QAEXXZ
    0x4E5A20 | public: void __thiscall MenuManager::SetFocus(class UIMenu *) | ?SetFocus@MenuManager@@QAEXPAVUIMenu@@@Z
    0x4E5A30 | public: int __thiscall MenuManager::Switch(int) | ?Switch@MenuManager@@QAEHH@Z
    0x4E5AD0 | public: void __thiscall MenuManager::SetPreviousMenu(int) | ?SetPreviousMenu@MenuManager@@QAEXH@Z
    0x4E5B00 | public: int __thiscall MenuManager::GetPreviousMenu(void) | ?GetPreviousMenu@MenuManager@@QAEHXZ
    0x4E5B20 | public: int __thiscall MenuManager::AddMenu2(class UIMenu *) | ?AddMenu2@MenuManager@@QAEHPAVUIMenu@@@Z
    0x4E5B80 | public: void __thiscall MenuManager::DeleteMenu(class UIMenu *) | ?DeleteMenu@MenuManager@@QAEXPAVUIMenu@@@Z
    0x4E5BE0 | private: void __thiscall MenuManager::PlayMenuSwitchSound(void) | ?PlayMenuSwitchSound@MenuManager@@AAEXXZ
    0x4E5C90 | public: void __thiscall MenuManager::AllocateMenuSwitchAudio(void) | ?AllocateMenuSwitchAudio@MenuManager@@QAEXXZ
    0x4E5E30 | public: void __thiscall MenuManager::PlayRecordsSound(void) | ?PlayRecordsSound@MenuManager@@QAEXXZ
    0x4E5E60 | public: void __thiscall MenuManager::PlayReplaySound(void) | ?PlayReplaySound@MenuManager@@QAEXXZ
    0x4E5E90 | public: void __thiscall MenuManager::AddBrackets(class UIIcon *,class UIIcon *,class uiWidget *,float,float) | ?AddBrackets@MenuManager@@QAEXPAVUIIcon@@0PAVuiWidget@@MM@Z
    0x4E5F70 | public: void __thiscall MenuManager::Help(void) | ?Help@MenuManager@@QAEXXZ
    public: virtual void * __thiscall MenuManager::`vector deleting destructor'(unsigned int) | ??_EMenuManager@@UAEPAXI@Z
    0x4E6200 | public: virtual void * __thiscall MenuManager::`scalar deleting destructor'(unsigned int) | ??_GMenuManager@@UAEPAXI@Z
    0x5B3288 | const MenuManager::`vftable' | ??_7MenuManager@@6B@
    float DELAYTTIME | ?DELAYTTIME@@3MA
    0x6B012C | public: static class MenuManager * MenuManager::Instance | ?Instance@MenuManager@@2PAV1@A
*/

class MenuManager : public asNode
{
    // const MenuManager::`vftable' @ 0x5B3288

public:
    // 0x4E2DF0 | ??0MenuManager@@QAE@XZ
    MenuManager();

    // 0x4E6200 | ??_GMenuManager@@UAEPAXI@Z
    // 0x4E3490 | ??1MenuManager@@UAE@XZ
    ~MenuManager() override;

    // 0x4E59B0 | ?ActionID@MenuManager@@QAEHH@Z
    i32 ActionID(i32 arg1);

    // 0x4E5E90 | ?AddBrackets@MenuManager@@QAEXPAVUIIcon@@0PAVuiWidget@@MM@Z
    void AddBrackets(class UIIcon* arg1, class UIIcon* arg2, class uiWidget* arg3, f32 arg4, f32 arg5);

    // 0x4E5B20 | ?AddMenu2@MenuManager@@QAEHPAVUIMenu@@@Z
    i32 AddMenu2(class UIMenu* arg1);

    // 0x4E4030 | ?AddPointer@MenuManager@@QAEXXZ
    void AddPointer();

    // 0x4E5080 | ?AdjustPopupCard@MenuManager@@QAEXPAVUIMenu@@@Z
    void AdjustPopupCard(class UIMenu* arg1);

    // 0x4E5C90 | ?AllocateMenuSwitchAudio@MenuManager@@QAEXXZ
    void AllocateMenuSwitchAudio();

    // 0x4E4F20 | ?CheckBG@MenuManager@@QAEXPAVUIMenu@@@Z
    void CheckBG(class UIMenu* arg1);

    // 0x4E5470 | ?CheckInput@MenuManager@@QAEXXZ
    void CheckInput();

    // 0x4E37E0 | ?ClearAllWidgets@MenuManager@@QAEXXZ
    void ClearAllWidgets();

    // 0x4E5190 | ?CloseDialog@MenuManager@@QAEXXZ
    void CloseDialog();

    // 0x4E5940 | ?CurrentMenuSelected@MenuManager@@QAEHXZ
    i32 CurrentMenuSelected();

    // 0x4E53D0 | ?DeclareLastDrawn@MenuManager@@QAEXPAVasNode@@@Z
    void DeclareLastDrawn(class asNode* arg1);

    // 0x4E5B80 | ?DeleteMenu@MenuManager@@QAEXPAVUIMenu@@@Z
    void DeleteMenu(class UIMenu* arg1);

    // 0x4E5230 | ?Disable@MenuManager@@QAEXH@Z
    void Disable(i32 arg1);

    // 0x4E5290 | ?DisableNavBar@MenuManager@@QAEXXZ
    void DisableNavBar();

    // 0x4E50D0 | ?DisablePU@MenuManager@@QAEXXZ
    void DisablePU();

    // 0x4E51C0 | ?Enable@MenuManager@@QAEXH@Z
    void Enable(i32 arg1);

    // 0x4E5270 | ?EnableNavBar@MenuManager@@QAEXXZ
    void EnableNavBar();

    // 0x4E5010 | ?EnablePU@MenuManager@@QAEXXZ
    void EnablePU();

    // 0x4E5900 | ?FindMenu@MenuManager@@QAEHH@Z
    i32 FindMenu(i32 arg1);

    // 0x4E5440 | ?Flush@MenuManager@@QAEXXZ
    void Flush();

    // 0x4E59F0 | ?ForceCurrentFocus@MenuManager@@QAEXXZ
    void ForceCurrentFocus();

    // 0x4E4C30 | ?GetControllerName@MenuManager@@QAEPADH@Z
    char* GetControllerName(i32 arg1);

    // 0x4E58D0 | ?GetCurrentMenu@MenuManager@@QAEPAVUIMenu@@XZ
    class UIMenu* GetCurrentMenu();

    // 0x4E4DA0 | ?GetFGColor@MenuManager@@QAEAAVVector4@@H@Z
    class Vector4& GetFGColor(i32 arg1);

    // 0x4E4CD0 | ?GetFont@MenuManager@@QAEPAXH@Z
    void* GetFont(i32 arg1);

    // 0x4E5B00 | ?GetPreviousMenu@MenuManager@@QAEHXZ
    i32 GetPreviousMenu();

    // 0x4E36F0 | ?GetScale@MenuManager@@QAEXAAM000@Z
    void GetScale(f32& arg1, f32& arg2, f32& arg3, f32& arg4);

    // 0x4E5F70 | ?Help@MenuManager@@QAEXXZ
    void Help();

    // 0x4E3820 | ?Init@MenuManager@@QAEXHHPAD@Z
    void Init(i32 arg1, i32 arg2, char* arg3);

    // 0x4E3B10 | ?Init@MenuManager@@QAEXPAVasCamera@@HHMMMM@Z
    void Init(class asCamera* arg1, i32 arg2, i32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7);

    // 0x4E3D30 | ?InitCommonStuff@MenuManager@@QAEXHH@Z
    void InitCommonStuff(i32 arg1, i32 arg2);

    // 0x4E4040 | ?InitGlobalStrings@MenuManager@@QAEXXZ
    void InitGlobalStrings();

    // 0x4E52A0 | ?Kill@MenuManager@@QAEXXZ
    void Kill();

    // 0x4E48A0 | ?LoadRaceNames@MenuManager@@QAEXXZ
    void LoadRaceNames();

    // 0x4E5960 | ?MenuState@MenuManager@@QAEHH@Z
    i32 MenuState(i32 arg1);

    // 0x4E3760 | ?MouseAction@MenuManager@@QAEPAVuiWidget@@HMM@Z
    class uiWidget* MouseAction(i32 arg1, f32 arg2, f32 arg3);

    // 0x4E5890 | ?NotifyMouseSelect@MenuManager@@QAEXPAVUIMenu@@@Z
    void NotifyMouseSelect(class UIMenu* arg1);

    // 0x4E5110 | ?OpenDialog@MenuManager@@QAEXH@Z
    void OpenDialog(i32 arg1);

    // 0x4E5E30 | ?PlayRecordsSound@MenuManager@@QAEXXZ
    void PlayRecordsSound();

    // 0x4E5E60 | ?PlayReplaySound@MenuManager@@QAEXXZ
    void PlayReplaySound();

    // 0x4E5320 | ?PlaySound@MenuManager@@QAEXH@Z
    void PlaySound(i32 arg1);

    // 0x4E5570 | ?RegisterWidgetFocus@MenuManager@@QAEXHMMMMPAVuiWidget@@@Z
    void RegisterWidgetFocus(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, class uiWidget* arg6);

    // 0x4E53E0 | ?ResChange@MenuManager@@UAEXHH@Z
    void ResChange(i32 arg1, i32 arg2) override;

    // 0x4E55D0 | ?ScanGlobalKeys@MenuManager@@QAEHH@Z
    i32 ScanGlobalKeys(i32 arg1);

    // 0x4E4FA0 | ?SetBackgroundImage@MenuManager@@QAEXPAD@Z
    void SetBackgroundImage(char* arg1);

    // 0x4E4F40 | ?SetDefaultBackgroundImage@MenuManager@@QAEXPAD@Z
    void SetDefaultBackgroundImage(char* arg1);

    // 0x4E5A20 | ?SetFocus@MenuManager@@QAEXPAVUIMenu@@@Z
    void SetFocus(class UIMenu* arg1);

    // 0x4E5AD0 | ?SetPreviousMenu@MenuManager@@QAEXH@Z
    void SetPreviousMenu(i32 arg1);

    // 0x4E5A30 | ?Switch@MenuManager@@QAEHH@Z
    i32 Switch(i32 arg1);

    // 0x4E5840 | ?SwitchFocus@MenuManager@@QAEXPAVUIMenu@@@Z
    void SwitchFocus(class UIMenu* arg1);

    // 0x4E54F0 | ?ToggleFocus@MenuManager@@QAEXH@Z
    void ToggleFocus(i32 arg1);

    // 0x4E4FF0 | ?TogglePU@MenuManager@@QAEXXZ
    void TogglePU();

    // 0x4E5410 | ?Update@MenuManager@@UAEXXZ
    void Update() override;

    // 0x6B012C | ?Instance@MenuManager@@2PAV1@A
    static inline extern_var(0x6B012C, class MenuManager*, Instance);

private:
    // 0x4E5BE0 | ?PlayMenuSwitchSound@MenuManager@@AAEXXZ
    void PlayMenuSwitchSound();
};

check_size(MenuManager, 0x150);
