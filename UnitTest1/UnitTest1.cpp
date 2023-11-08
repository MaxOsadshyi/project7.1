#include "pch.h"
#include "CppUnitTest.h"
#include "../Project7.1/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int** a = { };
			const int rowCount = 3;
			const int colCount = 4;
			Print( a, rowCount, colCount);
			Assert::AreEqual(3, 4);
		}
	};
}
