#include<iostream>
using namespace std;
int power(int x,int n){
    if(n==0)return 1;
    return x*power(x,n-1);
}
int countDigits(int n){
    if(n/10==0)return 1;
    return 1+countDigits(n/10);
}
int reverse(int n){
    if(n/10==0)return n;
    return n%10*power(10,countDigits(n)-1)+reverse(n/10);
}
int main(){
    int n=12345;
    cout<<reverse(n);
}