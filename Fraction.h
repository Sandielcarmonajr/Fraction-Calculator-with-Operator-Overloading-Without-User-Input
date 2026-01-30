//Fraction.h

class Fraction{
    private:
       int numerator;
       int denominator;
       
    public:
        Fraction();
        Fraction(int num, int denom);
        Fraction(const Fraction& other);
         
        int getNumerator() const;
        int getDenominator() const;
        
        
        void setNumerator(int num);
        void setDenominator(int denom);
        
        
        Fraction operator+(const Fraction& other) const;
        Fraction operator-(const Fraction& other) const;
        Fraction operator*(const Fraction& other) const;
        Fraction operator/(const Fraction& other) const;
        
        void print() const;
        void simplify();
        
};
