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
    0x5CEB70 | public: static int datBaseTokenizer::CommentChar | ?CommentChar@datBaseTokenizer@@2HA
*/

class datBaseTokenizer
{
    // const datBaseTokenizer::`vftable' @ 0x5B22A4

public:
    // 0x4C8500 | ?CheckToken@datBaseTokenizer@@QAE_NPBD_N@Z
    bool CheckToken(char const* arg1, bool arg2);

    // 0x4C8440 | ?GetBlock@datBaseTokenizer@@QAEHPADH@Z
    i32 GetBlock(char* arg1, i32 arg2);

    // 0x4C82F0 | ?GetToken@datBaseTokenizer@@QAEHPADH@Z
    i32 GetToken(char* arg1, i32 arg2);

    // 0x4C8590 | ?GetTokenToChar@datBaseTokenizer@@QAEHPADHD@Z
    i32 GetTokenToChar(char* arg1, i32 arg2, char arg3);

    // 0x4C8670 | ?IgnoreToken@datBaseTokenizer@@QAEXXZ
    void IgnoreToken();

    // 0x4C8210 | ?Init@datBaseTokenizer@@QAEXPBDPAVStream@@@Z
    void Init(char const* arg1, class Stream* arg2);

    // 0x4C8480 | ?MatchToken@datBaseTokenizer@@QAEXPBD@Z
    void MatchToken(char const* arg1);

    // 0x4C8690 | ?Pop@datBaseTokenizer@@QAEXXZ
    void Pop();

    // 0x4C8730 | ?PutStr@datBaseTokenizer@@QAA_NPBDZZ
    bool PutStr(char const* arg1, ...);

    // 0x4C8650 | ?SkipToEndOfLine@datBaseTokenizer@@QAEXXZ
    void SkipToEndOfLine();

    virtual i32 GetInt() = 0;

    virtual f32 GetFloat() = 0;

    virtual void GetVector(class Vector4& arg1) = 0;

    virtual void GetVector(class Vector3& arg1) = 0;

    virtual void GetVector(class Vector2& arg1) = 0;

    virtual void GetDelimiter(char const* arg1) = 0;

    virtual i32 MatchInt(char const* arg1) = 0;

    virtual f32 MatchFloat(char const* arg1) = 0;

    virtual void MatchVector(char const* arg1, class Vector4& arg2) = 0;

    virtual void MatchVector(char const* arg1, class Vector3& arg2) = 0;

    virtual void MatchVector(char const* arg1, class Vector2& arg2) = 0;

    virtual bool Put(class Vector4 const& arg1) = 0;

    virtual bool Put(class Vector3 const& arg1) = 0;

    virtual bool Put(class Vector2 const& arg1) = 0;

    virtual bool Put(f32 arg1) = 0;

    virtual bool Put(i32 arg1) = 0;

    // 0x4C86D0 | ?Put@datBaseTokenizer@@UAE_ND@Z
    virtual bool Put(char arg1);

    virtual bool Put(char const* arg1, u32 arg2) = 0;

    virtual bool PutDelimiter(char const* arg1) = 0;

    // 0x5CEB70 | ?CommentChar@datBaseTokenizer@@2HA
    static inline extern_var(0x5CEB70, i32, CommentChar);

    // 0x5CEB6C | ?sm_Errorf@datBaseTokenizer@@2P6AXPBDZZA
    static inline extern_var(0x5CEB6C, void (*)(char const*, ...), sm_Errorf);

protected:
    // 0x4C82B0 | ?SkipComment@datBaseTokenizer@@IAEXXZ
    void SkipComment();

private:
    // 0x4C8270 | ?GetTokenCh@datBaseTokenizer@@AAEHXZ
    i32 GetTokenCh();

    // 0x4C8240 | ?PushBack@datBaseTokenizer@@AAEXPBDH@Z
    void PushBack(char const* arg1, i32 arg2);
};

check_size(datBaseTokenizer, 0x0);

class datAsciiTokenizer : public datBaseTokenizer
{
    // const datAsciiTokenizer::`vftable' @ 0x5B1778

public:
    // 0x4C88D0 | ?GetDelimiter@datAsciiTokenizer@@UAEXPBD@Z
    void GetDelimiter(char const* arg1) override;

    // 0x4C87D0 | ?GetFloat@datAsciiTokenizer@@UAEMXZ
    f32 GetFloat() override;

    // 0x4C8770 | ?GetInt@datAsciiTokenizer@@UAEHXZ
    i32 GetInt() override;

    // 0x4C8830 | ?GetVector@datAsciiTokenizer@@UAEXAAVVector2@@@Z
    void GetVector(class Vector2& arg1) override;

    // 0x4C8860 | ?GetVector@datAsciiTokenizer@@UAEXAAVVector3@@@Z
    void GetVector(class Vector3& arg1) override;

    // 0x4C8890 | ?GetVector@datAsciiTokenizer@@UAEXAAVVector4@@@Z
    void GetVector(class Vector4& arg1) override;

    // 0x4C8900 | ?MatchFloat@datAsciiTokenizer@@UAEMPBD@Z
    f32 MatchFloat(char const* arg1) override;

    // 0x4C88E0 | ?MatchInt@datAsciiTokenizer@@UAEHPBD@Z
    i32 MatchInt(char const* arg1) override;

    // 0x4C8920 | ?MatchVector@datAsciiTokenizer@@UAEXPBDAAVVector2@@@Z
    void MatchVector(char const* arg1, class Vector2& arg2) override;

    // 0x4C8940 | ?MatchVector@datAsciiTokenizer@@UAEXPBDAAVVector3@@@Z
    void MatchVector(char const* arg1, class Vector3& arg2) override;

    // 0x4C8960 | ?MatchVector@datAsciiTokenizer@@UAEXPBDAAVVector4@@@Z
    void MatchVector(char const* arg1, class Vector4& arg2) override;

    // 0x4C8A90 | ?Put@datAsciiTokenizer@@UAE_NABVVector2@@@Z
    bool Put(class Vector2 const& arg1) override;

    // 0x4C8AF0 | ?Put@datAsciiTokenizer@@UAE_NABVVector3@@@Z
    bool Put(class Vector3 const& arg1) override;

    // 0x4C8B50 | ?Put@datAsciiTokenizer@@UAE_NABVVector4@@@Z
    bool Put(class Vector4 const& arg1) override;

    // 0x4C8A40 | ?Put@datAsciiTokenizer@@UAE_NM@Z
    bool Put(f32 arg1) override;

    // 0x4C8A00 | ?Put@datAsciiTokenizer@@UAE_NH@Z
    bool Put(i32 arg1) override;

    // 0x4C8980 | ?Put@datAsciiTokenizer@@UAE_NPBDI@Z
    bool Put(char const* arg1, u32 arg2) override;

    // 0x4C8BC0 | ?PutDelimiter@datAsciiTokenizer@@UAE_NPBD@Z
    bool PutDelimiter(char const* arg1) override;
};

check_size(datAsciiTokenizer, 0x0);

class datBinTokenizer : public datBaseTokenizer
{
    // const datBinTokenizer::`vftable' @ 0x5B2B74

public:
    // 0x4C8D30 | ?GetDelimiter@datBinTokenizer@@UAEXPBD@Z
    void GetDelimiter(char const* arg1) override;

    // 0x4C8C20 | ?GetFloat@datBinTokenizer@@UAEMXZ
    f32 GetFloat() override;

    // 0x4C8BE0 | ?GetInt@datBinTokenizer@@UAEHXZ
    i32 GetInt() override;

    // 0x4C8C70 | ?GetVector@datBinTokenizer@@UAEXAAVVector2@@@Z
    void GetVector(class Vector2& arg1) override;

    // 0x4C8CB0 | ?GetVector@datBinTokenizer@@UAEXAAVVector3@@@Z
    void GetVector(class Vector3& arg1) override;

    // 0x4C8CF0 | ?GetVector@datBinTokenizer@@UAEXAAVVector4@@@Z
    void GetVector(class Vector4& arg1) override;

    // 0x4C8D50 | ?MatchFloat@datBinTokenizer@@UAEMPBD@Z
    f32 MatchFloat(char const* arg1) override;

    // 0x4C8D40 | ?MatchInt@datBinTokenizer@@UAEHPBD@Z
    i32 MatchInt(char const* arg1) override;

    // 0x4C8D60 | ?MatchVector@datBinTokenizer@@UAEXPBDAAVVector2@@@Z
    void MatchVector(char const* arg1, class Vector2& arg2) override;

    // 0x4C8D70 | ?MatchVector@datBinTokenizer@@UAEXPBDAAVVector3@@@Z
    void MatchVector(char const* arg1, class Vector3& arg2) override;

    // 0x4C8D80 | ?MatchVector@datBinTokenizer@@UAEXPBDAAVVector4@@@Z
    void MatchVector(char const* arg1, class Vector4& arg2) override;

    // 0x4C8E20 | ?Put@datBinTokenizer@@UAE_NABVVector2@@@Z
    bool Put(class Vector2 const& arg1) override;

    // 0x4C8E40 | ?Put@datBinTokenizer@@UAE_NABVVector3@@@Z
    bool Put(class Vector3 const& arg1) override;

    // 0x4C8E60 | ?Put@datBinTokenizer@@UAE_NABVVector4@@@Z
    bool Put(class Vector4 const& arg1) override;

    // 0x4C8E00 | ?Put@datBinTokenizer@@UAE_NM@Z
    bool Put(f32 arg1) override;

    // 0x4C8DE0 | ?Put@datBinTokenizer@@UAE_NH@Z
    bool Put(i32 arg1) override;

    // 0x4C8D90 | ?Put@datBinTokenizer@@UAE_NPBDI@Z
    bool Put(char const* arg1, u32 arg2) override;

    // 0x4C8E80 | ?PutDelimiter@datBinTokenizer@@UAE_NPBD@Z
    bool PutDelimiter(char const* arg1) override;
};

check_size(datBinTokenizer, 0x0);

struct datMultiTokenizer
{
public:
    // 0x4C8E90 | ??0datMultiTokenizer@@QAE@XZ
    datMultiTokenizer();

    // 0x4C8EA0 | ?GetReadTokenizer@datMultiTokenizer@@QAEAAVdatBaseTokenizer@@PBDPAVStream@@00@Z
    class datBaseTokenizer& GetReadTokenizer(char const* arg1, class Stream* arg2, char const* arg3, char const* arg4);

    // 0x4C8FB0 | ?GetWriteTokenizer@datMultiTokenizer@@QAEAAVdatBaseTokenizer@@PBDPAVStream@@_N0@Z
    class datBaseTokenizer& GetWriteTokenizer(char const* arg1, class Stream* arg2, bool arg3, char const* arg4);
};

check_size(datMultiTokenizer, 0x0);

class datTokenizer : public datAsciiTokenizer
{
    // const datTokenizer::`vftable' @ 0x5B2BC0

public:
    // 0x4C9000 | ??0datTokenizer@@QAE@XZ
    datTokenizer();

    // 0x4C9010 | ??0datTokenizer@@QAE@PBDPAVStream@@@Z
    datTokenizer(char const* arg1, class Stream* arg2);
};

check_size(datTokenizer, 0x0);
