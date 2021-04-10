#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main(){
    vector<int> v{10,20,30,4,5};
    int sum=0;
    sum=accumulate(v.begin(),v.end(),sum);
    cout<<sum;
    return 0;
}
