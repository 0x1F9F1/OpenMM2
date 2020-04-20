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

class MenuManager : asNode
{
public:
    // MenuManager::`vftable' @ 0x5B3288

    // 0x4E2DF0 | ??0MenuManager@@QAE@XZ
    inline MenuManager()
    {
        stub<member_func_t<void, MenuManager>>(0x4E2DF0, this);
    }

    // 0x4E36F0 | ?GetScale@MenuManager@@QAEXAAM000@Z
    inline void GetScale(float& arg1, float& arg2, float& arg3, float& arg4)
    {
        return stub<member_func_t<void, MenuManager, float&, float&, float&, float&>>(
            0x4E36F0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4E3760 | ?MouseAction@MenuManager@@QAEPAVuiWidget@@HMM@Z
    inline class uiWidget* MouseAction(int32_t arg1, float arg2, float arg3)
    {
        return stub<member_func_t<class uiWidget*, MenuManager, int32_t, float, float>>(
            0x4E3760, this, arg1, arg2, arg3);
    }

    // 0x4E37E0 | ?ClearAllWidgets@MenuManager@@QAEXXZ
    inline void ClearAllWidgets()
    {
        return stub<member_func_t<void, MenuManager>>(0x4E37E0, this);
    }

    // 0x4E3820 | ?Init@MenuManager@@QAEXHHPAD@Z
    inline void Init(int32_t arg1, int32_t arg2, char* arg3)
    {
        return stub<member_func_t<void, MenuManager, int32_t, int32_t, char*>>(0x4E3820, this, arg1, arg2, arg3);
    }

    // 0x4E3B10 | ?Init@MenuManager@@QAEXPAVasCamera@@HHMMMM@Z
    inline void Init(class asCamera* arg1, int32_t arg2, int32_t arg3, float arg4, float arg5, float arg6, float arg7)
    {
        return stub<member_func_t<void, MenuManager, class asCamera*, int32_t, int32_t, float, float, float, float>>(
            0x4E3B10, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4E3D30 | ?InitCommonStuff@MenuManager@@QAEXHH@Z
    inline void InitCommonStuff(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, MenuManager, int32_t, int32_t>>(0x4E3D30, this, arg1, arg2);
    }

    // 0x4E4030 | ?AddPointer@MenuManager@@QAEXXZ
    inline void AddPointer()
    {
        return stub<member_func_t<void, MenuManager>>(0x4E4030, this);
    }

    // 0x4E4040 | ?InitGlobalStrings@MenuManager@@QAEXXZ
    inline void InitGlobalStrings()
    {
        return stub<member_func_t<void, MenuManager>>(0x4E4040, this);
    }

    // 0x4E48A0 | ?LoadRaceNames@MenuManager@@QAEXXZ
    inline void LoadRaceNames()
    {
        return stub<member_func_t<void, MenuManager>>(0x4E48A0, this);
    }

    // 0x4E4C30 | ?GetControllerName@MenuManager@@QAEPADH@Z
    inline char* GetControllerName(int32_t arg1)
    {
        return stub<member_func_t<char*, MenuManager, int32_t>>(0x4E4C30, this, arg1);
    }

    // 0x4E4CD0 | ?GetFont@MenuManager@@QAEPAXH@Z
    inline void* GetFont(int32_t arg1)
    {
        return stub<member_func_t<void*, MenuManager, int32_t>>(0x4E4CD0, this, arg1);
    }

    // 0x4E4DA0 | ?GetFGColor@MenuManager@@QAEAAVVector4@@H@Z
    inline class Vector4& GetFGColor(int32_t arg1)
    {
        return stub<member_func_t<class Vector4&, MenuManager, int32_t>>(0x4E4DA0, this, arg1);
    }

    // 0x4E4F20 | ?CheckBG@MenuManager@@QAEXPAVUIMenu@@@Z
    inline void CheckBG(class UIMenu* arg1)
    {
        return stub<member_func_t<void, MenuManager, class UIMenu*>>(0x4E4F20, this, arg1);
    }

    // 0x4E4F40 | ?SetDefaultBackgroundImage@MenuManager@@QAEXPAD@Z
    inline void SetDefaultBackgroundImage(char* arg1)
    {
        return stub<member_func_t<void, MenuManager, char*>>(0x4E4F40, this, arg1);
    }

    // 0x4E4FA0 | ?SetBackgroundImage@MenuManager@@QAEXPAD@Z
    inline void SetBackgroundImage(char* arg1)
    {
        return stub<member_func_t<void, MenuManager, char*>>(0x4E4FA0, this, arg1);
    }

    // 0x4E4FF0 | ?TogglePU@MenuManager@@QAEXXZ
    inline void TogglePU()
    {
        return stub<member_func_t<void, MenuManager>>(0x4E4FF0, this);
    }

    // 0x4E5010 | ?EnablePU@MenuManager@@QAEXXZ
    inline void EnablePU()
    {
        return stub<member_func_t<void, MenuManager>>(0x4E5010, this);
    }

    // 0x4E5080 | ?AdjustPopupCard@MenuManager@@QAEXPAVUIMenu@@@Z
    inline void AdjustPopupCard(class UIMenu* arg1)
    {
        return stub<member_func_t<void, MenuManager, class UIMenu*>>(0x4E5080, this, arg1);
    }

    // 0x4E50D0 | ?DisablePU@MenuManager@@QAEXXZ
    inline void DisablePU()
    {
        return stub<member_func_t<void, MenuManager>>(0x4E50D0, this);
    }

    // 0x4E5110 | ?OpenDialog@MenuManager@@QAEXH@Z
    inline void OpenDialog(int32_t arg1)
    {
        return stub<member_func_t<void, MenuManager, int32_t>>(0x4E5110, this, arg1);
    }

    // 0x4E5190 | ?CloseDialog@MenuManager@@QAEXXZ
    inline void CloseDialog()
    {
        return stub<member_func_t<void, MenuManager>>(0x4E5190, this);
    }

    // 0x4E51C0 | ?Enable@MenuManager@@QAEXH@Z
    inline void Enable(int32_t arg1)
    {
        return stub<member_func_t<void, MenuManager, int32_t>>(0x4E51C0, this, arg1);
    }

    // 0x4E5230 | ?Disable@MenuManager@@QAEXH@Z
    inline void Disable(int32_t arg1)
    {
        return stub<member_func_t<void, MenuManager, int32_t>>(0x4E5230, this, arg1);
    }

    // 0x4E5270 | ?EnableNavBar@MenuManager@@QAEXXZ
    inline void EnableNavBar()
    {
        return stub<member_func_t<void, MenuManager>>(0x4E5270, this);
    }

    // 0x4E5290 | ?DisableNavBar@MenuManager@@QAEXXZ
    inline void DisableNavBar()
    {
        return stub<member_func_t<void, MenuManager>>(0x4E5290, this);
    }

    // 0x4E52A0 | ?Kill@MenuManager@@QAEXXZ
    inline void Kill()
    {
        return stub<member_func_t<void, MenuManager>>(0x4E52A0, this);
    }

    // 0x4E5320 | ?PlaySound@MenuManager@@QAEXH@Z
    inline void PlaySound(int32_t arg1)
    {
        return stub<member_func_t<void, MenuManager, int32_t>>(0x4E5320, this, arg1);
    }

    // 0x4E53D0 | ?DeclareLastDrawn@MenuManager@@QAEXPAVasNode@@@Z
    inline void DeclareLastDrawn(class asNode* arg1)
    {
        return stub<member_func_t<void, MenuManager, class asNode*>>(0x4E53D0, this, arg1);
    }

    // 0x4E5440 | ?Flush@MenuManager@@QAEXXZ
    inline void Flush()
    {
        return stub<member_func_t<void, MenuManager>>(0x4E5440, this);
    }

    // 0x4E5470 | ?CheckInput@MenuManager@@QAEXXZ
    inline void CheckInput()
    {
        return stub<member_func_t<void, MenuManager>>(0x4E5470, this);
    }

    // 0x4E54F0 | ?ToggleFocus@MenuManager@@QAEXH@Z
    inline void ToggleFocus(int32_t arg1)
    {
        return stub<member_func_t<void, MenuManager, int32_t>>(0x4E54F0, this, arg1);
    }

    // 0x4E5570 | ?RegisterWidgetFocus@MenuManager@@QAEXHMMMMPAVuiWidget@@@Z
    inline void RegisterWidgetFocus(int32_t arg1, float arg2, float arg3, float arg4, float arg5, class uiWidget* arg6)
    {
        return stub<member_func_t<void, MenuManager, int32_t, float, float, float, float, class uiWidget*>>(
            0x4E5570, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4E55D0 | ?ScanGlobalKeys@MenuManager@@QAEHH@Z
    inline int32_t ScanGlobalKeys(int32_t arg1)
    {
        return stub<member_func_t<int32_t, MenuManager, int32_t>>(0x4E55D0, this, arg1);
    }

    // 0x4E5840 | ?SwitchFocus@MenuManager@@QAEXPAVUIMenu@@@Z
    inline void SwitchFocus(class UIMenu* arg1)
    {
        return stub<member_func_t<void, MenuManager, class UIMenu*>>(0x4E5840, this, arg1);
    }

    // 0x4E5890 | ?NotifyMouseSelect@MenuManager@@QAEXPAVUIMenu@@@Z
    inline void NotifyMouseSelect(class UIMenu* arg1)
    {
        return stub<member_func_t<void, MenuManager, class UIMenu*>>(0x4E5890, this, arg1);
    }

    // 0x4E58D0 | ?GetCurrentMenu@MenuManager@@QAEPAVUIMenu@@XZ
    inline class UIMenu* GetCurrentMenu()
    {
        return stub<member_func_t<class UIMenu*, MenuManager>>(0x4E58D0, this);
    }

    // 0x4E5900 | ?FindMenu@MenuManager@@QAEHH@Z
    inline int32_t FindMenu(int32_t arg1)
    {
        return stub<member_func_t<int32_t, MenuManager, int32_t>>(0x4E5900, this, arg1);
    }

    // 0x4E5940 | ?CurrentMenuSelected@MenuManager@@QAEHXZ
    inline int32_t CurrentMenuSelected()
    {
        return stub<member_func_t<int32_t, MenuManager>>(0x4E5940, this);
    }

    // 0x4E5960 | ?MenuState@MenuManager@@QAEHH@Z
    inline int32_t MenuState(int32_t arg1)
    {
        return stub<member_func_t<int32_t, MenuManager, int32_t>>(0x4E5960, this, arg1);
    }

    // 0x4E59B0 | ?ActionID@MenuManager@@QAEHH@Z
    inline int32_t ActionID(int32_t arg1)
    {
        return stub<member_func_t<int32_t, MenuManager, int32_t>>(0x4E59B0, this, arg1);
    }

    // 0x4E59F0 | ?ForceCurrentFocus@MenuManager@@QAEXXZ
    inline void ForceCurrentFocus()
    {
        return stub<member_func_t<void, MenuManager>>(0x4E59F0, this);
    }

    // 0x4E5A20 | ?SetFocus@MenuManager@@QAEXPAVUIMenu@@@Z
    inline void SetFocus(class UIMenu* arg1)
    {
        return stub<member_func_t<void, MenuManager, class UIMenu*>>(0x4E5A20, this, arg1);
    }

    // 0x4E5A30 | ?Switch@MenuManager@@QAEHH@Z
    inline int32_t Switch(int32_t arg1)
    {
        return stub<member_func_t<int32_t, MenuManager, int32_t>>(0x4E5A30, this, arg1);
    }

    // 0x4E5AD0 | ?SetPreviousMenu@MenuManager@@QAEXH@Z
    inline void SetPreviousMenu(int32_t arg1)
    {
        return stub<member_func_t<void, MenuManager, int32_t>>(0x4E5AD0, this, arg1);
    }

    // 0x4E5B00 | ?GetPreviousMenu@MenuManager@@QAEHXZ
    inline int32_t GetPreviousMenu()
    {
        return stub<member_func_t<int32_t, MenuManager>>(0x4E5B00, this);
    }

    // 0x4E5B20 | ?AddMenu2@MenuManager@@QAEHPAVUIMenu@@@Z
    inline int32_t AddMenu2(class UIMenu* arg1)
    {
        return stub<member_func_t<int32_t, MenuManager, class UIMenu*>>(0x4E5B20, this, arg1);
    }

    // 0x4E5B80 | ?DeleteMenu@MenuManager@@QAEXPAVUIMenu@@@Z
    inline void DeleteMenu(class UIMenu* arg1)
    {
        return stub<member_func_t<void, MenuManager, class UIMenu*>>(0x4E5B80, this, arg1);
    }

    // 0x4E5BE0 | ?PlayMenuSwitchSound@MenuManager@@AAEXXZ
    inline void PlayMenuSwitchSound()
    {
        return stub<member_func_t<void, MenuManager>>(0x4E5BE0, this);
    }

    // 0x4E5C90 | ?AllocateMenuSwitchAudio@MenuManager@@QAEXXZ
    inline void AllocateMenuSwitchAudio()
    {
        return stub<member_func_t<void, MenuManager>>(0x4E5C90, this);
    }

    // 0x4E5E30 | ?PlayRecordsSound@MenuManager@@QAEXXZ
    inline void PlayRecordsSound()
    {
        return stub<member_func_t<void, MenuManager>>(0x4E5E30, this);
    }

    // 0x4E5E60 | ?PlayReplaySound@MenuManager@@QAEXXZ
    inline void PlayReplaySound()
    {
        return stub<member_func_t<void, MenuManager>>(0x4E5E60, this);
    }

    // 0x4E5E90 | ?AddBrackets@MenuManager@@QAEXPAVUIIcon@@0PAVuiWidget@@MM@Z
    inline void AddBrackets(class UIIcon* arg1, class UIIcon* arg2, class uiWidget* arg3, float arg4, float arg5)
    {
        return stub<member_func_t<void, MenuManager, class UIIcon*, class UIIcon*, class uiWidget*, float, float>>(
            0x4E5E90, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4E5F70 | ?Help@MenuManager@@QAEXXZ
    inline void Help()
    {
        return stub<member_func_t<void, MenuManager>>(0x4E5F70, this);
    }

    // 0x6B012C | ?Instance@MenuManager@@2PAV1@A
    inline extern_var(0x6B012C, class MenuManager*, Instance);

    // 0x4E3490 | ??1MenuManager@@UAE@XZ
    inline ~MenuManager() override
    {
        stub<member_func_t<void, MenuManager>>(0x4E3490, this);
    }

    // 0x4E5410 | ?Update@MenuManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, MenuManager>>(0x4E5410, this);
    }

    // 0x4E53E0 | ?ResChange@MenuManager@@UAEXHH@Z
    inline void ResChange(int32_t arg1, int32_t arg2) override
    {
        return stub<member_func_t<void, MenuManager, int32_t, int32_t>>(0x4E53E0, this, arg1, arg2);
    }
};
