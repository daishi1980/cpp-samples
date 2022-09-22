#include "stdafx.h"
#include "CppUnitTest.h"
#include "SampleUtils.h"
#include "SamplePoint.h"
#include <afx.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#ifdef _DEBUG
	#define new DEBUG_NEW
#undef THIS_FILE
	static char THIS_FILE[] = __FILE__;
#endif


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
			SamplePoint*  pt = new SamplePoint(1, 7);
			Assert::AreEqual(1, pt->GetX(), L"test3");
			delete pt;
		}
	};
}