#include<iostream>
#include<climits>
using namespace std;
bool sorted(int arr[],int n,int prev){
    if(n==-1)return true;
    if(prev<arr[n])return false;
    return sorted(arr,n-1,arr[n]);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<sorted(arr,n-1,INT_MAX);
}