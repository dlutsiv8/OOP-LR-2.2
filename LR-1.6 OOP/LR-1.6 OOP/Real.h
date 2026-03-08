#pragma once
#include <string>
#include <iostream>

class Real {
private:
    // Вкладений клас Number
    class Number {
    private:
        double value;

    public:
        Number();
        Number(double v);

        double getValue() const;
        bool setValue(double v);

        void Init(double v);
        void Read();
        void Display() const;
        std::string toString() const;

        Number multiply(const Number& other) const;
        Number subtract(const Number& other) const;
    };

    Number num; // поле-контейнер

public:
    // Конструктори
    Real();
    Real(double v);

    double getValue() const;
    bool setValue(double v);

    void Init(double v);
    void Read();
    void Display() const;
    std::string toString() const;

    // Спеціальні методи
    Real root(int degree) const;
    Real piPower(int degree) const;

    // Арифметичні операції
    Number multiply(const Real& other) const;
    Number subtract(const Real& other) const;
};
