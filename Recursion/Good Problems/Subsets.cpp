#include<iostream>
using namespace std;
void subsets(string &str,string s,int idx){
    if(str.size()==idx){
        cout<<s<<endl;
        return;
    }
    subsets(str,s+str[idx],idx+1);
    subsets(str,s,idx+1);
}
int main(){
    string str="abc";
    subsets(str,"",0);
}