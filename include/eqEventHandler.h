#pragma once

class eqEventMonitor;

class eqEventHandler
{
public:
    uint32_t dword4 {0};
    uint32_t dword8 {1};
    uint32_t dwordC {0};
    eqEventMonitor *Clients[8] {nullptr};
    uint8_t gap30[8] {0};
    uint32_t dword38 {0};
    uint32_t dword3C {0};
    uint32_t dword40 {0};
    uint32_t dword44 {0};
    char char48[256] {};
    char gap148[0x18] {};

    eqEventHandler();
    virtual ~eqEventHandler();

    void RemoveClient(eqEventMonitor* client);

    void Update(void);

    decl_static(eqEventHandler*, SuperQ);
};

class eqEventMonitor
{
public:
    eqEventMonitor() = default;

    virtual ~eqEventMonitor();

    eqEventHandler *Handler {nullptr};
    int Index {-1};
};

check_size(eqEventHandler, 0x160);
check_size(eqEventMonitor, 0xC);