//Arithmetic operator example
#include<iostream>
using namespace std;
int main(){
    double a,b;
    cout<<"Enter two numbers to perform basic mathematical tasks "<<endl;
    cin>>a>>b;
    cout<<"Sum is "<<a+b<<endl;
    cout<<"Subtraction is "<<a-b<<endl;
    cout<<"Multiplication is "<<a*b<<endl;
    if(b!=0)
        cout<<"Division is "<<a/b<<endl;
    else
        cout<<"Entera  valid second value for division";
    return 0;
}
