#include<iostream>
using namespace std;
int sumArr(int arr[],int n,int sum){
    if(n==-1)return sum;
    sum+=arr[n];
    return sumArr(arr,n-1,sum);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=sumArr(arr,n-1,0);
    cout<<sum;
}