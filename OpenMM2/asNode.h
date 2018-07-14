#pragma once

#include "asCullable.h"

#undef GetClassName

class datParser;

class asNode
    : public asCullable
{
public:
    asNode* Next;
    asNode* Children;
    asNode* Parent;
    uint32_t Flags;
    char *Name;

    asNode();

    virtual ~asNode() override;

    virtual void Update(void);
    virtual void Reset(void);
    virtual void ResChange(int width, int height);
    virtual void UpdatePaused(void);
    virtual void FileIO(datParser &parser);
    virtual void AfterLoad(void);
    virtual void BeforeSave(void);
    virtual bool Save(void);
    virtual bool Load(void);
    virtual char * GetClassName(void);
    virtual const char * GetDirName(void);

    int RemoveChild(asNode* child);
    int RemoveChild(int index);
    asNode* GetChild(int index);
    int NumChildren(void);
    void RemoveAllChildren(void);
    int InsertChild(int index, asNode* child);

    int AddChild(asNode* child);

    void SetName(const char* name);
};

check_size(asNode, 0x18);