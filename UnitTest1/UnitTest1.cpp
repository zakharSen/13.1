#include "pch.h"
#include "CppUnitTest.h"
#include "../13.1/var.h"
#include "../13.1/var.cpp"
#include "../13.1/dod.h"
#include "../13.1/dod.cpp"
#include "../13.1/sum.h"
#include "../13.1/sum.cpp"
#include "../13.1/13.1.cpp"
using namespace nsDod;
using namespace nsVar;


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			x = 2;
			n = 4;
			a = 1.0;
			dod();
			Assert::AreEqual(a, -1.6, 0.1);

		}
	};
}
