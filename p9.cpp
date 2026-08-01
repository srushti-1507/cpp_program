#include<iostream>
using namespace std;
int main(){
    int a,b,c,max;
    cout<<"Enter the number a, b and c";
    cin>>a>>b>>c;
    if(a>b && b>c){
     max=a;
    }
   else if(b>a && b>c){
    max=b;
   }
  else{
    max=c;

  }
  cout<<"Maximum number is"<<max;
}