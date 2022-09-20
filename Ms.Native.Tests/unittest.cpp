#include "stdafx.h"
#include "CppUnitTest.h"
#include "SampleUtils.h"
#include "SamplePoint.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MsNativeTests
{		
	TEST_CLASS(TestCaseName)
	{
	public:
		
		TEST_METHOD(TestName)
		{
			Assert::AreEqual(1, 1);
			Assert::IsTrue(true);
		}

	};

	TEST_CLASS(SampleTest)
	{
	public:

		TEST_METHOD(AddTest)
		{
			Assert::AreEqual(10, Add(3, 7));
		}

		TEST_METHOD(ConstructorTest)
		{
			SamplePoint pt(1, 7);
			Assert::AreEqual(2, pt.GetX(), L"test3");
		}
	};
}