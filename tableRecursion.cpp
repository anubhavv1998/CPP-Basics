#include<iostream>
using namespace std;
void table(int x,int i)
{
    
    if(i>10)
    return;
    
    cout<<x*i<<endl;
    return table(x,i+1);   
}

int main()
{
    table(4,1);
    return 0;
}