#pragma once

#if defined(HELLOWORLDLIB)
#define HELLOWORLDAPI __declspec(dllexport)
#else
#define HELLOWORLDAPI __declspec(dllimport)
#pragma comment(lib, "HelloWorldLib.lib")
#endif

class HELLOWORLDAPI HelloWorldLib
{
public:
	HelloWorldLib();
	~HelloWorldLib();
	std::wstring GetHelloWorldText();
};

