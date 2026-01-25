#include<iostream>
using namespace std;
string countNSay(int n){
    if(n==1)return "1";
    string str=countNSay(n-1);
    string ztr;
    int freq=1;
    char ch=str[0];
    for(int i=1;i<str.size();i++){
        char dh=str[i];
        if(ch==dh){
            freq++;
        }
        else{
            ztr+=(to_string(freq)+ch);
            freq=1;
            ch=dh;
        }
    }
    ztr+=(to_string(freq)+ch);
    return ztr;

} 
int main(){
    int n=5;
    cout<<countNSay(n);
}