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
    data:token

    0x4C8210 | public: void __thiscall datBaseTokenizer::Init(char const *,class Stream *) | ?Init@datBaseTokenizer@@QAEXPBDPAVStream@@@Z
    0x4C8240 | private: void __thiscall datBaseTokenizer::PushBack(char const *,int) | ?PushBack@datBaseTokenizer@@AAEXPBDH@Z
    0x4C8270 | private: int __thiscall datBaseTokenizer::GetTokenCh(void) | ?GetTokenCh@datBaseTokenizer@@AAEHXZ
    0x4C82B0 | protected: void __thiscall datBaseTokenizer::SkipComment(void) | ?SkipComment@datBaseTokenizer@@IAEXXZ
    0x4C82F0 | public: int __thiscall datBaseTokenizer::GetToken(char *,int) | ?GetToken@datBaseTokenizer@@QAEHPADH@Z
    0x4C8440 | public: int __thiscall datBaseTokenizer::GetBlock(char *,int) | ?GetBlock@datBaseTokenizer@@QAEHPADH@Z
    0x4C8480 | public: void __thiscall datBaseTokenizer::MatchToken(char const *) | ?MatchToken@datBaseTokenizer@@QAEXPBD@Z
    0x4C8500 | public: bool __thiscall datBaseTokenizer::CheckToken(char const *,bool) | ?CheckToken@datBaseTokenizer@@QAE_NPBD_N@Z
    0x4C8590 | public: int __thiscall datBaseTokenizer::GetTokenToChar(char *,int,char) | ?GetTokenToChar@datBaseTokenizer@@QAEHPADHD@Z
    0x4C8650 | public: void __thiscall datBaseTokenizer::SkipToEndOfLine(void) | ?SkipToEndOfLine@datBaseTokenizer@@QAEXXZ
    0x4C8670 | public: void __thiscall datBaseTokenizer::IgnoreToken(void) | ?IgnoreToken@datBaseTokenizer@@QAEXXZ
    0x4C8690 | public: void __thiscall datBaseTokenizer::Pop(void) | ?Pop@datBaseTokenizer@@QAEXXZ
    0x4C86D0 | public: virtual bool __thiscall datBaseTokenizer::Put(char) | ?Put@datBaseTokenizer@@UAE_ND@Z
    0x4C8730 | public: bool __cdecl datBaseTokenizer::PutStr(char const *,...) | ?PutStr@datBaseTokenizer@@QAA_NPBDZZ
    0x4C8770 | public: virtual int __thiscall datAsciiTokenizer::GetInt(void) | ?GetInt@datAsciiTokenizer@@UAEHXZ
    0x4C87D0 | public: virtual float __thiscall datAsciiTokenizer::GetFloat(void) | ?GetFloat@datAsciiTokenizer@@UAEMXZ
    0x4C8830 | public: virtual void __thiscall datAsciiTokenizer::GetVector(class Vector2 &) | ?GetVector@datAsciiTokenizer@@UAEXAAVVector2@@@Z
    0x4C8860 | public: virtual void __thiscall datAsciiTokenizer::GetVector(class Vector3 &) | ?GetVector@datAsciiTokenizer@@UAEXAAVVector3@@@Z
    0x4C8890 | public: virtual void __thiscall datAsciiTokenizer::GetVector(class Vector4 &) | ?GetVector@datAsciiTokenizer@@UAEXAAVVector4@@@Z
    0x4C88D0 | public: virtual void __thiscall datAsciiTokenizer::GetDelimiter(char const *) | ?GetDelimiter@datAsciiTokenizer@@UAEXPBD@Z
    0x4C88E0 | public: virtual int __thiscall datAsciiTokenizer::MatchInt(char const *) | ?MatchInt@datAsciiTokenizer@@UAEHPBD@Z
    0x4C8900 | public: virtual float __thiscall datAsciiTokenizer::MatchFloat(char const *) | ?MatchFloat@datAsciiTokenizer@@UAEMPBD@Z
    0x4C8920 | public: virtual void __thiscall datAsciiTokenizer::MatchVector(char const *,class Vector2 &) | ?MatchVector@datAsciiTokenizer@@UAEXPBDAAVVector2@@@Z
    0x4C8940 | public: virtual void __thiscall datAsciiTokenizer::MatchVector(char const *,class Vector3 &) | ?MatchVector@datAsciiTokenizer@@UAEXPBDAAVVector3@@@Z
    0x4C8960 | public: virtual void __thiscall datAsciiTokenizer::MatchVector(char const *,class Vector4 &) | ?MatchVector@datAsciiTokenizer@@UAEXPBDAAVVector4@@@Z
    0x4C8980 | public: virtual bool __thiscall datAsciiTokenizer::Put(char const *,unsigned int) | ?Put@datAsciiTokenizer@@UAE_NPBDI@Z
    0x4C8A00 | public: virtual bool __thiscall datAsciiTokenizer::Put(int) | ?Put@datAsciiTokenizer@@UAE_NH@Z
    0x4C8A40 | public: virtual bool __thiscall datAsciiTokenizer::Put(float) | ?Put@datAsciiTokenizer@@UAE_NM@Z
    0x4C8A90 | public: virtual bool __thiscall datAsciiTokenizer::Put(class Vector2 const &) | ?Put@datAsciiTokenizer@@UAE_NABVVector2@@@Z
    0x4C8AF0 | public: virtual bool __thiscall datAsciiTokenizer::Put(class Vector3 const &) | ?Put@datAsciiTokenizer@@UAE_NABVVector3@@@Z
    0x4C8B50 | public: virtual bool __thiscall datAsciiTokenizer::Put(class Vector4 const &) | ?Put@datAsciiTokenizer@@UAE_NABVVector4@@@Z
    0x4C8BC0 | public: virtual bool __thiscall datAsciiTokenizer::PutDelimiter(char const *) | ?PutDelimiter@datAsciiTokenizer@@UAE_NPBD@Z
    0x4C8BE0 | public: virtual int __thiscall datBinTokenizer::GetInt(void) | ?GetInt@datBinTokenizer@@UAEHXZ
    0x4C8C20 | public: virtual float __thiscall datBinTokenizer::GetFloat(void) | ?GetFloat@datBinTokenizer@@UAEMXZ
    0x4C8C70 | public: virtual void __thiscall datBinTokenizer::GetVector(class Vector2 &) | ?GetVector@datBinTokenizer@@UAEXAAVVector2@@@Z
    0x4C8CB0 | public: virtual void __thiscall datBinTokenizer::GetVector(class Vector3 &) | ?GetVector@datBinTokenizer@@UAEXAAVVector3@@@Z
    0x4C8CF0 | public: virtual void __thiscall datBinTokenizer::GetVector(class Vector4 &) | ?GetVector@datBinTokenizer@@UAEXAAVVector4@@@Z
    0x4C8D30 | public: virtual void __thiscall datBinTokenizer::GetDelimiter(char const *) | ?GetDelimiter@datBinTokenizer@@UAEXPBD@Z
    0x4C8D40 | public: virtual int __thiscall datBinTokenizer::MatchInt(char const *) | ?MatchInt@datBinTokenizer@@UAEHPBD@Z
    0x4C8D50 | public: virtual float __thiscall datBinTokenizer::MatchFloat(char const *) | ?MatchFloat@datBinTokenizer@@UAEMPBD@Z
    0x4C8D60 | public: virtual void __thiscall datBinTokenizer::MatchVector(char const *,class Vector2 &) | ?MatchVector@datBinTokenizer@@UAEXPBDAAVVector2@@@Z
    0x4C8D70 | public: virtual void __thiscall datBinTokenizer::MatchVector(char const *,class Vector3 &) | ?MatchVector@datBinTokenizer@@UAEXPBDAAVVector3@@@Z
    0x4C8D80 | public: virtual void __thiscall datBinTokenizer::MatchVector(char const *,class Vector4 &) | ?MatchVector@datBinTokenizer@@UAEXPBDAAVVector4@@@Z
    0x4C8D90 | public: virtual bool __thiscall datBinTokenizer::Put(char const *,unsigned int) | ?Put@datBinTokenizer@@UAE_NPBDI@Z
    0x4C8DE0 | public: virtual bool __thiscall datBinTokenizer::Put(int) | ?Put@datBinTokenizer@@UAE_NH@Z
    0x4C8E00 | public: virtual bool __thiscall datBinTokenizer::Put(float) | ?Put@datBinTokenizer@@UAE_NM@Z
    0x4C8E20 | public: virtual bool __thiscall datBinTokenizer::Put(class Vector2 const &) | ?Put@datBinTokenizer@@UAE_NABVVector2@@@Z
    0x4C8E40 | public: virtual bool __thiscall datBinTokenizer::Put(class Vector3 const &) | ?Put@datBinTokenizer@@UAE_NABVVector3@@@Z
    0x4C8E60 | public: virtual bool __thiscall datBinTokenizer::Put(class Vector4 const &) | ?Put@datBinTokenizer@@UAE_NABVVector4@@@Z
    0x4C8E80 | public: virtual bool __thiscall datBinTokenizer::PutDelimiter(char const *) | ?PutDelimiter@datBinTokenizer@@UAE_NPBD@Z
    0x4C8E90 | public: __thiscall datMultiTokenizer::datMultiTokenizer(void) | ??0datMultiTokenizer@@QAE@XZ
    0x4C8EA0 | public: class datBaseTokenizer & __thiscall datMultiTokenizer::GetReadTokenizer(char const *,class Stream *,char const *,char const *) | ?GetReadTokenizer@datMultiTokenizer@@QAEAAVdatBaseTokenizer@@PBDPAVStream@@00@Z
    0x4C8FB0 | public: class datBaseTokenizer & __thiscall datMultiTokenizer::GetWriteTokenizer(char const *,class Stream *,bool,char const *) | ?GetWriteTokenizer@datMultiTokenizer@@QAEAAVdatBaseTokenizer@@PBDPAVStream@@_N0@Z
    0x4C9000 | public: __thiscall datTokenizer::datTokenizer(void) | ??0datTokenizer@@QAE@XZ
    0x4C9010 | public: __thiscall datTokenizer::datTokenizer(char const *,class Stream *) | ??0datTokenizer@@QAE@PBDPAVStream@@@Z
    0x5B2B74 | const datBinTokenizer::`vftable' | ??_7datBinTokenizer@@6B@
    0x5B2BC0 | const datTokenizer::`vftable' | ??_7datTokenizer@@6B@
    0x5CEB6C | public: static void (__cdecl* datBaseTokenizer::sm_Errorf)(char const *,...) | ?sm_Errorf@datBaseTokenizer@@2P6AXPBDZZA
    public: static int datBaseTokenizer::CommentChar | ?CommentChar@datBaseTokenizer@@2HA
*/

#include "hooking.h"
