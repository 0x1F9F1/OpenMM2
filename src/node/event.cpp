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

#include "event.h"
#include "core/output.h"

eqEventHandler::eqEventHandler()
{
    memset(Clients, 0, sizeof(Clients));
    memset(char48, 0, sizeof(char48));
}

eqEventHandler::~eqEventHandler()
{
    for (eqEventMonitor* client : Clients)
    {
        if (client)
        {
            RemoveClient(client);
        }
    }
}

void eqEventHandler::RemoveClient(eqEventMonitor* client)
{
    if (!client->Handler)
    {
        Errorf("RemoveClient: not added?");
    }

    Clients[client->Index] = nullptr;

    client->Handler = nullptr;
    client->Index = -1;
}

void eqEventHandler::Update()
{
    return stub<member_func_t<void, eqEventHandler>>(0x4A1790, this);
}

eqEventMonitor::~eqEventMonitor()
{
    if (Handler)
    {
        Handler->RemoveClient(this);
    }
}
