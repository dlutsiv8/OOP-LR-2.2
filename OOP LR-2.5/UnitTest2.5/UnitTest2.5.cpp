#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP LR-2.5/Number.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestNumber
{
    TEST_CLASS(UnitTestNumber)
    {
    public:

        TEST_METHOD(TestMultiplyOperator)
        {
            // Створюємо два об'єкти Number
            Number n1(10.0);
            Number n2(5.0);

            // Використовуємо перевантажений оператор *
            Number result = n1 * n2;

            // Очікуваний результат: 50
            Assert::AreEqual(50.0, result.getValue(), 0.0001);
        }

    };
}