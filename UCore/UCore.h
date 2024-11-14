#pragma once
#include <UWindow/UWindow.h>
//_In_ HINSTANCE hInstance,
//_In_opt_ HINSTANCE hPrevInstance,
//_In_ LPWSTR    lpCmdLine,
//_In_ int       nCmdShow

class UCore {
public:
	UCore(HINSTANCE Inst) {
		Wind.WindowInit(Inst);
	}

	~UCore() {

	}

	UWindow Wind;
};