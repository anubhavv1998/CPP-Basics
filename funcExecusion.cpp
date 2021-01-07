#include<iostream>
using namespace std;
void fun1()
{
    cout<<"Inside function 1"<<endl;
}
void fun2()
{
    fun1();
    cout<<"Inside function 2"<<endl;
}
int main()
{
    cout<<"Main starts"<<endl;
    fun2();
    fun1();
    cout<<"Main ends"<<endl;
    return 0;
}