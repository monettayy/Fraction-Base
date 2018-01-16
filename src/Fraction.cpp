#include <iostream>
#include "Fraction.h"
using namespace std;

Fraction::Fraction(): _whole(0), _num(0), _den(0) {}

Fraction::Fraction(int n, int d)
{
    _whole = 0;
    _num = n;
    _den = d;
    _type = _num < _den ? Proper : Improper;
}

Fraction::Fraction(int w, int n, int d)
{
    _whole = w;
    _num = n;
    _den = d;
    _type = Mixed;
}

void Fraction::setWhole(int w)
{
    _whole = w;
}

void Fraction::setNum(int n)
{
    _num = n;
}

void Fraction::setDen(int d)
{
    _den = d;
}

void Fraction::setFraction(int n, int d)
{
    _whole = 0;
    _num = n;
    _den = d;
    _type = _num < _den ? Proper : Improper;
}

void Fraction::setFraction(int w, int n, int d)
{
    _whole = w;
    _num = n;
    _den = d;
    _type = Mixed;
}

void Fraction::setType(FractType f)
{
    _type = f;
}

int Fraction::getWhole()
{
    return _whole;
}

int Fraction::getNum()
{
    return _num;
}

int Fraction::getDen()
{
    return _den;
}

int Fraction::getType()
{
    return _type;
}

double Fraction::toDecimal()
{
    return (double)_num / _den;
}

void Fraction::convert()
{
    if (_type == Mixed)
    {
        setNum(_den * _whole + _num);
        setType(Improper);
    }
    else
    {
        setWhole(_num / _den);
        setNum(_num % _den);
        setType(Mixed);
    }
    setDen(_den);
}

Fraction Fraction::plusFraction(Fraction frac)
{
    if(_type == Mixed)
        convert();

    if (frac.getType() == 2)
        frac.convert();

    int d = _den * frac.getDen();
    int n1 = (d / _den) * _num;
    int n2 = (d / frac.getDen()) * frac.getNum();
    int n = n1 + n2;

    Fraction f(n, d);
    return f;
}

void Fraction::show()
{
    if (_type == Mixed)
        cout << _whole << " " << _num << "/" << _den << endl;
    else
        cout << _num << "/" << _den << endl;
}

Fraction::~Fraction()
{
    //dtor
}
