#pragma once
#include <iostream>
#include <string>

using namespace std;

// Клас Complex — комплексне число a + bi
class Complex
{
private:
    double re; // дійсна частина
    double im; // уявна частина

public:

    // КОНСТРУКТОРИ

    // без параметрів
    Complex();

    // ініціалізації
    Complex(double r, double i);

    // копіювання
    Complex(const Complex& other);

    // МЕТОДИ ДОСТУПУ 

    double getRe() const;
    double getIm() const;

    // МЕТОДИ ЗАПИСУ 

    void setRe(double value);
    void setIm(double value);

    // ОПЕРАТОР ПРИСВОЄННЯ 

    Complex& operator=(const Complex& other);

    // УНАРНІ ОПЕРАТОРИ 

    Complex& operator++();      // префіксний ++
    Complex operator++(int);    // постфіксний ++

    Complex& operator--();      // префіксний --
    Complex operator--(int);    // постфіксний --

    // ОПЕРАТОРИ З ПРИСВОЄННЯМ 

    Complex& operator+=(const Complex& other);
    Complex& operator-=(const Complex& other);
    Complex& operator*=(const Complex& other);
    Complex& operator/=(const Complex& other);

    //  ПЕРЕТВОРЕННЯ В STRING 

    operator string() const;

    // ДРУЖНІ БІНАРНІ ОПЕРАТОРИ 

    friend Complex operator+(const Complex& a, const Complex& b);
    friend Complex operator-(const Complex& a, const Complex& b);
    friend Complex operator*(const Complex& a, const Complex& b);
    friend Complex operator/(const Complex& a, const Complex& b);

    // ОПЕРАТОРИ ВВОДУ / ВИВОДУ 

    friend ostream& operator<<(ostream& out, const Complex& c);
    friend istream& operator>>(istream& in, Complex& c);
};
