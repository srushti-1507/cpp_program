#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;

    cout << "1. Reverse Number" << endl;
    cout << "2. Check Palindrome" << endl;
    cout << "3. Check Armstrong Number" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
        {
            int num, rev = 0, rem;

            cout << "Enter a number: ";
            cin >> num;

            while(num != 0)
            {
                rem = num % 10;
                rev = rev * 10 + rem;
                num = num / 10;
            }

            cout << "Reversed Number = " << rev;
            break;
        }

        case 2:
        {
            int num, original, rev = 0, rem;

            cout << "Enter a number: ";
            cin >> num;

            original = num;

            while(num != 0)
            {
                rem = num % 10;
                rev = rev * 10 + rem;
                num = num / 10;
            }

            if(original == rev)
                cout << "Palindrome Number";
            else
                cout << "Not a Palindrome Number";

            break;
        }

        case 3:
        {
            int num, original, rem, digits = 0, sum = 0;

            cout << "Enter a number: ";
            cin >> num;

            original = num;
            int temp = num;

            while(temp != 0)
            {
                digits++;
                temp = temp / 10;
            }

            temp = num;

            while(temp != 0)
            {
                rem = temp % 10;
                sum = sum + pow(rem, digits);
                temp = temp / 10;
            }

            if(sum == original)
                cout << "Armstrong Number";
            else
                cout << "Not an Armstrong Number";

            break;
        }

        case 4:
            cout << "Program Exited Successfully.";
            break;

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}