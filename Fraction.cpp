//Fraction.cpp

#include <iostream>
#include "Fraction.h"

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {
    if (denominator == 0) denominator = 1;
}

Fraction::Fraction(const Fraction& other) : numerator(other.numerator), denominator(other.denominator){}

int Fraction::getNumerator() const { return numerator; }
int Fraction::getDenominator() const { return denominator; }

void Fraction::setNumerator(int num) { numerator = num; }
void Fraction::setDenominator(int denom) { if (denom != 0) denominator = denom; }

void Fraction::simplify(){
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
}

Fraction Fraction::operator+(const Fraction& other) const{
    int num = numerator * other.denominator + other.numerator * denominator;
     int denom = denominator * other.denominator;
    Fraction result(num, denom);
    result.simplify();
    return result;
}

Fraction Fraction::operator-(const Fraction& other) const{
    int num = numerator * other.denominator - other.numerator * denominator;
     int denom = denominator * other.denominator;
    Fraction result(num, denom);
    result.simplify();
    return result;
}

Fraction Fraction::operator*(const Fraction& other) const{
    int num = numerator * other.numerator;
    int denom = denominator * other.denominator;
    Fraction result(num, denom);
    result.simplify();
    return result;
}

Fraction Fraction::operator/(const Fraction& other) const{
    if (other.numerator == 0) return Fraction(0,1);
    int num = numerator * other.denominator;
    int denom = denominator * other.numerator;
    Fraction result(num, denom);
    result.simplify();
    return result;
}

void Fraction::print() const{
    std::cout << numerator << "/" << denominator << std::endl;
}
