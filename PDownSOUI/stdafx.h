// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//  are changed infrequently
//

#pragma once
// Change these values to use different versions
#ifndef WINVER 
#define WINVER        0x0600
#define _WIN32_WINNT    0x0600
#endif//WINVER

#ifndef LOG_FILTER
#define LOG_FILTER "PDown"
#endif

#define  _CRT_SECURE_NO_WARNINGS
#define	 DLL_SOUI
#include <souistd.h>
#include <core/SHostDialog.h>
#include <control/SMessageBox.h>
#include <control/souictrls.h>
#include <res.mgr/sobjdefattr.h>
#include <com-cfg.h>
#include "trayicon/SShellNotifyIcon.h"


using namespace SOUI;

#define APP_NAME "PDown"
#define APP_NAMEL L"PDown"
#define APP_VER L"v1.1.4.4"

#define ServerIP L"http://localhost:60756/"
#define ServerIPAPI L"http://localhost:60756/api/"



