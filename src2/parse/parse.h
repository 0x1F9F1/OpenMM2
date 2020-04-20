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
    parse:parse

    0x4A78E0 | public: __thiscall datParser::datParser(char const *) | ??0datParser@@QAE@PBD@Z
    0x4A7920 | public: __thiscall datParser::~datParser(void) | ??1datParser@@QAE@XZ
    0x4A7940 | public: __thiscall datParserRecord::~datParserRecord(void) | ??1datParserRecord@@QAE@XZ
    0x4A7980 | public: class datParser * __thiscall datParser::AddParser(char const *,class datCallback *) | ?AddParser@datParser@@QAEPAV1@PBDPAVdatCallback@@@Z
    0x4A79D0 | private: class datParserRecord & __thiscall datParser::AddRecord(int,char const *,void *,unsigned short,class datCallback *) | ?AddRecord@datParser@@AAEAAVdatParserRecord@@HPBDPAXGPAVdatCallback@@@Z
    0x4A7A90 | public: bool __thiscall datParser::Load(class Stream *,char const *) | ?Load@datParser@@QAE_NPAVStream@@PBD@Z
    0x4A7AF0 | public: bool __thiscall datParser::Load(char const *,char const *) | ?Load@datParser@@QAE_NPBD0@Z
    0x4A7B40 | public: bool __thiscall datParser::Load(char const *,char const *,char const *) | ?Load@datParser@@QAE_NPBD00@Z
    0x4A7B90 | public: bool __thiscall datParser::Save(class Stream *,char const *,bool) | ?Save@datParser@@QAE_NPAVStream@@PBD_N@Z
    0x4A7C00 | public: bool __thiscall datParser::Save(char const *,char const *,bool) | ?Save@datParser@@QAE_NPBD0_N@Z
    0x4A7C50 | public: bool __thiscall datParser::Save(char const *,char const *,char const *,bool) | ?Save@datParser@@QAE_NPBD00_N@Z
    0x4A7CA0 | private: void __thiscall datParser::Read(class datBaseTokenizer &) | ?Read@datParser@@AAEXAAVdatBaseTokenizer@@@Z
    0x4A7F70 | private: void __thiscall datParser::Write(class datBaseTokenizer &) | ?Write@datParser@@AAEXAAVdatBaseTokenizer@@@Z
    0x4A81D0 | private: void __thiscall datParser::Indent(class datBaseTokenizer &) | ?Indent@datParser@@AAEXAAVdatBaseTokenizer@@@Z
    0x5CA2E4 | public: static void (__cdecl* datParser::sm_Errorf)(char const *,...) | ?sm_Errorf@datParser@@2P6AXPBDZZA
*/

class datParser
{
public:
    // 0x406850 | ?AddValue@datParser@@QAEXPBDPAMPAVdatCallback@@@Z
    inline void AddValue(char const* arg1, float* arg2, class datCallback* arg3)
    {
        return stub<member_func_t<void, datParser, char const*, float*, class datCallback*>>(
            0x406850, this, arg1, arg2, arg3);
    }

    // 0x45FC00 | ?AddValue@datParser@@QAEXPBDPAHPAVdatCallback@@@Z
    inline void AddValue(char const* arg1, int32_t* arg2, class datCallback* arg3)
    {
        return stub<member_func_t<void, datParser, char const*, int32_t*, class datCallback*>>(
            0x45FC00, this, arg1, arg2, arg3);
    }

    // 0x4A78E0 | ??0datParser@@QAE@PBD@Z
    inline datParser(char const* arg1)
    {
        stub<member_func_t<void, datParser, char const*>>(0x4A78E0, this, arg1);
    }

    // 0x4A7920 | ??1datParser@@QAE@XZ
    inline ~datParser()
    {
        stub<member_func_t<void, datParser>>(0x4A7920, this);
    }

    // 0x4A7980 | ?AddParser@datParser@@QAEPAV1@PBDPAVdatCallback@@@Z
    inline class datParser* AddParser(char const* arg1, class datCallback* arg2)
    {
        return stub<member_func_t<class datParser*, datParser, char const*, class datCallback*>>(
            0x4A7980, this, arg1, arg2);
    }

    // 0x4A79D0 | ?AddRecord@datParser@@AAEAAVdatParserRecord@@HPBDPAXGPAVdatCallback@@@Z
    inline class datParserRecord& AddRecord(
        int32_t arg1, char const* arg2, void* arg3, uint16_t arg4, class datCallback* arg5)
    {
        return stub<member_func_t<class datParserRecord&, datParser, int32_t, char const*, void*, uint16_t,
            class datCallback*>>(0x4A79D0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4A7A90 | ?Load@datParser@@QAE_NPAVStream@@PBD@Z
    inline bool Load(class Stream* arg1, char const* arg2)
    {
        return stub<member_func_t<bool, datParser, class Stream*, char const*>>(0x4A7A90, this, arg1, arg2);
    }

    // 0x4A7AF0 | ?Load@datParser@@QAE_NPBD0@Z
    inline bool Load(char const* arg1, char const* arg2)
    {
        return stub<member_func_t<bool, datParser, char const*, char const*>>(0x4A7AF0, this, arg1, arg2);
    }

    // 0x4A7B40 | ?Load@datParser@@QAE_NPBD00@Z
    inline bool Load(char const* arg1, char const* arg2, char const* arg3)
    {
        return stub<member_func_t<bool, datParser, char const*, char const*, char const*>>(
            0x4A7B40, this, arg1, arg2, arg3);
    }

    // 0x4A7B90 | ?Save@datParser@@QAE_NPAVStream@@PBD_N@Z
    inline bool Save(class Stream* arg1, char const* arg2, bool arg3)
    {
        return stub<member_func_t<bool, datParser, class Stream*, char const*, bool>>(0x4A7B90, this, arg1, arg2, arg3);
    }

    // 0x4A7C00 | ?Save@datParser@@QAE_NPBD0_N@Z
    inline bool Save(char const* arg1, char const* arg2, bool arg3)
    {
        return stub<member_func_t<bool, datParser, char const*, char const*, bool>>(0x4A7C00, this, arg1, arg2, arg3);
    }

    // 0x4A7C50 | ?Save@datParser@@QAE_NPBD00_N@Z
    inline bool Save(char const* arg1, char const* arg2, char const* arg3, bool arg4)
    {
        return stub<member_func_t<bool, datParser, char const*, char const*, char const*, bool>>(
            0x4A7C50, this, arg1, arg2, arg3, arg4);
    }

    // 0x4A7CA0 | ?Read@datParser@@AAEXAAVdatBaseTokenizer@@@Z
    inline void Read(class datBaseTokenizer& arg1)
    {
        return stub<member_func_t<void, datParser, class datBaseTokenizer&>>(0x4A7CA0, this, arg1);
    }

    // 0x4A7F70 | ?Write@datParser@@AAEXAAVdatBaseTokenizer@@@Z
    inline void Write(class datBaseTokenizer& arg1)
    {
        return stub<member_func_t<void, datParser, class datBaseTokenizer&>>(0x4A7F70, this, arg1);
    }

    // 0x4A81D0 | ?Indent@datParser@@AAEXAAVdatBaseTokenizer@@@Z
    inline void Indent(class datBaseTokenizer& arg1)
    {
        return stub<member_func_t<void, datParser, class datBaseTokenizer&>>(0x4A81D0, this, arg1);
    }

    // 0x5CA2E4 | ?sm_Errorf@datParser@@2P6AXPBDZZA
    inline extern_var(0x5CA2E4, void(__cdecl*)(char const*, ...), sm_Errorf);
};

class datParserRecord
{
public:
    // 0x4A7940 | ??1datParserRecord@@QAE@XZ
    inline ~datParserRecord()
    {
        stub<member_func_t<void, datParserRecord>>(0x4A7940, this);
    }
};
