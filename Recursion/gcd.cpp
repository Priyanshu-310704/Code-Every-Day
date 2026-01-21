#include<iostream>
using namespace std;
int GCD(int a,int b){
    if(b%a==0)return a;
    return GCD(b%a,a);
}
int main(){
    int a=45;
    int b=27;
    cout<<GCD(a,b);
}
// O(log n) -> tc