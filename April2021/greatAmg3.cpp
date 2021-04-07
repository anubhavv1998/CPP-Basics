#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three elements to find greatest of them"<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c)
        cout<<a<<" is greatest"<<endl;
    else if(b>a && b>c)
        cout<<b<<" is greatest"<<endl;
    else
        cout<<c<<" is greatest";
    return 0;
}