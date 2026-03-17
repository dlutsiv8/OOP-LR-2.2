#pragma once
#include <iostream>
#include <string>

using namespace std;

// Клас комплексного числа
class Complex
{
private:
    double re; // дійсна частина
    double im; // уявна частина

public:
    // Конструктор без параметрів
    Complex();

    // Конструктор ініціалізації
    Complex(double r, double i);

    // Конструктор копіювання
    Complex(const Complex& other);

    // Методи доступу (читання)
    double getRe() const;
    double getIm() const;

    // Методи запису
    void setRe(double value);
    void setIm(double value);

    // Оператор присвоєння
    Complex& operator=(const Complex& other);

    // Префіксний інкремент
    Complex& operator++();

    // Постфіксний інкремент
    Complex operator++(int);

    // Префіксний декремент
    Complex& operator--();

    // Постфіксний декремент
    Complex operator--(int);

    // Оператори з присвоєнням
    Complex& operator+=(const Complex& other);
    Complex& operator-=(const Complex& other);
    Complex& operator*=(const Complex& other);
    Complex& operator/=(const Complex& other);

    // Перетворення об'єкта у рядок
    operator string() const;

    // Бінарні оператори (дружні функції)
    friend Complex operator+(const Complex& a, const Complex& b);
    friend Complex operator-(const Complex& a, const Complex& b);
    friend Complex operator*(const Complex& a, const Complex& b);
    friend Complex operator/(const Complex& a, const Complex& b);

    // Потокове введення / виведення
    friend ostream& operator<<(ostream& out, const Complex& c);
    friend istream& operator>>(istream& in, Complex& c);
};
