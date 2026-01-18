#include<iostream>
using namespace std;
void TOH(int n,char s,char h,char d){
    if(n==0)return;
    TOH(n-1,s,d,h);
    cout<<s<<" -> "<<d<<endl;
    TOH(n-1,h,s,d);
}
int main(){
    int n=3;
    TOH(n,'A','B','C');
}