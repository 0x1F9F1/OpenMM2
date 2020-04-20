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

class datBinTokenizer : datBaseTokenizer
{
public:
    // datBinTokenizer::`vftable' @ 0x5B2B74

    // 0x4C8BE0 | ?GetInt@datBinTokenizer@@UAEHXZ
    inline int32_t GetInt() override
    {
        return stub<member_func_t<int32_t, datBinTokenizer>>(0x4C8BE0, this);
    }

    // 0x4C8C20 | ?GetFloat@datBinTokenizer@@UAEMXZ
    inline float GetFloat() override
    {
        return stub<member_func_t<float, datBinTokenizer>>(0x4C8C20, this);
    }

    // 0x4C8CF0 | ?GetVector@datBinTokenizer@@UAEXAAVVector4@@@Z
    inline void GetVector(class Vector4& arg1) override
    {
        return stub<member_func_t<void, datBinTokenizer, class Vector4&>>(0x4C8CF0, this, arg1);
    }

    // 0x4C8CB0 | ?GetVector@datBinTokenizer@@UAEXAAVVector3@@@Z
    inline void GetVector(class Vector3& arg1) override
    {
        return stub<member_func_t<void, datBinTokenizer, class Vector3&>>(0x4C8CB0, this, arg1);
    }

    // 0x4C8C70 | ?GetVector@datBinTokenizer@@UAEXAAVVector2@@@Z
    inline void GetVector(class Vector2& arg1) override
    {
        return stub<member_func_t<void, datBinTokenizer, class Vector2&>>(0x4C8C70, this, arg1);
    }

    // 0x4C8D30 | ?GetDelimiter@datBinTokenizer@@UAEXPBD@Z
    inline void GetDelimiter(char const* arg1) override
    {
        return stub<member_func_t<void, datBinTokenizer, char const*>>(0x4C8D30, this, arg1);
    }

    // 0x4C8D40 | ?MatchInt@datBinTokenizer@@UAEHPBD@Z
    inline int32_t MatchInt(char const* arg1) override
    {
        return stub<member_func_t<int32_t, datBinTokenizer, char const*>>(0x4C8D40, this, arg1);
    }

    // 0x4C8D50 | ?MatchFloat@datBinTokenizer@@UAEMPBD@Z
    inline float MatchFloat(char const* arg1) override
    {
        return stub<member_func_t<float, datBinTokenizer, char const*>>(0x4C8D50, this, arg1);
    }

    // 0x4C8D80 | ?MatchVector@datBinTokenizer@@UAEXPBDAAVVector4@@@Z
    inline void MatchVector(char const* arg1, class Vector4& arg2) override
    {
        return stub<member_func_t<void, datBinTokenizer, char const*, class Vector4&>>(0x4C8D80, this, arg1, arg2);
    }

    // 0x4C8D70 | ?MatchVector@datBinTokenizer@@UAEXPBDAAVVector3@@@Z
    inline void MatchVector(char const* arg1, class Vector3& arg2) override
    {
        return stub<member_func_t<void, datBinTokenizer, char const*, class Vector3&>>(0x4C8D70, this, arg1, arg2);
    }

    // 0x4C8D60 | ?MatchVector@datBinTokenizer@@UAEXPBDAAVVector2@@@Z
    inline void MatchVector(char const* arg1, class Vector2& arg2) override
    {
        return stub<member_func_t<void, datBinTokenizer, char const*, class Vector2&>>(0x4C8D60, this, arg1, arg2);
    }

    // 0x4C8E60 | ?Put@datBinTokenizer@@UAE_NABVVector4@@@Z
    inline bool Put(class Vector4 const& arg1) override
    {
        return stub<member_func_t<bool, datBinTokenizer, class Vector4 const&>>(0x4C8E60, this, arg1);
    }

    // 0x4C8E40 | ?Put@datBinTokenizer@@UAE_NABVVector3@@@Z
    inline bool Put(class Vector3 const& arg1) override
    {
        return stub<member_func_t<bool, datBinTokenizer, class Vector3 const&>>(0x4C8E40, this, arg1);
    }

    // 0x4C8E20 | ?Put@datBinTokenizer@@UAE_NABVVector2@@@Z
    inline bool Put(class Vector2 const& arg1) override
    {
        return stub<member_func_t<bool, datBinTokenizer, class Vector2 const&>>(0x4C8E20, this, arg1);
    }

    // 0x4C8E00 | ?Put@datBinTokenizer@@UAE_NM@Z
    inline bool Put(float arg1) override
    {
        return stub<member_func_t<bool, datBinTokenizer, float>>(0x4C8E00, this, arg1);
    }

    // 0x4C8DE0 | ?Put@datBinTokenizer@@UAE_NH@Z
    inline bool Put(int32_t arg1) override
    {
        return stub<member_func_t<bool, datBinTokenizer, int32_t>>(0x4C8DE0, this, arg1);
    }

    // 0x4C8D90 | ?Put@datBinTokenizer@@UAE_NPBDI@Z
    inline bool Put(char const* arg1, uint32_t arg2) override
    {
        return stub<member_func_t<bool, datBinTokenizer, char const*, uint32_t>>(0x4C8D90, this, arg1, arg2);
    }

    // 0x4C8E80 | ?PutDelimiter@datBinTokenizer@@UAE_NPBD@Z
    inline bool PutDelimiter(char const* arg1) override
    {
        return stub<member_func_t<bool, datBinTokenizer, char const*>>(0x4C8E80, this, arg1);
    }
};

class datTokenizer : datAsciiTokenizer
{
public:
    // datTokenizer::`vftable' @ 0x5B2BC0

    // 0x4C9000 | ??0datTokenizer@@QAE@XZ
    inline datTokenizer()
    {
        stub<member_func_t<void, datTokenizer>>(0x4C9000, this);
    }

    // 0x4C9010 | ??0datTokenizer@@QAE@PBDPAVStream@@@Z
    inline datTokenizer(char const* arg1, class Stream* arg2)
    {
        stub<member_func_t<void, datTokenizer, char const*, class Stream*>>(0x4C9010, this, arg1, arg2);
    }
};

class datBaseTokenizer
{
public:
    // datBaseTokenizer::`vftable' @ 0x5B22A4

    // 0x4C8210 | ?Init@datBaseTokenizer@@QAEXPBDPAVStream@@@Z
    inline void Init(char const* arg1, class Stream* arg2)
    {
        return stub<member_func_t<void, datBaseTokenizer, char const*, class Stream*>>(0x4C8210, this, arg1, arg2);
    }

    // 0x4C8240 | ?PushBack@datBaseTokenizer@@AAEXPBDH@Z
    inline void PushBack(char const* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, datBaseTokenizer, char const*, int32_t>>(0x4C8240, this, arg1, arg2);
    }

    // 0x4C8270 | ?GetTokenCh@datBaseTokenizer@@AAEHXZ
    inline int32_t GetTokenCh()
    {
        return stub<member_func_t<int32_t, datBaseTokenizer>>(0x4C8270, this);
    }

    // 0x4C82B0 | ?SkipComment@datBaseTokenizer@@IAEXXZ
    inline void SkipComment()
    {
        return stub<member_func_t<void, datBaseTokenizer>>(0x4C82B0, this);
    }

    // 0x4C82F0 | ?GetToken@datBaseTokenizer@@QAEHPADH@Z
    inline int32_t GetToken(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, datBaseTokenizer, char*, int32_t>>(0x4C82F0, this, arg1, arg2);
    }

    // 0x4C8440 | ?GetBlock@datBaseTokenizer@@QAEHPADH@Z
    inline int32_t GetBlock(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, datBaseTokenizer, char*, int32_t>>(0x4C8440, this, arg1, arg2);
    }

    // 0x4C8480 | ?MatchToken@datBaseTokenizer@@QAEXPBD@Z
    inline void MatchToken(char const* arg1)
    {
        return stub<member_func_t<void, datBaseTokenizer, char const*>>(0x4C8480, this, arg1);
    }

    // 0x4C8500 | ?CheckToken@datBaseTokenizer@@QAE_NPBD_N@Z
    inline bool CheckToken(char const* arg1, bool arg2)
    {
        return stub<member_func_t<bool, datBaseTokenizer, char const*, bool>>(0x4C8500, this, arg1, arg2);
    }

    // 0x4C8590 | ?GetTokenToChar@datBaseTokenizer@@QAEHPADHD@Z
    inline int32_t GetTokenToChar(char* arg1, int32_t arg2, char arg3)
    {
        return stub<member_func_t<int32_t, datBaseTokenizer, char*, int32_t, char>>(0x4C8590, this, arg1, arg2, arg3);
    }

    // 0x4C8650 | ?SkipToEndOfLine@datBaseTokenizer@@QAEXXZ
    inline void SkipToEndOfLine()
    {
        return stub<member_func_t<void, datBaseTokenizer>>(0x4C8650, this);
    }

    // 0x4C8670 | ?IgnoreToken@datBaseTokenizer@@QAEXXZ
    inline void IgnoreToken()
    {
        return stub<member_func_t<void, datBaseTokenizer>>(0x4C8670, this);
    }

    // 0x4C8690 | ?Pop@datBaseTokenizer@@QAEXXZ
    inline void Pop()
    {
        return stub<member_func_t<void, datBaseTokenizer>>(0x4C8690, this);
    }

    // 0x4C8730 | ?PutStr@datBaseTokenizer@@QAA_NPBDZZ
    // Skipped (Variable Arguments)

    // 0x5CEB6C | ?sm_Errorf@datBaseTokenizer@@2P6AXPBDZZA
    inline extern_var(0x5CEB6C, void(__cdecl*)(char const*, ...), sm_Errorf);

    // 0x582519 | __purecall
    virtual inline int32_t GetInt()
    {
        return stub<member_func_t<int32_t, datBaseTokenizer>>(0x582519, this);
    }

    // 0x582519 | __purecall
    virtual inline float GetFloat()
    {
        return stub<member_func_t<float, datBaseTokenizer>>(0x582519, this);
    }

    // 0x582519 | __purecall
    virtual inline void GetVector(class Vector4& arg1)
    {
        return stub<member_func_t<void, datBaseTokenizer, class Vector4&>>(0x582519, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline void GetVector(class Vector3& arg1)
    {
        return stub<member_func_t<void, datBaseTokenizer, class Vector3&>>(0x582519, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline void GetVector(class Vector2& arg1)
    {
        return stub<member_func_t<void, datBaseTokenizer, class Vector2&>>(0x582519, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline void GetDelimiter(char const* arg1)
    {
        return stub<member_func_t<void, datBaseTokenizer, char const*>>(0x582519, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline int32_t MatchInt(char const* arg1)
    {
        return stub<member_func_t<int32_t, datBaseTokenizer, char const*>>(0x582519, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline float MatchFloat(char const* arg1)
    {
        return stub<member_func_t<float, datBaseTokenizer, char const*>>(0x582519, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline void MatchVector(char const* arg1, class Vector4& arg2)
    {
        return stub<member_func_t<void, datBaseTokenizer, char const*, class Vector4&>>(0x582519, this, arg1, arg2);
    }

    // 0x582519 | __purecall
    virtual inline void MatchVector(char const* arg1, class Vector3& arg2)
    {
        return stub<member_func_t<void, datBaseTokenizer, char const*, class Vector3&>>(0x582519, this, arg1, arg2);
    }

    // 0x582519 | __purecall
    virtual inline void MatchVector(char const* arg1, class Vector2& arg2)
    {
        return stub<member_func_t<void, datBaseTokenizer, char const*, class Vector2&>>(0x582519, this, arg1, arg2);
    }

    // 0x582519 | __purecall
    virtual inline bool Put(class Vector4 const& arg1)
    {
        return stub<member_func_t<bool, datBaseTokenizer, class Vector4 const&>>(0x582519, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline bool Put(class Vector3 const& arg1)
    {
        return stub<member_func_t<bool, datBaseTokenizer, class Vector3 const&>>(0x582519, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline bool Put(class Vector2 const& arg1)
    {
        return stub<member_func_t<bool, datBaseTokenizer, class Vector2 const&>>(0x582519, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline bool Put(float arg1)
    {
        return stub<member_func_t<bool, datBaseTokenizer, float>>(0x582519, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline bool Put(int32_t arg1)
    {
        return stub<member_func_t<bool, datBaseTokenizer, int32_t>>(0x582519, this, arg1);
    }

    // 0x4C86D0 | ?Put@datBaseTokenizer@@UAE_ND@Z
    virtual inline bool Put(char arg1)
    {
        return stub<member_func_t<bool, datBaseTokenizer, char>>(0x4C86D0, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline bool Put(char const* arg1, uint32_t arg2)
    {
        return stub<member_func_t<bool, datBaseTokenizer, char const*, uint32_t>>(0x582519, this, arg1, arg2);
    }

    // 0x582519 | __purecall
    virtual inline bool PutDelimiter(char const* arg1)
    {
        return stub<member_func_t<bool, datBaseTokenizer, char const*>>(0x582519, this, arg1);
    }
};

class datAsciiTokenizer : datBaseTokenizer
{
public:
    // datAsciiTokenizer::`vftable' @ 0x5B1778

    // 0x4C8770 | ?GetInt@datAsciiTokenizer@@UAEHXZ
    inline int32_t GetInt() override
    {
        return stub<member_func_t<int32_t, datAsciiTokenizer>>(0x4C8770, this);
    }

    // 0x4C87D0 | ?GetFloat@datAsciiTokenizer@@UAEMXZ
    inline float GetFloat() override
    {
        return stub<member_func_t<float, datAsciiTokenizer>>(0x4C87D0, this);
    }

    // 0x4C8890 | ?GetVector@datAsciiTokenizer@@UAEXAAVVector4@@@Z
    inline void GetVector(class Vector4& arg1) override
    {
        return stub<member_func_t<void, datAsciiTokenizer, class Vector4&>>(0x4C8890, this, arg1);
    }

    // 0x4C8860 | ?GetVector@datAsciiTokenizer@@UAEXAAVVector3@@@Z
    inline void GetVector(class Vector3& arg1) override
    {
        return stub<member_func_t<void, datAsciiTokenizer, class Vector3&>>(0x4C8860, this, arg1);
    }

    // 0x4C8830 | ?GetVector@datAsciiTokenizer@@UAEXAAVVector2@@@Z
    inline void GetVector(class Vector2& arg1) override
    {
        return stub<member_func_t<void, datAsciiTokenizer, class Vector2&>>(0x4C8830, this, arg1);
    }

    // 0x4C88D0 | ?GetDelimiter@datAsciiTokenizer@@UAEXPBD@Z
    inline void GetDelimiter(char const* arg1) override
    {
        return stub<member_func_t<void, datAsciiTokenizer, char const*>>(0x4C88D0, this, arg1);
    }

    // 0x4C88E0 | ?MatchInt@datAsciiTokenizer@@UAEHPBD@Z
    inline int32_t MatchInt(char const* arg1) override
    {
        return stub<member_func_t<int32_t, datAsciiTokenizer, char const*>>(0x4C88E0, this, arg1);
    }

    // 0x4C8900 | ?MatchFloat@datAsciiTokenizer@@UAEMPBD@Z
    inline float MatchFloat(char const* arg1) override
    {
        return stub<member_func_t<float, datAsciiTokenizer, char const*>>(0x4C8900, this, arg1);
    }

    // 0x4C8960 | ?MatchVector@datAsciiTokenizer@@UAEXPBDAAVVector4@@@Z
    inline void MatchVector(char const* arg1, class Vector4& arg2) override
    {
        return stub<member_func_t<void, datAsciiTokenizer, char const*, class Vector4&>>(0x4C8960, this, arg1, arg2);
    }

    // 0x4C8940 | ?MatchVector@datAsciiTokenizer@@UAEXPBDAAVVector3@@@Z
    inline void MatchVector(char const* arg1, class Vector3& arg2) override
    {
        return stub<member_func_t<void, datAsciiTokenizer, char const*, class Vector3&>>(0x4C8940, this, arg1, arg2);
    }

    // 0x4C8920 | ?MatchVector@datAsciiTokenizer@@UAEXPBDAAVVector2@@@Z
    inline void MatchVector(char const* arg1, class Vector2& arg2) override
    {
        return stub<member_func_t<void, datAsciiTokenizer, char const*, class Vector2&>>(0x4C8920, this, arg1, arg2);
    }

    // 0x4C8B50 | ?Put@datAsciiTokenizer@@UAE_NABVVector4@@@Z
    inline bool Put(class Vector4 const& arg1) override
    {
        return stub<member_func_t<bool, datAsciiTokenizer, class Vector4 const&>>(0x4C8B50, this, arg1);
    }

    // 0x4C8AF0 | ?Put@datAsciiTokenizer@@UAE_NABVVector3@@@Z
    inline bool Put(class Vector3 const& arg1) override
    {
        return stub<member_func_t<bool, datAsciiTokenizer, class Vector3 const&>>(0x4C8AF0, this, arg1);
    }

    // 0x4C8A90 | ?Put@datAsciiTokenizer@@UAE_NABVVector2@@@Z
    inline bool Put(class Vector2 const& arg1) override
    {
        return stub<member_func_t<bool, datAsciiTokenizer, class Vector2 const&>>(0x4C8A90, this, arg1);
    }

    // 0x4C8A40 | ?Put@datAsciiTokenizer@@UAE_NM@Z
    inline bool Put(float arg1) override
    {
        return stub<member_func_t<bool, datAsciiTokenizer, float>>(0x4C8A40, this, arg1);
    }

    // 0x4C8A00 | ?Put@datAsciiTokenizer@@UAE_NH@Z
    inline bool Put(int32_t arg1) override
    {
        return stub<member_func_t<bool, datAsciiTokenizer, int32_t>>(0x4C8A00, this, arg1);
    }

    // 0x4C8980 | ?Put@datAsciiTokenizer@@UAE_NPBDI@Z
    inline bool Put(char const* arg1, uint32_t arg2) override
    {
        return stub<member_func_t<bool, datAsciiTokenizer, char const*, uint32_t>>(0x4C8980, this, arg1, arg2);
    }

    // 0x4C8BC0 | ?PutDelimiter@datAsciiTokenizer@@UAE_NPBD@Z
    inline bool PutDelimiter(char const* arg1) override
    {
        return stub<member_func_t<bool, datAsciiTokenizer, char const*>>(0x4C8BC0, this, arg1);
    }
};

struct datMultiTokenizer : datAsciiTokenizer
{
public:
    // 0x4C8E90 | ??0datMultiTokenizer@@QAE@XZ
    inline datMultiTokenizer()
    {
        stub<member_func_t<void, datMultiTokenizer>>(0x4C8E90, this);
    }

    // 0x4C8EA0 | ?GetReadTokenizer@datMultiTokenizer@@QAEAAVdatBaseTokenizer@@PBDPAVStream@@00@Z
    inline class datBaseTokenizer& GetReadTokenizer(
        char const* arg1, class Stream* arg2, char const* arg3, char const* arg4)
    {
        return stub<member_func_t<class datBaseTokenizer&, datMultiTokenizer, char const*, class Stream*, char const*,
            char const*>>(0x4C8EA0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4C8FB0 | ?GetWriteTokenizer@datMultiTokenizer@@QAEAAVdatBaseTokenizer@@PBDPAVStream@@_N0@Z
    inline class datBaseTokenizer& GetWriteTokenizer(char const* arg1, class Stream* arg2, bool arg3, char const* arg4)
    {
        return stub<
            member_func_t<class datBaseTokenizer&, datMultiTokenizer, char const*, class Stream*, bool, char const*>>(
            0x4C8FB0, this, arg1, arg2, arg3, arg4);
    }
};
