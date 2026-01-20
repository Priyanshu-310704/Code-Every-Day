#include<iostream>
using namespace std;
#include<algorithm>
void subsets(string &str,string s,int idx){
    if(idx==str.size()){
        cout<<s<<endl;
        return;
    }
    subsets(str,s+str[idx],idx+1);
    char ch=str[idx];
    while(idx<str.size()){
        if(str[idx]==ch)idx++;
        else break;
    }
    subsets(str,s,idx);

}
int main(){
    string str="aba";
    sort(str.begin(),str.end());
    subsets(str,"",0);
}