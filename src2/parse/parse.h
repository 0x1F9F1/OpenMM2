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
    // 0x4A78E0 | ??0datParser@@QAE@PBD@Z
    datParser(char const* arg1);

    // 0x4A7920 | ??1datParser@@QAE@XZ
    ~datParser();

    // 0x4A7980 | ?AddParser@datParser@@QAEPAV1@PBDPAVdatCallback@@@Z
    class datParser* AddParser(char const* arg1, class datCallback* arg2);

    // 0x406850 | ?AddValue@datParser@@QAEXPBDPAMPAVdatCallback@@@Z
    void AddValue(char const* arg1, f32* arg2, class datCallback* arg3);

    // 0x45FC00 | ?AddValue@datParser@@QAEXPBDPAHPAVdatCallback@@@Z
    void AddValue(char const* arg1, i32* arg2, class datCallback* arg3);

    // 0x4A7AF0 | ?Load@datParser@@QAE_NPBD0@Z
    bool Load(char const* arg1, char const* arg2);

    // 0x4A7A90 | ?Load@datParser@@QAE_NPAVStream@@PBD@Z
    bool Load(class Stream* arg1, char const* arg2);

    // 0x4A7B40 | ?Load@datParser@@QAE_NPBD00@Z
    bool Load(char const* arg1, char const* arg2, char const* arg3);

    // 0x4A7C00 | ?Save@datParser@@QAE_NPBD0_N@Z
    bool Save(char const* arg1, char const* arg2, bool arg3);

    // 0x4A7B90 | ?Save@datParser@@QAE_NPAVStream@@PBD_N@Z
    bool Save(class Stream* arg1, char const* arg2, bool arg3);

    // 0x4A7C50 | ?Save@datParser@@QAE_NPBD00_N@Z
    bool Save(char const* arg1, char const* arg2, char const* arg3, bool arg4);

    // 0x5CA2E4 | ?sm_Errorf@datParser@@2P6AXPBDZZA
    static inline extern_var(0x5CA2E4, void (*)(char const*, ...), sm_Errorf);

private:
    // 0x4A79D0 | ?AddRecord@datParser@@AAEAAVdatParserRecord@@HPBDPAXGPAVdatCallback@@@Z
    class datParserRecord& AddRecord(i32 arg1, char const* arg2, void* arg3, u16 arg4, class datCallback* arg5);

    // 0x4A81D0 | ?Indent@datParser@@AAEXAAVdatBaseTokenizer@@@Z
    void Indent(class datBaseTokenizer& arg1);

    // 0x4A7CA0 | ?Read@datParser@@AAEXAAVdatBaseTokenizer@@@Z
    void Read(class datBaseTokenizer& arg1);

    // 0x4A7F70 | ?Write@datParser@@AAEXAAVdatBaseTokenizer@@@Z
    void Write(class datBaseTokenizer& arg1);
};

check_size(datParser, 0x54);

class datParserRecord
{
public:
    // 0x4A7940 | ??1datParserRecord@@QAE@XZ
    ~datParserRecord();
};

check_size(datParserRecord, 0x0);
