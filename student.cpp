#include<iostream>
#include<string>
using namespace std;

class student
{
 public:
    int studentID;
    string name;
    float marks ;
    void display()


{
    cout<<" student ID. "<< studentID <<endl;
    cout<<" name. "<< name <<endl;
    cout<<" marks. "<< marks <<endl;
}
 };  
 int main()
 {
     student s1;
    s1.studentID=146;
    s1.name="srushti";
    s1.marks=496;
    s1.display();

    return 0;
 }
