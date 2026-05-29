#pragma once
#include<Windows.h>
#include<cstdio>
#define _CRT_SECURE_NO_WARNINGS

LPSTR FormatLastError(DWORD dwError, CHAR szBuffer[]);
