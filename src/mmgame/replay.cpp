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

#include "replay.h"

#include "core/output.h"
#include "core/stream.h"
#include "data/asset.h"

inline extern_var(0x5E0D48, mmReplayData[18000], replayData);

mmReplayManager::mmReplayManager()
{
    stub<member_func_t<void, mmReplayManager>>(0x406870, this);
}

mmReplayManager::~mmReplayManager()
{
    Instance = nullptr;

    // DebugLogShutdown();
}

void mmReplayManager::LoadReplay(char* path)
{
    Stream* stream = datAssetManager::Open(path, "rpl", 0, 0);
    if (!stream)
    {
        Errorf("Couldn't load replay '%s'", path);
    }

    char magic[8];
    stream->ReadBytes(magic, 8);

    int frameSize = stream->Read<int>();

    if (memcmp(magic, "REPLAY18", 8u) != 0 || frameSize != sizeof(mmReplayData))
    {
        Errorf("Version mismatch on '%s', cannot load.", path);
    }

    stream->ReadBytes(SomeBuffer, sizeof(SomeBuffer));

    ReadReplayInfo(stream);

    CurrentFrame = stream->Read<uint32_t>();

    stream->ReadArray(replayData, CurrentFrame);

    field_6D4 = stream->Read<int>();

    stream->ReadArray(CameraPoints, field_6D4);

    this->field_28 = 0;
    this->field_31 = 1;

    SetReplayInfo();
    StartReplay();

    stream->Close();
}

void mmReplayManager::ReadReplayInfo(Stream* stream)
{
    return stub<member_func_t<void, mmReplayManager, Stream*>>(0x407920, this, stream);
}

void mmReplayManager::SetReplayInfo()
{
    return stub<member_func_t<void, mmReplayManager>>(0x4075A0, this);
}

void mmReplayManager::StartReplay()
{
    return stub<member_func_t<void, mmReplayManager>>(0x406E80, this);
}
