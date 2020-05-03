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

#include "manager.h"

MenuManager::MenuManager()
{
    unimplemented();
}

MenuManager::~MenuManager()
{
    unimplemented();
}

i32 MenuManager::ActionID(i32 arg1)
{
    return stub<thiscall_t<i32, MenuManager*, i32>>(0x4E59B0, this, arg1);
}

void MenuManager::AddBrackets(class UIIcon* arg1, class UIIcon* arg2, class uiWidget* arg3, f32 arg4, f32 arg5)
{
    return stub<thiscall_t<void, MenuManager*, class UIIcon*, class UIIcon*, class uiWidget*, f32, f32>>(
        0x4E5E90, this, arg1, arg2, arg3, arg4, arg5);
}

i32 MenuManager::AddMenu2(class UIMenu* arg1)
{
    return stub<thiscall_t<i32, MenuManager*, class UIMenu*>>(0x4E5B20, this, arg1);
}

void MenuManager::AddPointer()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E4030, this);
}

void MenuManager::AdjustPopupCard(class UIMenu* arg1)
{
    return stub<thiscall_t<void, MenuManager*, class UIMenu*>>(0x4E5080, this, arg1);
}

void MenuManager::AllocateMenuSwitchAudio()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E5C90, this);
}

void MenuManager::CheckBG(class UIMenu* arg1)
{
    return stub<thiscall_t<void, MenuManager*, class UIMenu*>>(0x4E4F20, this, arg1);
}

void MenuManager::CheckInput()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E5470, this);
}

void MenuManager::ClearAllWidgets()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E37E0, this);
}

void MenuManager::CloseDialog()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E5190, this);
}

i32 MenuManager::CurrentMenuSelected()
{
    return stub<thiscall_t<i32, MenuManager*>>(0x4E5940, this);
}

void MenuManager::DeclareLastDrawn(class asNode* arg1)
{
    return stub<thiscall_t<void, MenuManager*, class asNode*>>(0x4E53D0, this, arg1);
}

void MenuManager::DeleteMenu(class UIMenu* arg1)
{
    return stub<thiscall_t<void, MenuManager*, class UIMenu*>>(0x4E5B80, this, arg1);
}

void MenuManager::Disable(i32 arg1)
{
    return stub<thiscall_t<void, MenuManager*, i32>>(0x4E5230, this, arg1);
}

void MenuManager::DisableNavBar()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E5290, this);
}

void MenuManager::DisablePU()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E50D0, this);
}

void MenuManager::Enable(i32 arg1)
{
    return stub<thiscall_t<void, MenuManager*, i32>>(0x4E51C0, this, arg1);
}

void MenuManager::EnableNavBar()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E5270, this);
}

void MenuManager::EnablePU()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E5010, this);
}

i32 MenuManager::FindMenu(i32 arg1)
{
    return stub<thiscall_t<i32, MenuManager*, i32>>(0x4E5900, this, arg1);
}

void MenuManager::Flush()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E5440, this);
}

void MenuManager::ForceCurrentFocus()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E59F0, this);
}

char* MenuManager::GetControllerName(i32 arg1)
{
    return stub<thiscall_t<char*, MenuManager*, i32>>(0x4E4C30, this, arg1);
}

class UIMenu* MenuManager::GetCurrentMenu()
{
    return stub<thiscall_t<class UIMenu*, MenuManager*>>(0x4E58D0, this);
}

class Vector4& MenuManager::GetFGColor(i32 arg1)
{
    return stub<thiscall_t<class Vector4&, MenuManager*, i32>>(0x4E4DA0, this, arg1);
}

void* MenuManager::GetFont(i32 arg1)
{
    return stub<thiscall_t<void*, MenuManager*, i32>>(0x4E4CD0, this, arg1);
}

i32 MenuManager::GetPreviousMenu()
{
    return stub<thiscall_t<i32, MenuManager*>>(0x4E5B00, this);
}

void MenuManager::GetScale(f32& arg1, f32& arg2, f32& arg3, f32& arg4)
{
    return stub<thiscall_t<void, MenuManager*, f32&, f32&, f32&, f32&>>(0x4E36F0, this, arg1, arg2, arg3, arg4);
}

void MenuManager::Help()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E5F70, this);
}

void MenuManager::Init(i32 arg1, i32 arg2, char* arg3)
{
    return stub<thiscall_t<void, MenuManager*, i32, i32, char*>>(0x4E3820, this, arg1, arg2, arg3);
}

void MenuManager::Init(class asCamera* arg1, i32 arg2, i32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7)
{
    return stub<thiscall_t<void, MenuManager*, class asCamera*, i32, i32, f32, f32, f32, f32>>(
        0x4E3B10, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void MenuManager::InitCommonStuff(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, MenuManager*, i32, i32>>(0x4E3D30, this, arg1, arg2);
}

void MenuManager::InitGlobalStrings()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E4040, this);
}

void MenuManager::Kill()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E52A0, this);
}

void MenuManager::LoadRaceNames()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E48A0, this);
}

i32 MenuManager::MenuState(i32 arg1)
{
    return stub<thiscall_t<i32, MenuManager*, i32>>(0x4E5960, this, arg1);
}

class uiWidget* MenuManager::MouseAction(i32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<class uiWidget*, MenuManager*, i32, f32, f32>>(0x4E3760, this, arg1, arg2, arg3);
}

void MenuManager::NotifyMouseSelect(class UIMenu* arg1)
{
    return stub<thiscall_t<void, MenuManager*, class UIMenu*>>(0x4E5890, this, arg1);
}

void MenuManager::OpenDialog(i32 arg1)
{
    return stub<thiscall_t<void, MenuManager*, i32>>(0x4E5110, this, arg1);
}

void MenuManager::PlayRecordsSound()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E5E30, this);
}

void MenuManager::PlayReplaySound()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E5E60, this);
}

void MenuManager::PlaySound(i32 arg1)
{
    return stub<thiscall_t<void, MenuManager*, i32>>(0x4E5320, this, arg1);
}

void MenuManager::RegisterWidgetFocus(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, class uiWidget* arg6)
{
    return stub<thiscall_t<void, MenuManager*, i32, f32, f32, f32, f32, class uiWidget*>>(
        0x4E5570, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void MenuManager::ResChange(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, MenuManager*, i32, i32>>(0x4E53E0, this, arg1, arg2);
}

i32 MenuManager::ScanGlobalKeys(i32 arg1)
{
    return stub<thiscall_t<i32, MenuManager*, i32>>(0x4E55D0, this, arg1);
}

void MenuManager::SetBackgroundImage(char* arg1)
{
    return stub<thiscall_t<void, MenuManager*, char*>>(0x4E4FA0, this, arg1);
}

void MenuManager::SetDefaultBackgroundImage(char* arg1)
{
    return stub<thiscall_t<void, MenuManager*, char*>>(0x4E4F40, this, arg1);
}

void MenuManager::SetFocus(class UIMenu* arg1)
{
    return stub<thiscall_t<void, MenuManager*, class UIMenu*>>(0x4E5A20, this, arg1);
}

void MenuManager::SetPreviousMenu(i32 arg1)
{
    return stub<thiscall_t<void, MenuManager*, i32>>(0x4E5AD0, this, arg1);
}

i32 MenuManager::Switch(i32 arg1)
{
    return stub<thiscall_t<i32, MenuManager*, i32>>(0x4E5A30, this, arg1);
}

void MenuManager::SwitchFocus(class UIMenu* arg1)
{
    return stub<thiscall_t<void, MenuManager*, class UIMenu*>>(0x4E5840, this, arg1);
}

void MenuManager::ToggleFocus(i32 arg1)
{
    return stub<thiscall_t<void, MenuManager*, i32>>(0x4E54F0, this, arg1);
}

void MenuManager::TogglePU()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E4FF0, this);
}

void MenuManager::Update()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E5410, this);
}

void MenuManager::PlayMenuSwitchSound()
{
    return stub<thiscall_t<void, MenuManager*>>(0x4E5BE0, this);
}

define_dummy_symbol(mmwidget_manager);
