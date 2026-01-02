#include<iostream>
using namespace std;
void print(int arr[],int n){
    if(n==-1)return;
    print(arr,n-1);
    cout<<arr[n]<<" ";
}
int main(){
    int arr[]={2,4,6,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n-1);
}
