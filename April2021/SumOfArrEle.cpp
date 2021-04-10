#include<numeric>
#include<iostream>
using namespace std;
int main(){
    int arr[]{10,20,30,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    /*for(int i=0;i<n;i++)
        sum=sum+arr[i];*/
    sum=accumulate(arr,arr+n,sum);
    cout<<sum;
    return 0;
}
