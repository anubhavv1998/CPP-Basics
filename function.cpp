#include<iostream>
using namespace std;

int get()
{
    int a,b;
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
    return(a+b);
}
int set()
{
    cout<<get()<<" is the addition "<<endl;
    return 0;
}

int main()
{
    set();
    return 0;
}