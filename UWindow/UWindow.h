#pragma once
#include <Windows.h>

HINSTANCE hInst;

class UWindow {
public:
	ATOM                MyRegisterClass(HINSTANCE hInstance);
	BOOL                InitInstance(HINSTANCE, int);
	static LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
	INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

};