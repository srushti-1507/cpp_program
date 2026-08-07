#include<iostream>
#include<string>
using namespace std;

class Employee
{
 public:
    int EmployeeID;
    string name;
    float salary;
    void display()


{
    cout<<" employee ID. "<< EmployeeID <<endl;
    cout<<" name. "<< name <<endl;
    cout<<" salary. "<< salary <<endl;
}
 };  
 int main()
 {
    Employee e1;
    e1.EmployeeID=146;
    e1.name="srushti";
    e1.salary=75000;
    e1.display();

    return 0;
 }