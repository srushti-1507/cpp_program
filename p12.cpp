#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a year:";
    cin>>a;
    if(a%4==0)
        cout<<"year is leap year"<<endl;
    else
        cout<<"Year is not a leap year"<<endl;
}
