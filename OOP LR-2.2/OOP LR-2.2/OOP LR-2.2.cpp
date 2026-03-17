#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    // Різні способи створення об'єктів

    Complex a;           // конструктор без параметрів
    Complex b(3, 4);     // конструктор ініціалізації
    Complex c = b;       // конструктор копіювання

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    // Введення значення

    cin >> a;

    cout << "a = " << a << endl;

    // Використання бінарних операторів

    Complex d = a + b;
    cout << "a + b = " << d << endl;

    d = a - b;
    cout << "a - b = " << d << endl;

    d = a * b;
    cout << "a * b = " << d << endl;

    d = a / b;
    cout << "a / b = " << d << endl;

    // Інкремент та декремент

    a++;
    ++a;

    a--;
    --a;

    // Перетворення у рядок

    string s = string(a);
    cout << "String: " << s << endl;

    // Масив об'єктів

    Complex arr[3];

    // Розмір класу

    cout << "Size of class: " << sizeof(Complex) << endl;

#pragma pack(push,1)
    cout << "Size with pack(1): " << sizeof(Complex) << endl;
#pragma pack(pop)

    return 0;
}