//main.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Fraction.h"

int main() {
    
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < 10; ++i){
        
    int num1 = rand() % 15 + 1;
    int den1 = rand() % 15 + 1;
    int num2 = rand() % 15 + 1;
    int den2 = rand() % 15 + 1;
        
    Fraction frac1(num1, den1);
    Fraction frac2(num2, den2);
    
    int randomOperation = rand() % 4;
    char operation;
    
    switch(randomOperation){
        case 0: operation = '+'; break;
        case 1: operation = '-'; break;
        case 2: operation = '*'; break;
        case 3: operation = '/'; break;
    }
    
    switch(operation){
        case '+': (frac1 + frac2).print(); break;
        case '-': (frac1 - frac2).print(); break;
        case '*': (frac1 * frac2).print(); break;
        case '/': 
            if (frac2.getNumerator() != 0)
                 (frac1 / frac2).print();
            else
              std::cout << "Division by zero is not allowed." << std::endl;
        break;
    }
    
    }
    
    return 0;
}