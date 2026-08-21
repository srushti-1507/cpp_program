#include <iostream>
using namespace std;

class Fraction {
private:
    int num; 
    int den; 

public:
   
    Fraction(int n = 0, int d = 1) {
        num = n;
        if (d == 0) {
            cout << "Error: Denominator cannot be zero. Setting to 1." << endl;
            den = 1;
        } else {
            den = d;
        }
    }

   
    Fraction add(Fraction f2) {
        Fraction result;
        result.num = (num * f2.den) + (f2.num * den);
        result.den = den * f2.den;
        return result;
    }

    
    Fraction subtract(Fraction f2) {
        Fraction result;
        result.num = (num * f2.den) - (f2.num * den);
        result.den = den * f2.den;
        return result;
    }

    
    void display() {
        cout << num << "/" << den << endl;
    }
};

int main() {
    
    Fraction f1(1, 2); 
    Fraction f2(1, 3); 
    cout << "Fraction 1: ";
    f1.display();
    
    cout << "Fraction 2: ";
    f2.display();
    cout << "-----------------" << endl;
    Fraction sum = f1.add(f2);
    cout << "Addition: ";
    sum.display();
    Fraction diff = f1.subtract(f2);
    cout << "Subtraction: ";
    diff.display();

    return 0;
}