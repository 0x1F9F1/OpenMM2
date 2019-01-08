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

#include "callback.h"

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
