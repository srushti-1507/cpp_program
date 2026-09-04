#include<iostream>
using namespace std;

class SavingAccount
{
    int acno;
    string name;
    float balance;
    float intrate;

public:

    SavingAccount(int a,string n,float b, float i)
{
    acno = a;
    name = n;
    balance = b;
    intrate = i;

}
void deposite()
{
    float amt;
    cout << "Enter amount to deposite:";
    cin >> amt;
    balance = balance + amt;

}
void withdraw()
{
    float amt;
    cout <<"Enter amount to withdraw :";
    cin >> amt;
    balance = balance - amt;
}
void calculateInterest()
{
    float interest;
    interest = balance * intrate / 100;
    cout<<"Interest = "<< interest <<endl;
}
class CheckingAccount
{
    float cbalance;
public:
    CheckingAccount(float b)
    {
        cbalance = b;
    } 
    void deposite(float amt)
    {
        cbalance = cbalance + amt;
    }
    void display()
    {
        cout << "Checking Account Balance = "<<cbalance <<endl;
    }
};
void transfer(CheckingAccount &ca)
{
    float amt;
    cout <<"Enter amount to transfer to Checking Account : ";
    cin >> amt;

    if (amt <= balance)
    {
        balance = balance - amt;
        ca.deposite(amt);

        cout <<"Transaction Successful" <<endl;
    }
    else
    {
        cout << "Insufficient Balance !" << endl;
    }
}
void display()
{
    cout << "\nAccount Number = "<< acno << endl;
    cout <<"Name = "<< name << endl;
    cout <<"Balance = "<< balance << endl;
    cout <<" interest Rate " <<intrate <<"%"<<endl;
}
};
int main()
{
    SavingAccount sa(101,"srushti",5000,5);
    SavingAccount::CheckingAccount ca(1000);

    sa.deposite();
    sa.withdraw();
    sa.transfer(ca);
    sa.calculateInterest();
    sa.display();
    ca.display();

    return 0;
}