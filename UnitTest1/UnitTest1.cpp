
#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62REK
{
    TEST_CLASS(UnitTest62REK)
    {
    public:

        int CountOdd(int a[], int n, int i)
        {
            if (i == n)
            {
                return 0;
            }

            int number = a[i];

            if (number % 2 != 0)
            {
                return 1 + CountOdd(a, n, i + 1);
            }
            else
            {
                return CountOdd(a, n, i + 1);
            }
        }

        TEST_METHOD(Test1)
        {
            int a[6] = { 2, 7, 4, 9, -3, 8 };
            Assert::AreEqual(3, CountOdd(a, 6, 0));
        }

        TEST_METHOD(Test2)
        {
            int a[5] = { 2, 4, 6, 8, 10 };
            Assert::AreEqual(0, CountOdd(a, 5, 0));
        }

        TEST_METHOD(Test3)
        {
            int a[5] = { 1, 3, 5, 7, 9 };
            Assert::AreEqual(5, CountOdd(a, 5, 0));
        }

        TEST_METHOD(Test4)
        {
            int a[5] = { -5, -2, 0, 3, 4 };
            Assert::AreEqual(2, CountOdd(a, 5, 0));
        }
    };
}
