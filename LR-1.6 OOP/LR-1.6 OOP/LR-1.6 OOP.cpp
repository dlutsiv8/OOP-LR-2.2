#include <iostream>
#include "Real.h"

using namespace std;

int main() {

    // --- Створення об'єктів ---
    Real r1;
    r1.Init(10.0);

    Real r2(5.0);

    cout << "r1: ";
    r1.Display();

    cout << "\nr2: ";
    r2.Display();

    // --- Введення з клавіатури ---
    Real r3;
    cout << "\n\nEnter real number: ";
    r3.Read();

    cout << "You entered: ";
    r3.Display();

    // --- Арифметичні операції ---
    auto mult = r1.multiply(r2);
    auto sub = r1.subtract(r2);

    cout << "\nMultiply result: " << mult.toString();
    cout << "\nSubtract result: " << sub.toString();

    // --- Робота з контейнером ---
    Real realObj(16.0);

    cout << "\n\nReal object: ";
    realObj.Display();

    Real rootRes = realObj.root(2);
    cout << "\nRoot (degree 2): ";
    rootRes.Display();

    Real piRes = realObj.piPower(3);
    cout << "\nPi power 3: ";
    piRes.Display();

    // --- Масив об'єктів ---
    Real arr[3];

    arr[0].Init(4.0);
    arr[1].Init(9.0);
    arr[2].Init(25.0);

    cout << "\n\nArray of Real objects:\n";

    for (int i = 0; i < 3; i++) {
        arr[i].Display();

        Real r = arr[i].root(2);
        cout << " -> root(2): ";
        r.Display();

        cout << endl;
    }

    return 0;
}