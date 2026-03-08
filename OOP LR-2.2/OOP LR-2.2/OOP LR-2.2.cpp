#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    // створення об'єктів

    Complex a;
    Complex b(3, 4);
    Complex c = b;

    // масив об'єктів

    Complex arr[3];

    // ввід

    cin >> a;

    // вивід

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // оператори

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;

    // оператори присвоєння

    a += b;
    cout << "a += b -> " << a << endl;

    a -= b;
    cout << "a -= b -> " << a << endl;

    a *= b;
    cout << "a *= b -> " << a << endl;

    a /= b;
    cout << "a /= b -> " << a << endl;

    // інкремент

    ++a;
    cout << "++a = " << a << endl;

    a++;
    cout << "a++ = " << a << endl;

    // декремент

    --a;
    cout << "--a = " << a << endl;

    a--;
    cout << "a-- = " << a << endl;

    // перетворення у string

    string s = (string)a;
    cout << "String: " << s << endl;

    // розмір класу

    cout << "Size of Complex: " << sizeof(Complex) << endl;

#pragma pack(push,1)
    cout << "Size with pack(1): " << sizeof(Complex) << endl;
#pragma pack(pop)

    return 0;
}