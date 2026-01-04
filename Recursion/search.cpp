#include<iostream>
using namespace std;
bool search(int arr[],int x,int idx){
    if(idx==-1)return false;
    return search(arr,x,idx-1)||x==arr[idx];
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ele=5;
    cout<<search(arr,ele,size-1);
}