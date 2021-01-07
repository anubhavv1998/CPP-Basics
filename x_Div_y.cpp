#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter numbers in pair"<<endl;
    for(int i=1;i<11;i++)
    {
        cout<<"Enter pair "<<i<<endl;
        cin>>x>>y;
        if(y==0)
        {
        cout<<"Invalid input"<<endl;
        continue;
        }
        cout<<x/y<<endl;
    }
    return 0;
}
