
#include "pch.h"
#include "CppUnitTest.h"
#include "../laba05/laba05.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCalculateC)
        {
            double s = 2;
            double t = 1;

            double x = f(1, t + s, s);
            double y = f(t, s * t, 1);
            double z = f(s, 1, t);

            double C = (x + y) / (1 + z * z);

            Assert::AreEqual(0.737747, C, 0.000001);
        }
    };
}
