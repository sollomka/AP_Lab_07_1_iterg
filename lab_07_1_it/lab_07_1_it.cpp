#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab_07_1_iter/lab_07_1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab071it
{
	TEST_CLASS(lab071it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int R[2][2] =

			{
				{13, -14},

				{12, 26}
			};
			int* pR[2] = { R[0], R[1] };
			int S = 0;
			int k = 0;
			Calc(pR, 2, 2, S, k);
			int result = S;
			Assert::AreEqual(result, 51);
		}
	};
}
