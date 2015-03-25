#include "stdafx.h"
#include "CppUnitTest.h"
#include "HelloWorldLib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace HelloWorldTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			HelloWorldLib helloWorldLib;
			wstring hellowWorld = helloWorldLib.GetHelloWorldText();
			Assert::AreEqual(hellowWorld.c_str(), L"Hello world!");
		}
	};
}