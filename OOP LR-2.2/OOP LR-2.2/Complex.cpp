#include "Complex.h"
#include <sstream>
#include <cmath>

// КОНСТРУКТОРИ

Complex::Complex()
{
    re = 0;
    im = 0;
}

Complex::Complex(double r, double i)
{
    re = r;
    im = i;
}

Complex::Complex(const Complex& other)
{
    re = other.re;
    im = other.im;
}

// GET 

double Complex::getRe() const
{
    return re;
}

double Complex::getIm() const
{
    return im;
}

// SET 

void Complex::setRe(double value)
{
    re = value;
}

void Complex::setIm(double value)
{
    im = value;
}

// ОПЕРАТОР ПРИСВОЄННЯ 

Complex& Complex::operator=(const Complex& other)
{
    if (this != &other)
    {
        re = other.re;
        im = other.im;
    }

    return *this;
}

// ІНКРЕМЕНТ 

Complex& Complex::operator++()
{
    re++;
    im++;
    return *this;
}

Complex Complex::operator++(int)
{
    Complex temp(*this);
    re++;
    im++;
    return temp;
}

// ДЕКРЕМЕНТ 

Complex& Complex::operator--()
{
    re--;
    im--;
    return *this;
}

Complex Complex::operator--(int)
{
    Complex temp(*this);
    re--;
    im--;
    return temp;
}

// ОПЕРАТОРИ += -= *= /= 

Complex& Complex::operator+=(const Complex& other)
{
    re += other.re;
    im += other.im;
    return *this;
}

Complex& Complex::operator-=(const Complex& other)
{
    re -= other.re;
    im -= other.im;
    return *this;
}

Complex& Complex::operator*=(const Complex& other)
{
    double r = re * other.re - im * other.im;
    double i = re * other.im + im * other.re;

    re = r;
    im = i;

    return *this;
}

Complex& Complex::operator/=(const Complex& other)
{
    double denominator = other.re * other.re + other.im * other.im;

    double r = (re * other.re + im * other.im) / denominator;
    double i = (im * other.re - re * other.im) / denominator;

    re = r;
    im = i;

    return *this;
}

// STRING 

Complex::operator string() const
{
    stringstream ss;
    ss << re << " + " << im << "i";
    return ss.str();
}

// БІНАРНІ ОПЕРАТОРИ 

Complex operator+(const Complex& a, const Complex& b)
{
    return Complex(a.re + b.re, a.im + b.im);
}

Complex operator-(const Complex& a, const Complex& b)
{
    return Complex(a.re - b.re, a.im - b.im);
}

Complex operator*(const Complex& a, const Complex& b)
{
    return Complex(
        a.re * b.re - a.im * b.im,
        a.re * b.im + a.im * b.re
    );
}

Complex operator/(const Complex& a, const Complex& b)
{
    double denominator = b.re * b.re + b.im * b.im;

    return Complex(
        (a.re * b.re + a.im * b.im) / denominator,
        (a.im * b.re - a.re * b.im) / denominator
    );
}

//  ВИВІД

ostream& operator<<(ostream& out, const Complex& c)
{
    out << c.re << " + " << c.im << "i";
    return out;
}

// ВВІД 

istream& operator>>(istream& in, Complex& c)
{
    cout << "Enter real part: ";
    in >> c.re;

    cout << "Enter imaginary part: ";
    in >> c.im;

    return in;
}