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
    aud:fx

    0x5A3860 | public: class audFX * __thiscall audFX::Create(class audManager *,class audObject *) | ?Create@audFX@@QAEPAV1@PAVaudManager@@PAVaudObject@@@Z
    0x5A3890 | public: void __thiscall audFX::Destroy(void) | ?Destroy@audFX@@QAEXXZ
    0x5A38C0 | public: class EchoEffect * __thiscall audFX::EnablePCEcho(unsigned long,int) | ?EnablePCEcho@audFX@@QAEPAVEchoEffect@@KH@Z
*/

class audFX
{
public:
    // 0x5A3860 | ?Create@audFX@@QAEPAV1@PAVaudManager@@PAVaudObject@@@Z
    class audFX* Create(class audManager* arg1, class audObject* arg2);

    // 0x5A3890 | ?Destroy@audFX@@QAEXXZ
    void Destroy();

    // 0x5A38C0 | ?EnablePCEcho@audFX@@QAEPAVEchoEffect@@KH@Z
    class EchoEffect* EnablePCEcho(u32 arg1, i32 arg2);
};

check_size(audFX, 0x0);
