#pragma once
#include <Windows.h>


class UWindow {
public:
	UWindow() {

	}
	friend class UCore;

	void WindowInit(HINSTANCE hInstacne);

private:
	ATOM                MyRegisterClass(HINSTANCE hInstance);
	BOOL                InitInstance(HINSTANCE hInstance);
	static LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
	INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

};