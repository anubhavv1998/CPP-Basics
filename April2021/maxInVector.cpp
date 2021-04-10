#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v{10,20,11,100,14,4};
    int res=*max_element(v.begin(),v.end());
    cout<<res;
    return 0;
}
