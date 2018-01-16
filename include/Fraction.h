#ifndef FRACTION_H
#define FRACTION_H


class Fraction
{
    public:
        Fraction();
        Fraction(int, int);
        Fraction(int, int, int);

        enum FractType { Proper, Improper, Mixed };

        void setWhole(int);
        void setNum(int);
        void setDen(int);
        void setType(FractType);
        void setFraction(int, int);
        void setFraction(int, int, int);
        int getWhole();
        int getNum();
        int getDen();
        int getType();

        double toDecimal();
        void convert();
        Fraction plusFraction(Fraction);
        void show();

        virtual ~Fraction();
    protected:
    private:
        int _whole;
        int _num;
        int _den;
        FractType _type;
};

#endif // FRACTION_H
