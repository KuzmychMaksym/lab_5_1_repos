#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5_1/lab_5_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = g(6, 4, 3);
			Assert::AreEqual(43.0, t);
		}
	};
}
