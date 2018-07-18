#pragma once

class eqEventMonitor;

class eqEventHandler
{
public:
    eqEventHandler();
    virtual ~eqEventHandler();

    uint32_t dword4;
    uint32_t dword8;
    uint32_t dwordC;
    eqEventMonitor *Clients[8];
    uint8_t gap30[8];
    uint32_t dword38;
    uint32_t dword3C;
    uint32_t dword40;
    uint32_t dword44;
    char char48[256];
    char gap148[0x18];

    void RemoveClient(eqEventMonitor* client);

    void Update(void);

    declstatic(eqEventHandler*, SuperQ);
};

class eqEventMonitor
{
public:
    eqEventMonitor();
    virtual ~eqEventMonitor();

    eqEventHandler *Handler;
    int Index;
};

check_size(eqEventHandler, 0x160);
check_size(eqEventMonitor, 0xC);