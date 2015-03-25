// HelloWorldLib.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "HelloWorldLib.h"




HelloWorldLib::HelloWorldLib()
{
}


HelloWorldLib::~HelloWorldLib()
{
}

std::wstring HelloWorldLib::GetHelloWorldText()
{
	return L"Hello world!";
}
