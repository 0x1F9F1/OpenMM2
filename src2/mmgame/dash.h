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
    mmgame:dash

    0x430610 | public: __thiscall mmDashView::mmDashView(void) | ??0mmDashView@@QAE@XZ
    0x4307B0 | public: virtual __thiscall mmDashView::~mmDashView(void) | ??1mmDashView@@UAE@XZ
    0x430890 | public: void __thiscall mmDashView::Init(char *,class mmPlayer *) | ?Init@mmDashView@@QAEXPADPAVmmPlayer@@@Z
    0x430A90 | private: void __thiscall mmDashView::LoadPkg(char *) | ?LoadPkg@mmDashView@@AAEXPAD@Z
    0x430C30 | private: void __thiscall mmDashView::LoadPivotInfo(char *) | ?LoadPivotInfo@mmDashView@@AAEXPAD@Z
    0x430D90 | public: virtual void __thiscall mmDashView::Reset(void) | ?Reset@mmDashView@@UAEXXZ
    0x430DA0 | public: virtual void __thiscall mmDashView::BeforeSave(void) | ?BeforeSave@mmDashView@@UAEXXZ
    0x430E00 | public: virtual void __thiscall mmDashView::AfterLoad(void) | ?AfterLoad@mmDashView@@UAEXXZ
    0x430E60 | public: void __thiscall mmDashView::ActivateUntilTransitionIsOver(void) | ?ActivateUntilTransitionIsOver@mmDashView@@QAEXXZ
    0x430E80 | public: void __thiscall mmDashView::Activate(void) | ?Activate@mmDashView@@QAEXXZ
    0x430EA0 | public: void __thiscall mmDashView::Deactivate(void) | ?Deactivate@mmDashView@@QAEXXZ
    0x430EC0 | public: void __thiscall mmDashView::TempDeactivate(void) | ?TempDeactivate@mmDashView@@QAEXXZ
    0x430ED0 | public: virtual void __thiscall mmDashView::Update(void) | ?Update@mmDashView@@UAEXXZ
    0x430FB0 | public: virtual void __thiscall mmDashView::Cull(void) | ?Cull@mmDashView@@UAEXXZ
    public: void __thiscall mmDashView::AddWidgets(class bkBank *) | ?AddWidgets@mmDashView@@QAEXPAVbkBank@@@Z
    0x4315D0 | private: virtual void __thiscall mmDashView::FileIO(class datParser &) | ?FileIO@mmDashView@@EAEXAAVdatParser@@@Z
    0x4317B0 | public: __thiscall mmExternalView::mmExternalView(void) | ??0mmExternalView@@QAE@XZ
    0x431840 | public: void __thiscall mmExternalView::Init(class mmPlayer *) | ?Init@mmExternalView@@QAEXPAVmmPlayer@@@Z
    0x431880 | public: virtual void __thiscall mmExternalView::ResChange(int,int) | ?ResChange@mmExternalView@@UAEXHH@Z
    0x4319D0 | public: virtual void __thiscall mmExternalView::Reset(void) | ?Reset@mmExternalView@@UAEXXZ
    0x4319E0 | public: virtual void __thiscall mmExternalView::Update(void) | ?Update@mmExternalView@@UAEXXZ
    0x4319F0 | public: virtual void __thiscall mmExternalView::Cull(void) | ?Cull@mmExternalView@@UAEXXZ
    public: void __thiscall mmExternalView::AddWidgets(class bkBank *) | ?AddWidgets@mmExternalView@@QAEXPAVbkBank@@@Z
    0x431B50 | public: virtual void * __thiscall mmDashView::`scalar deleting destructor'(unsigned int) | ??_GmmDashView@@UAEPAXI@Z
    public: virtual void * __thiscall mmDashView::`vector deleting destructor'(unsigned int) | ??_EmmDashView@@UAEPAXI@Z
    0x431B80 | public: virtual __thiscall asLinearCS::~asLinearCS(void) | ??1asLinearCS@@UAE@XZ
    0x431B90 | public: virtual __thiscall RadialGauge::~RadialGauge(void) | ??1RadialGauge@@UAE@XZ
    0x431BE0 | public: virtual void * __thiscall mmExternalView::`scalar deleting destructor'(unsigned int) | ??_GmmExternalView@@UAEPAXI@Z
    public: virtual void * __thiscall mmExternalView::`vector deleting destructor'(unsigned int) | ??_EmmExternalView@@UAEPAXI@Z
    0x431C10 | public: __thiscall mmSlidingGauge::~mmSlidingGauge(void) | ??1mmSlidingGauge@@QAE@XZ
    private: void __thiscall gfxRenderState::CheckSet(bool &,bool) | ?CheckSet@gfxRenderState@@AAEXAA_N_N@Z
    0x431C20 | public: virtual char * __thiscall mmExternalView::GetClassNameA(void) | ?GetClassNameA@mmExternalView@@UAEPADXZ
    0x431C30 | public: virtual char * __thiscall mmDashView::GetClassNameA(void) | ?GetClassNameA@mmDashView@@UAEPADXZ
    0x5B0D78 | const mmDashView::`vftable' | ??_7mmDashView@@6B@
    0x5B0DB0 | const mmExternalView::`vftable' | ??_7mmExternalView@@6B@
*/

class mmExternalView : asNode
{
public:
    // mmExternalView::`vftable' @ 0x5B0DB0

    // 0x4317B0 | ??0mmExternalView@@QAE@XZ
    inline mmExternalView()
    {
        stub<member_func_t<void, mmExternalView>>(0x4317B0, this);
    }

    // 0x431840 | ?Init@mmExternalView@@QAEXPAVmmPlayer@@@Z
    inline void Init(class mmPlayer* arg1)
    {
        return stub<member_func_t<void, mmExternalView, class mmPlayer*>>(0x431840, this, arg1);
    }

    // 0x42EA80 | ??1mmExternalView@@UAE@XZ
    inline ~mmExternalView() override
    {
        stub<member_func_t<void, mmExternalView>>(0x42EA80, this);
    }

    // 0x4319F0 | ?Cull@mmExternalView@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmExternalView>>(0x4319F0, this);
    }

    // 0x4319E0 | ?Update@mmExternalView@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmExternalView>>(0x4319E0, this);
    }

    // 0x4319D0 | ?Reset@mmExternalView@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmExternalView>>(0x4319D0, this);
    }

    // 0x431880 | ?ResChange@mmExternalView@@UAEXHH@Z
    inline void ResChange(int32_t arg1, int32_t arg2) override
    {
        return stub<member_func_t<void, mmExternalView, int32_t, int32_t>>(0x431880, this, arg1, arg2);
    }

    // 0x431C20 | ?GetClassNameA@mmExternalView@@UAEPADXZ
    virtual inline char* GetClassNameA()
    {
        return stub<member_func_t<char*, mmExternalView>>(0x431C20, this);
    }
};

struct mmDashView : asLinearCS
{
public:
    // mmDashView::`vftable' @ 0x5B0D78

    // 0x430610 | ??0mmDashView@@QAE@XZ
    inline mmDashView()
    {
        stub<member_func_t<void, mmDashView>>(0x430610, this);
    }

    // 0x430890 | ?Init@mmDashView@@QAEXPADPAVmmPlayer@@@Z
    inline void Init(char* arg1, class mmPlayer* arg2)
    {
        return stub<member_func_t<void, mmDashView, char*, class mmPlayer*>>(0x430890, this, arg1, arg2);
    }

    // 0x430A90 | ?LoadPkg@mmDashView@@AAEXPAD@Z
    inline void LoadPkg(char* arg1)
    {
        return stub<member_func_t<void, mmDashView, char*>>(0x430A90, this, arg1);
    }

    // 0x430C30 | ?LoadPivotInfo@mmDashView@@AAEXPAD@Z
    inline void LoadPivotInfo(char* arg1)
    {
        return stub<member_func_t<void, mmDashView, char*>>(0x430C30, this, arg1);
    }

    // 0x430E60 | ?ActivateUntilTransitionIsOver@mmDashView@@QAEXXZ
    inline void ActivateUntilTransitionIsOver()
    {
        return stub<member_func_t<void, mmDashView>>(0x430E60, this);
    }

    // 0x430E80 | ?Activate@mmDashView@@QAEXXZ
    inline void Activate()
    {
        return stub<member_func_t<void, mmDashView>>(0x430E80, this);
    }

    // 0x430EA0 | ?Deactivate@mmDashView@@QAEXXZ
    inline void Deactivate()
    {
        return stub<member_func_t<void, mmDashView>>(0x430EA0, this);
    }

    // 0x430EC0 | ?TempDeactivate@mmDashView@@QAEXXZ
    inline void TempDeactivate()
    {
        return stub<member_func_t<void, mmDashView>>(0x430EC0, this);
    }

    // 0x4307B0 | ??1mmDashView@@UAE@XZ
    inline ~mmDashView() override
    {
        stub<member_func_t<void, mmDashView>>(0x4307B0, this);
    }

    // 0x430FB0 | ?Cull@mmDashView@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmDashView>>(0x430FB0, this);
    }

    // 0x430ED0 | ?Update@mmDashView@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmDashView>>(0x430ED0, this);
    }

    // 0x430D90 | ?Reset@mmDashView@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmDashView>>(0x430D90, this);
    }

    // 0x4315D0 | ?FileIO@mmDashView@@EAEXAAVdatParser@@@Z
    inline void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, mmDashView, class datParser&>>(0x4315D0, this, arg1);
    }

    // 0x430E00 | ?AfterLoad@mmDashView@@UAEXXZ
    inline void AfterLoad() override
    {
        return stub<member_func_t<void, mmDashView>>(0x430E00, this);
    }

    // 0x430DA0 | ?BeforeSave@mmDashView@@UAEXXZ
    inline void BeforeSave() override
    {
        return stub<member_func_t<void, mmDashView>>(0x430DA0, this);
    }

    // 0x431C30 | ?GetClassNameA@mmDashView@@UAEPADXZ
    virtual inline char* GetClassNameA()
    {
        return stub<member_func_t<char*, mmDashView>>(0x431C30, this);
    }
};
