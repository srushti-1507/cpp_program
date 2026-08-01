#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter 1st number:";
cin>>a;
cout<<"Enter 2nd number:";
cin>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"1st number is :"<<a<<endl;
cout<<"2nd number is :"<<b<<endl;
}