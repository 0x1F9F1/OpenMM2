#include "stdafx.h"
#include "eqEventHandler.h"

defnvar(0x661788, eqEventHandler::SuperQ);

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

void eqEventHandler::RemoveClient(eqEventMonitor * client)
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
    return stub<thiscall_t<void, eqEventHandler>>(0x4A1790, this);
}

eqEventMonitor::~eqEventMonitor()
{
    if (Handler)
    {
        Handler->RemoveClient(this);
    }
}
