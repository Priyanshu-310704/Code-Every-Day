#include<iostream>
using namespace std;
void permutations(string str,string s){
    if(str==""){
        cout<<s<<endl;
        return;
    }
    for(int i=0;i<str.size();i++){
        permutations(str.substr(0,i)+str.substr(i+1),s+str[i]);
    }
}
int main(){
    string str="abc";
    permutations(str,"");
}