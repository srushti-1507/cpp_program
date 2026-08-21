#include <iostream>
using namespace std;

class Fraction {
    int num, den;

public:
    
    void setValues(int n, int d) {
        num = n;
        den = d;
    }
    Fraction add(Fraction f2) {
        Fraction ans;
        ans.num = (num * f2.den) + (f2.num * den);
        ans.den = den * f2.den;
        return ans;
    }

    
    Fraction subtract(Fraction f2) {
        Fraction ans;
        ans.num = (num * f2.den) - (f2.num * den);
        ans.den = den * f2.den;
        return ans;
    }
    void display() {
        cout << num << "/" << den << "\n";
    }
};

int main() {
    
    Fraction f1, f2, sum, diff;

    
    f1.setValues(5, 2); 
    f2.setValues(3, 4); 

    
    sum = f1.add(f2);
    diff = f1.subtract(f2);

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    return 0;
}