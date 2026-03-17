#pragma once
#include "Number.h"

class Real
{
private:
    Number num; // композиція

public:
    // доступ
    Number getNumber() const;
    bool setNumber(const Number& n);

    // конструктори
    Real();
    Real(double v);
    Real(const Real& r);

    // основні методи
    void Init(double v);
    void Read();
    void Display() const;
    string toString() const;

    // спеціальні функції
    Real root(int degree) const;
    Real piPower(int degree) const;

    // дружні оператори
    friend Real operator*(const Real& a, const Real& b);
    friend Real operator-(const Real& a, const Real& b);

    friend ostream& operator<<(ostream& out, const Real& r);
    friend istream& operator>>(istream& in, Real& r);

    ~Real();
};

