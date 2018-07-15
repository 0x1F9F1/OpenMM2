#include "stdafx.h"
#include "eqEventHandler.h"

defnvar(0x661788, eqEventHandler::SuperQ);

eqEventHandler::eqEventHandler()
    : dword4(0)
    , dword8(1)
    , dwordC(0)
    , Clients()
    , gap30()
    , dword38(0)
    , dword3C(0)
    , dword40(0)
    , dword44(0)
    , char48()
    , gap148()
{ }

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

eqEventMonitor::eqEventMonitor()
    : Handler(nullptr)
    , Index(-1)
{ }

eqEventMonitor::~eqEventMonitor()
{
    if (Handler)
    {
        Handler->RemoveClient(this);
    }
}
