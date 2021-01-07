#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
    if(b==0)
    {
        cout<<"Reenter second number";
    }
    else
    {
        cout<<"sum is "<<(a+b)<<endl;
        cout<<"sub is "<<(a-b)<<endl;
        cout<<"mul is "<<(a*b)<<endl;
        cout<<"div is "<<(a/b)<<endl;
    }
    return 0;
}