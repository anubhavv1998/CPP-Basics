#include<iostream>
using namespace std;

class Addition{
public:
    void sum(int a, int b)
    {
        int c;
        c=a+b;  
    }
    protected:
    int c;
};
class Ans : public Addition{
    public:
    int result(){
        return(c);
    }
};
int main()
{
    Ans add;
    add.sum(10,20);
    cout<<"Addition is "<<add.result()<<endl;
    return 0;
}

