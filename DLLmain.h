/****************************************************************************
*                                                                           *
*   DLLmain.h                                                               *
*                                                                           *
*   Licensed under the Apache License, Version 2.0 (the "License");         *
*   you may not use this file except in compliance with the License.        *
*   You may obtain a copy of the License at                                 *
*                                                                           *
*   http://www.apache.org/licenses/LICENSE-2.0                              *
*                                                                           *
*   Unless required by applicable law or agreed to in writing, software     *
*   distributed under the License is distributed on an "AS IS" BASIS,       *
*   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.*
*   See the License for the specific language governing permissions and     *
*   limitations under the License.                                          *
*                                                                           *
*---------------------------------------------------------------------------*
*                                                                           *
*   https://github.com/olivier-verville/D2Template                          *
*                                                                           *
*   D2Template core file, do not modify unless you know what you're doing   *
*                                                                           *
*****************************************************************************/

#pragma once

#define WIN32_LEAN_AND_MEAN
#define _CRT_SECURE_NO_DEPRECATE
#define _WIN32_WINNT 0x600

#include <windows.h>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

#define DLLBASE_BNCLIENT        (DWORD)LoadLibraryA("Bnclient.dll")
#define DLLBASE_D2CLIENT        (DWORD)LoadLibraryA("D2Client.dll")
#define DLLBASE_D2CMP           (DWORD)LoadLibraryA("D2CMP.dll")
#define DLLBASE_D2COMMON        (DWORD)LoadLibraryA("D2Common.dll")
#define DLLBASE_D2DDRAW         (DWORD)LoadLibraryA("D2DDraw.dll")
#define DLLBASE_D2DIRECT3D      (DWORD)LoadLibraryA("D2Direct3D.dll")
#define DLLBASE_D2GAME          (DWORD)LoadLibraryA("D2Game.dll")
#define DLLBASE_D2GDI           (DWORD)LoadLibraryA("D2Gdi.dll")
#define DLLBASE_D2GFX           (DWORD)LoadLibraryA("D2Gfx.dll")
#define DLLBASE_D2GLIDE         (DWORD)LoadLibraryA("D2Glide.dll")
#define DLLBASE_D2LANG          (DWORD)LoadLibraryA("D2Lang.dll")
#define DLLBASE_D2LAUNCH        (DWORD)LoadLibraryA("D2Launch.dll")
#define DLLBASE_D2MCPCLIENT     (DWORD)LoadLibraryA("D2MCPClient.dll")
#define DLLBASE_D2MULTI         (DWORD)LoadLibraryA("D2Multi.dll")
#define DLLBASE_D2NET           (DWORD)LoadLibraryA("D2Net.dll")
#define DLLBASE_D2SOUND         (DWORD)LoadLibraryA("D2Sound.dll")
#define DLLBASE_D2WIN           (DWORD)LoadLibraryA("D2Win.dll")
#define DLLBASE_FOG             (DWORD)LoadLibraryA("Fog.dll")
#define DLLBASE_STORM           (DWORD)LoadLibraryA("Storm.dll")
#define DLLBASE_IJL11           (DWORD)LoadLibraryA("ijl11.dll")
#define DLLBASE_BINKW32         (DWORD)LoadLibraryA("binkw32.dll")
#define DLLBASE_SMACKW32        (DWORD)LoadLibraryA("SmackW32.dll")
#define DLLBASE_GLIDE3X         (DWORD)LoadLibraryA("glide3x.dll")

#include "D2Version.h"
#include "HD/D2HDConfig.h"
#include "D2Constants.h"
#include "D2Structs.h"
#include "D2Ptrs.h"
#include "D2Vars.h"
#include "D2Stubs.h"

#include "TemplateIncludes.h"

struct DLLBaseStrc
{
    char* szName;
    DWORD dwAddress;
};

struct DLLPatchStrc
{
    int nDLL;
    PointerOffset stAddresses;
    DWORD dwData;
    BOOL bRelative;
    size_t nPatchSize;
};

enum D2TEMPLATE_DLL_FILES
{
    D2DLL_BINKW32,
    D2DLL_BNCLIENT,
    D2DLL_D2CLIENT,
    D2DLL_D2CMP,
    D2DLL_D2COMMON,
    D2DLL_D2DDRAW,
    D2DLL_D2DIRECT3D,
    D2DLL_D2GAME,
    D2DLL_D2GDI,
    D2DLL_D2GFX,
    D2DLL_D2GLIDE,
    D2DLL_D2LANG,
    D2DLL_D2LAUNCH,
    D2DLL_D2MCPCLIENT,
    D2DLL_D2MULTI,
    D2DLL_D2NET,
    D2DLL_D2SOUND,
    D2DLL_D2WIN,
    D2DLL_FOG,
    D2DLL_GLIDE3X,
    D2DLL_IJL11,
    D2DLL_SMACKW32,
    D2DLL_STORM,
    D2DLL_INVALID
};

static DLLBaseStrc gptDllFiles[] =
{
    { "Binkw32.dll", NULL },
    { "BnClient.dll", NULL },
    { "D2Client.dll", NULL },
    { "D2CMP.dll", NULL },
    { "D2Common.dll", NULL },
    { "D2DDraw.dll", NULL },
    { "D2Direct3D.dll", NULL },
    { "D2Game.dll", NULL },
    { "D2Gdi.dll", NULL },
    { "D2Gfx.dll", NULL },
    { "D2Glide.dll", NULL },
    { "D2Lang.dll", NULL },
    { "D2Launch.dll", NULL },
    { "D2MCPClient.dll", NULL },
    { "D2Multi.dll", NULL },
    { "D2Net.dll", NULL },
    { "D2Sound.dll", NULL },
    { "D2Win.dll", NULL },
    { "Fog.dll", NULL },
    { "Glide3x.dll", NULL },
    { "Ijl11.dll", NULL },
    { "SmackW32.dll", NULL },
    { "Storm.dll", NULL },
};

void __fastcall D2TEMPLATE_FatalError(char* szMessage);