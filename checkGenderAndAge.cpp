#include<iostream>
using namespace std;
int main()
{
    int age;
    char gender;
    cout<<"Enter age and gender(m/f)"<<endl;
    cin>>age>>gender;
    if(gender=='m')
    {
        cout<<"Male ";
        if(age>=18)
        cout<<"Adult";
        else
            cout<<"Kid";
    }
    else if (gender=='f')
    {
        cout<<"Female ";
        if(age>=18)
        cout<<"Adult";
        else 
        cout<<"Kid";
    }
    else
    cout<<"Enter valid gender";
    return 0;
}