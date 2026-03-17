#include "Real.h"
#include <sstream>
#include <cmath>

Number Real::getNumber() const
{
    return num;
}

bool Real::setNumber(const Number& n)
{
    return num.setValue(n.getValue());
}

// конструктори
Real::Real()
{
    Init(0);
}

Real::Real(double v)
{
    Init(v);
}

Real::Real(const Real& r)
{
    Init(r.num.getValue());
}

// ініціалізація
void Real::Init(double v)
{
    num.Init(v);
}

// введення
void Real::Read()
{
    num.Read();
}

// виведення
void Real::Display() const
{
    cout << string(num);
}

// рядок
string Real::toString() const
{
    return num.toString();
}

// корінь
Real Real::root(int degree) const
{
    if (degree == 0)
    {
        cout << "degree cannot be zero" << endl;
        return Real(0);
    }

    return Real(pow(num.getValue(), 1.0 / degree));
}

// π^n
Real Real::piPower(int degree) const
{
    const double PI = 3.141592653589793;
    return Real(pow(PI, degree));
}

// *
Real operator*(const Real& a, const Real& b)
{
    return Real((a.num * b.num).getValue());
}
// -
Real operator-(const Real& a, const Real& b)
{
    return Real((a.num - b.num).getValue());
}

// <<
ostream& operator<<(ostream& out, const Real& r)
{
    out << string(r.num);
    return out;
}

// >>
istream& operator>>(istream& in, Real& r)
{
    r.Read();
    return in;
}

Real::~Real()
{
}
