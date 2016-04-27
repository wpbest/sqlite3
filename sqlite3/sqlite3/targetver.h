#pragma once

// Including SDKDDKVer.h defines the highest available Windows platform.

// If you wish to build your application for a previous Windows platform, include WinSDKVer.h and
// set the _WIN32_WINNT macro to the platform you wish to support before including SDKDDKVer.h.

//#define _WIN32_WINNT_NT4                    0x0400
//#define _WIN32_WINNT_WIN2K                  0x0500
//#define _WIN32_WINNT_WINXP                  0x0501
//#define _WIN32_WINNT_WS03                   0x0502
//#define _WIN32_WINNT_WIN6                   0x0600
//#define _WIN32_WINNT_VISTA                  0x0600
//#define _WIN32_WINNT_WS08                   0x0600
//#define _WIN32_WINNT_LONGHORN               0x0600
//#define _WIN32_WINNT_WIN7                   0x0601
//#define _WIN32_WINNT_WIN8                   0x0602
//#define _WIN32_WINNT_WINBLUE                0x0603
//#define _WIN32_WINNT_WINTHRESHOLD           0x0A00 /* ABRACADABRA_THRESHOLD*/
//#define _WIN32_WINNT_WIN10                  0x0A00 /* ABRACADABRA_THRESHOLD*/

#ifndef _WIN32_WINNT
#define _WIN32_WINNT _WIN32_WINNT_WIN10
#endif

#include <SDKDDKVer.h>
