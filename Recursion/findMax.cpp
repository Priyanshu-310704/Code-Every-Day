#include<iostream>
#include<climits>
using namespace std;
int MAX(int arr[],int n,int maxi){
    if(n==-1)return maxi;
    maxi=max(maxi,arr[n]);
    return MAX(arr,n-1,maxi);
}
int main(){
    int arr[]={1,2,3,9,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=MAX(arr,n-1,INT_MIN);
    cout<<max;
}