#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]{10,22,11,100,13};
    int n=sizeof(arr)/sizeof(arr[0]);
    /*int res=arr[0];
    for(int i=1;i<n;i++)
        res=max(res,arr[i]);*/
    int res= *max_element(arr,arr+n);
    cout<<res;
    return 0;
}
