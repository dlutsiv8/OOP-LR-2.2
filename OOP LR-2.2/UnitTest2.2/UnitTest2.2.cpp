#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP LR-2.2/Complex.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestComplex
{
    TEST_CLASS(UnitTestComplex)
    {
    public:

        TEST_METHOD(TestAddition)
        {
            Complex a(3.0, 4.0); // 3 + 4i
            Complex b(1.0, 2.0); // 1 + 2i

            Complex result = a + b; // має бути 4 + 6i

            Assert::AreEqual(4.0, result.getRe(), 1e-10); // дійсна частина
            Assert::AreEqual(6.0, result.getIm(), 1e-10); // уявна частина
        }
    };
}
