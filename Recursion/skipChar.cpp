#include<iostream>
using namespace std;
void skipChar(string &s,char &c,string str,int idx){
    if(s.size()==idx){
        cout<<str;
        return;
    }
    if(s[idx]==c)skipChar(s,c,str,idx+1);
    else skipChar(s,c,str+s[idx],idx+1);
}
int main(){
    string str="";
    string s="classroom";
    char c='s';
    skipChar(s,c,str,0);
}