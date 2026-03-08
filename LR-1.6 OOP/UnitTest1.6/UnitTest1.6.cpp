#include "pch.h"
#include "CppUnitTest.h"
#include "../LR-1.6 OOP/Real.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestReal
{
    TEST_CLASS(UnitTestReal)
    {
    public:

        TEST_METHOD(TestSubtract)
        {
            // Створюємо два об'єкти Real
            Real r1(10.0);
            Real r2(4.0); 

            // Виконуємо віднімання через Real
            auto result = r1.subtract(r2);

            // Очікуваний результат: 10 - 4 = 6
            Assert::AreEqual(6.0, result.getValue(), 0.0001); // точність для double
        }
    };
}
