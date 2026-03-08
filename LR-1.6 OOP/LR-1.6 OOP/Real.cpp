#include "Real.h"
#include <cmath>
#include <sstream>

using namespace std;

// Реалізація вкладеного класу Number


// Конструктор без параметрів – ініціалізує value нулем
Real::Number::Number() {
    value = 0;
}

// Конструктор з параметром – ініціалізує value через setValue
Real::Number::Number(double v) {
    setValue(v);
}

// Метод зчитування значення
double Real::Number::getValue() const {
    return value;
}

// Метод запису значення з перевіркою на NaN
bool Real::Number::setValue(double v) {
    if (v != v) // перевірка на NaN
        return false;
    value = v;
    return true;
}

// Метод ініціалізації
void Real::Number::Init(double v) {
    setValue(v);
}

// Метод введення значення з клавіатури
void Real::Number::Read() {
    double v;
    cout << "Enter value: ";
    cin >> v;
    setValue(v);
}

// Метод виведення значення
void Real::Number::Display() const {
    cout << value;
}

// Метод перетворення числа у рядок
string Real::Number::toString() const {
    stringstream ss;
    ss << value;
    return ss.str();
}

// Метод множення двох чисел
Real::Number Real::Number::multiply(const Number& other) const {
    return Number(value * other.value);
}

// Метод віднімання двох чисел
Real::Number Real::Number::subtract(const Number& other) const {
    return Number(value - other.value);
}

// Реалізація класу Real (контейнер)


// Конструктор без параметрів
Real::Real() : num(0) {}

// Конструктор з параметром
Real::Real(double v) : num(v) {}

// Метод зчитування значення
double Real::getValue() const {
    return num.getValue();
}

// Метод запису значення
bool Real::setValue(double v) {
    num.Init(v);
    return true;
}

// Метод ініціалізації
void Real::Init(double v) {
    num.Init(v);
}

// Метод введення з клавіатури
void Real::Read() {
    num.Read();
}

// Метод виведення об'єкта
void Real::Display() const {
    cout << "Real number: ";
    num.Display();
}

// Метод перетворення у рядок
string Real::toString() const {
    return num.toString();
}

// Метод обчислення кореня n-го степеня
Real Real::root(int degree) const {
    if (degree == 0) {
        cout << "Degree cannot be zero!\n";
        return Real(0);
    }

    double result = pow(num.getValue(), 1.0 / degree);
    return Real(result);
}

// Метод обчислення числа π у заданому степені
Real Real::piPower(int degree) const {
    const double PI = 3.141592653589793;
    return Real(pow(PI, degree));
}

// Метод множення через Real (використовує Number)
Real::Number Real::multiply(const Real& other) const {
    return num.multiply(other.num);
}

// Метод віднімання через Real (використовує Number)
Real::Number Real::subtract(const Real& other) const {
    return num.subtract(other.num);
}