#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number to find sum "<<endl;
    cin>>a;
    if(a!=0)
    cout<<a*(a+1)/2;
    else
    {
        cout<<"invalid"<<endl;
    }
    return 0;
}