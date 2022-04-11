#include "Complex1.h"

bool double_equals(double l, double r)
{
    return abs(l - r) < 0.001;
}

Complex::Complex() : Complex(0, 0) {}

Complex::Complex(double real, double imag)
{
    real_data = real;
    imag_data = imag;
}

bool Complex::is_real() const
{
    return imag() == 0;
}

double Complex::real() const
{
    return real_data;
}

double Complex::imag() const
{
    return imag_data;
}

double Complex::abs() const
{
    return sqrt(real() * real() + imag() * imag());
}

Complex Complex::conjugate() const
{
    return { real(), -imag() };
}

Complex& Complex::operator++()
{
    real_data++;
    return *this;
}

Complex Complex::operator++(int)
{
    Complex copy = *this;
    ++(*this);
    return copy;
}

Complex& Complex::operator--()
{
    real_data--;
    return *this;
}

Complex Complex::operator--(int)
{
    Complex copy = *this;
    --(*this);
    return copy;
}

Complex& Complex::operator()(double real, double imag)
{
    imag_data = imag;
    real_data = real;
    return *this;
}

Complex operator+(const Complex& l, const Complex& r)
{
    return { l.real() + r.real(),l.imag() + r.imag() };
}

Complex operator+(const Complex& l, double r)
{
    return l + Complex(r, 0);
}

Complex operator+(double l, const Complex& r)
{
    return Complex(l, 0) + r;
}

Complex operator-(const Complex& l, const Complex& r)
{
    return { l.real() - r.real(),l.imag() - r.imag() };
}

Complex operator-(const Complex& l, double r)
{
    return l - Complex(r, 0);
}

Complex operator-(double l, const Complex& r)
{
    return Complex(l, 0) - r;
}

Complex operator*(const Complex& l, const Complex& r)
{
    return { l.real() * r.real() - l.imag() * r.imag(),
    l.real() * r.imag() + l.imag() * r.real() };
}

Complex operator*(const Complex& l, double r)
{
    return l * Complex(r, 0);
}

Complex operator*(double l, const Complex& r)
{
    return Complex(l, 0) * r;
}

Complex operator-(const Complex& obj)
{
    return { -obj.real(),-obj.imag() };
}

bool operator==(const Complex& l, const Complex& r)
{
    if (l.real() != r.real())
        return false;
    if (l.imag() != r.imag())
        return false;
    return true;
}

bool operator!=(const Complex& l, const Complex& r)
{
    return !(l == r);
}

std::ostream& operator<<(std::ostream& out, const Complex& complex)
{
    if (complex.real() == 0 || complex.imag() == 0)
        return out;

    if (complex.is_real())
        out << complex.real();
    else
    {
        if (complex.real() == 0)
        {
            out << complex.imag() << "i";
        }
        else
        {
            out << "{" << complex.real() << "," << complex.imag() << "}";
        }
    }

    return out;
}