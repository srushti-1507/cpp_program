#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void input()
    {
        cin >> real >> imag;
    }

    void add(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }

    void sub(Complex c1, Complex c2)
    {
        real = c1.real - c2.real;
        imag = c1.imag - c2.imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number (real imaginary): ";
    c1.input();

    cout << "Enter second complex number (real imaginary): ";
    c2.input();

    c3.add(c1, c2);
    cout << "Addition = ";
    c3.display();

    c3.sub(c1, c2);
    cout << "Subtraction = ";
    c3.display();

    return 0;
    
}