#include<iostream>
using namespace std;
bool isPalindrome(int n,int div){
    if(n<10)return true;
    int first=n/div;
    int last=n%10;
    if(first!=last)return false;
    n=(n%div)/10;
    div/=100;
    return isPalindrome(n,div);
}
bool palindrome(int n){
    if(n<10)return true;
    int div=1;
    while(n/div>=10){
        div*=10;
    }
    return isPalindrome(n,div);

}
int main(){
    int n=12321;
    cout<<palindrome(n);
}