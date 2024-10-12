#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
public:
    Fraction(int numerator = 0, int denominator = 1);

    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;

    void print() const;

private:
    int numerator, denominator;
};

#endif // FRACTION_H
