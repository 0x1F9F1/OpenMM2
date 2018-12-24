#include "stdafx.h"
#include "datCallback.h"

datCallback::datCallback()
    : _class(NULL)
    , _callback(NULL)
    , _parameter(NULL)
{ }

datCallback::datCallback(void(*callback)())
    : _class((Base*)callback)
    , _callback(0x4C7BE3 | ParamCount0)
    , _parameter(NULL)
{ }

datCallback::datCallback(void(__stdcall *callback)(void*), void* parameter)
    : _class((Base*)callback)
    , _callback(0x4C7BE3 | ParamCount1)
    , _parameter(parameter)
{ }

datCallback::datCallback(void(__stdcall *callback)())
    : _class((Base*)callback)
    , _callback(0x4C7BE3 | ParamCount0)
    , _parameter(NULL)
{ }

datCallback::datCallback(void(__stdcall *callback)(void*, void*), void* parameter)
    : _class((Base*)callback)
    , _callback(0x4C7BE3 | ParamCount2)
    , _parameter(parameter)
{ }

void datCallback::Call(void* parameter)
{
    auto callback = _get_callback();
    auto flags = _get_flags();

    if (flags)
    {
        if (_class)
        {
            switch (flags)
            {
            case ParamCount0: return virtual_callback(callback);
            case ParamCount1: return virtual_callback(callback, _parameter);
            case ParamCount2: return virtual_callback(callback, _parameter, parameter);
            }
        }
        else
        {
            switch (flags)
            {
            case ParamCount0: return method_callback(callback);
            case ParamCount1: return method_callback(callback, _parameter);
            case ParamCount2: return method_callback(callback, _parameter, parameter);
            }
        }
    }
}