#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
    Fraction a(2, 5);
    a.show();

    double dd = a.toDecimal();
    cout << "Decimal of a = " << dd << endl;

    Fraction b(7, 3);
    b.show();
    b.convert();
    b.show();

    Fraction c(5, 2);
    c.show();

    Fraction d = a.plusFraction(b);

    d.show();

    Fraction e;
    e.setFraction(2, 3);
    e = e.plusFraction(c);
    e.show();

    return 0;
}
