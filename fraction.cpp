#include <iostream>
using namespace std;

class Fraction
{
    int num1, den1, num2, den2;

public:
    void getData()
    {
        cout << "Enter numerator and denominator of first fraction: ";
        cin >> num1 >> den1;

        cout << "Enter numerator and denominator of second fraction: ";
        cin >> num2 >> den2;
    }

    void add()
    {
        int num, den;

        num = (num1 * den2) + (num2 * den1);
        den = den1 * den2;

        cout << "\nAddition = " << num << "/" << den;
    }

    void sub()
    {
        int num, den;

        num = (num1 * den2) - (num2 * den1);
        den = den1 * den2;

        cout << "\nSubtraction = " << num << "/" << den;
    }
};

int main()
{
    Fraction f;

    f.getData();
    f.add();
    f.sub();

    return 0;
}