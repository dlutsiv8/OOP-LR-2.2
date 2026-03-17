#include "Complex.h"
#include <sstream>

// Конструктор без параметрів
Complex::Complex()
{
    re = 0;
    im = 0;
}

// Конструктор ініціалізації
Complex::Complex(double r, double i)
{
    re = r;
    im = i;
}

// Конструктор копіювання
Complex::Complex(const Complex& other)
{
    re = other.re;
    im = other.im;
}

// Методи доступу (читання)

double Complex::getRe() const
{
    return re;
}

double Complex::getIm() const
{
    return im;
}

// Методи запису

void Complex::setRe(double value)
{
    re = value;
}

void Complex::setIm(double value)
{
    im = value;
}

// Оператор присвоєння

Complex& Complex::operator=(const Complex& other)
{
    // перевірка самоприсвоєння
    if (this != &other)
    {
        re = other.re;
        im = other.im;
    }

    return *this;
}

// Префіксний інкремент (++a)

Complex& Complex::operator++()
{
    ++re; // збільшуємо дійсну частину
    return *this;
}

// Постфіксний інкремент (a++)

Complex Complex::operator++(int)
{
    Complex temp(*this); // зберігаємо старе значення
    im++;                // збільшуємо уявну частину
    return temp;
}

// Префіксний декремент (--a)

Complex& Complex::operator--()
{
    --re;
    return *this;
}

// Постфіксний декремент (a--)

Complex Complex::operator--(int)
{
    Complex temp(*this);
    im--;
    return temp;
}

// Оператор +=

Complex& Complex::operator+=(const Complex& other)
{
    re += other.re;
    im += other.im;

    return *this;
}

// Оператор -=

Complex& Complex::operator-=(const Complex& other)
{
    re -= other.re;
    im -= other.im;

    return *this;
}

// Оператор *= (множення комплексних чисел)

Complex& Complex::operator*=(const Complex& other)
{
    double r = re * other.re - im * other.im;
    double i = re * other.im + im * other.re;

    re = r;
    im = i;

    return *this;
}

// Оператор /= (ділення комплексних чисел)

Complex& Complex::operator/=(const Complex& other)
{
    double denominator = other.re * other.re + other.im * other.im;

    // перевірка ділення на 0
    if (denominator == 0)
    {
        cout << "Error: division by zero!" << endl;
        exit(1);
    }

    double r = (re * other.re + im * other.im) / denominator;
    double i = (im * other.re - re * other.im) / denominator;

    re = r;
    im = i;

    return *this;
}

// Перетворення об'єкта у рядок

Complex::operator string() const
{
    stringstream ss;

    ss << re << " + " << im << "i";

    return ss.str();
}

// Бінарні оператори

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
    double r = a.re * b.re - a.im * b.im;
    double i = a.re * b.im + a.im * b.re;

    return Complex(r, i);
}

Complex operator/(const Complex& a, const Complex& b)
{
    double denominator = b.re * b.re + b.im * b.im;

    // перевірка ділення на 0
    if (denominator == 0)
    {
        cout << "Error: division by zero!" << endl;
        exit(1);
    }

    double r = (a.re * b.re + a.im * b.im) / denominator;
    double i = (a.im * b.re - a.re * b.im) / denominator;

    return Complex(r, i);
}

// Оператор виведення

ostream& operator<<(ostream& out, const Complex& c)
{
    out << string(c);

    return out;
}

// Оператор введення

istream& operator>>(istream& in, Complex& c)
{
    double r;
    double i;

    cout << "Enter real part: ";
    in >> r;

    cout << "Enter imaginary part: ";
    in >> i;

    // запис через set-методи
    c.setRe(r);
    c.setIm(i);

    return in;
}