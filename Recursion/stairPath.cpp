#include<iostream>
using namespace std;
int stairPath(int n){
    if(n==1||n==2)return n;
    return stairPath(n-1)+stairPath(n-2);
}
int main(){
    int n=5;
    cout<<stairPath(n);
}