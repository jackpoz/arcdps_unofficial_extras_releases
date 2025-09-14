#pragma once

typedef unsigned int UINT;
typedef unsigned char byte;

typedef void* HMODULE;

// ToDo: replace these with Linux-specific functionalities
#define MAPVK_VSC_TO_VK_EX  (3)
#define CP_UTF8                   65001       // UTF-8 translation
typedef void* HKL;
typedef char *LPSTR;
typedef const char *LPCCH;
typedef wchar_t *LPWSTR;
typedef const wchar_t *LPCWCH;
typedef unsigned long DWORD;
typedef bool *LPBOOL;
UINT MapVirtualKeyExW(UINT uCode, UINT uMapType, HKL dwhkl) { return 0; }
int ToUnicodeEx(UINT wVirtKey, UINT wScanCode, const byte *lpKeyState, LPWSTR pwszBuff, int cchBuff, UINT wFlags, HKL dwhkl) { return 0; }
int WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCCH lpDefaultChar, LPBOOL lpUsedDefaultChar) { return 0; }