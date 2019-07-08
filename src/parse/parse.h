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

#include "data/callback.h"
#include "hooking.h"

struct datParserRecord
{
    uint32_t Type;
    uint16_t ArrayCount;
    uint16_t ValueSize;
    char Name[64];
    void* Data;
    datCallback* Callback;
    datParserRecord* Next;

    ~datParserRecord();
};

struct datParser
{
    char Name[64] {};
    uint32_t EntryCount {0};
    uint32_t dword44 {0};
    datParserRecord* FirstRecord {nullptr};
    uint32_t dword4C {0};
    uint32_t RefCount {0};

    datParser(const char* name);
    ~datParser();
};

check_size(datParser, 0x54);
check_size(datParserRecord, 0x54);