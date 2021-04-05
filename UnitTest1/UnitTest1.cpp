#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_1.4/Complex.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestToString)
		{
			Complex c;
			c.Init(2, 1);
			Assert::AreEqual("2 + i * 1", c.toString().c_str());
		}
	};
}
