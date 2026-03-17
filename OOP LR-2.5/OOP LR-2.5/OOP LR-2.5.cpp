#include <iostream>
#include "Real.h"

using namespace std;

int main()
{
    Number a(10);
    Number b(5);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    Number c = a * b;
    Number d = a - b;

    cout << "a * b = " << c << endl;
    cout << "a - b = " << d << endl;

    ++a;
    cout << "++a = " << a << endl;

    a--;
    cout << "a-- = " << a << endl;

    Real r1(16);

    cout << "r1 = " << r1 << endl;

    Real r2 = r1.root(2);
    cout << "root = " << r2 << endl;

    Real r3 = r1.piPower(3);
    cout << "pi^3 = " << r3 << endl;

    return 0;
}