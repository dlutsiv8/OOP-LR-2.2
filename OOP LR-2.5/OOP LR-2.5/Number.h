#pragma once
#include <iostream>
#include <string>

using namespace std;

class Number
{
private:
    double value; // значення числа

public:
    // доступ
    double getValue() const;
    bool setValue(double v);

    // конструктори
    Number();
    Number(double v);
    Number(const Number& n);

    // основні методи
    void Init(double v);
    void Read();
    void Display() const;
    string toString() const;

    // унарні оператори
    Number& operator++();
    Number operator++(int);
    Number& operator--();
    Number operator--(int);

    // оператор присвоєння
    Number& operator=(const Number& n);

    // перетворення
    operator string() const;

    // дружні бінарні оператори
    friend Number operator*(const Number& a, const Number& b);
    friend Number operator-(const Number& a, const Number& b);

    // потоки
    friend ostream& operator<<(ostream& out, const Number& n);
    friend istream& operator>>(istream& in, Number& n);

    ~Number();
};