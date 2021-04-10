#include<iostream>
using namespace std;
int input(){
    int a,b,res=0;
    cin>>a>>b;
    res=a+b;
    return res;
}
void output(){
    int opt;
    opt=input();
    cout<<opt;
}

int main(){
    cout<<"Enter 2 numbers to add"<<endl;
    output();
    return 0;
}
