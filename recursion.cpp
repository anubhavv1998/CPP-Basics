#include<iostream>
using namespace std;

void rec(int x)
{
    if(x==0)
    return;
    else  
    cout<<"Helllo ";
    rec(x-1);
    cout<<"Hii";    
}
int main()
{
    rec(3);
    
    return 0;
}
