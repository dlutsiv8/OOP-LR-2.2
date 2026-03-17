#include "Number.h"
#include <sstream>

// гетер
double Number::getValue() const
{
    return value;
}

// сетер
bool Number::setValue(double v)
{
    if (v != v) return false;
    value = v;
    return true;
}

// конструктори
Number::Number()
{
    Init(0);
}

Number::Number(double v)
{
    Init(v);
}

Number::Number(const Number& n)
{
    Init(n.value);
}

// ініціалізація
void Number::Init(double v)
{
    setValue(v);
}

// введення
void Number::Read()
{
    double v;
    cout << "value = ";
    cin >> v;
    Init(v);
}

// виведення
void Number::Display() const
{
    cout << string(*this);
}

// рядок
string Number::toString() const
{
    stringstream ss;
    ss << value;
    return ss.str();
}

Number::operator string() const
{
    stringstream ss;
    ss << value;
    return ss.str();
}

// ++
Number& Number::operator++()
{
    ++value;
    return *this;
}

Number Number::operator++(int)
{
    Number temp(*this);
    value++;
    return temp;
}

// --
Number& Number::operator--()
{
    --value;
    return *this;
}

Number Number::operator--(int)
{
    Number temp(*this);
    value--;
    return temp;
}

// =
Number& Number::operator=(const Number& n)
{
    value = n.value;
    return *this;
}

// *
Number operator*(const Number& a, const Number& b)
{
    return Number(a.value * b.value);
}

// -
Number operator-(const Number& a, const Number& b)
{
    return Number(a.value - b.value);
}

// <<
ostream& operator<<(ostream& out, const Number& n)
{
    out << string(n);
    return out;
}

// >>
istream& operator>>(istream& in, Number& n)
{
    n.Read();
    return in;
}

Number::~Number()
{
}