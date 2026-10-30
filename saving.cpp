#include <iostream>
#include <string>
using namespace std;

class SavingAccount
{
    int accno;
    string name;
    float balance;
    float intrate;

public:

    // Parameterized Constructor
    SavingAccount(int a, string n, float b, float i)
    {
        accno = a;
        name = n;
        balance = b;
        intrate = i;
    }

    void deposit(float amount)
    {
        balance = balance + amount;
    }

    void withdraw(float amount)
    {
        balance = balance - amount;
    }

    void display()
    {
        cout << "\nAccount Number: " << accno;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance;
        cout << "\nInterest Rate: " << intrate << "%";
    }

   class CheckingAccount
{
public:
    void checkTransactions(SavingAccount &sa)
    {
        int transactions;

        cout << "\nEnter monthly transactions: ";
        cin >> transactions;

        if (transactions > 5)
        {
            sa.balance = sa.balance - (sa.balance * 0.01);
            cout << "1% deducted for excess transactions.";
        }
        else
        {
            cout << "No deduction.";
        }
    }
};
};

int main()
{
    SavingAccount sa(101, "Siddhi", 5000, 5);

    sa.deposit(1000);
    sa.withdraw(500);
    SavingAccount::CheckingAccount ca;
    ca.checkTransactions(sa);
    sa.display();

    return 0;
}