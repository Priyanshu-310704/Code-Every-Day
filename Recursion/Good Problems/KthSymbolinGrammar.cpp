#include<iostream>
using namespace std;
int kthSymbol(int n,int k){
    if(n==1)return 0;
    if(k%2==0)return kthSymbol(n-1,k/2);
    if(k%2!=0)return !(kthSymbol(n-1,k/2+1));
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<kthSymbol(n,k);
}