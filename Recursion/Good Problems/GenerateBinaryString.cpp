#include<iostream>
using namespace std;
void generateBinaryString(int n,string s){
    if(s.size()==n){
        cout<<s<<endl;
        return;
    }
    generateBinaryString(n,s+'0');
    if(s.size()==0||s[s.size()-1]!='1')generateBinaryString(n,s+'1');
}
int main(){
    int n=3;
    generateBinaryString(n,"");
}