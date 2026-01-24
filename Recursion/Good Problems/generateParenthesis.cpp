#include <iostream>
using namespace std;
#include <vector>
void genParen(int &n, string s, vector<string> &v, int left, int right)
{
    if (s.size() / 2 == n)
    {
        v.push_back(s);
        return;
    }
    if (left < n)
        genParen(n, s + '(', v, left + 1, right);
    if (left > right && right <= n)
        genParen(n, s + ')', v, left, right + 1);
}
vector<string> generateParenthesis(int n)
{
    vector<string> v;
    genParen(n, "", v, 0, 0);
    return v;
}
int main(){
    int n=4;
    vector<string> ans;
    ans=generateParenthesis(n);
    for(auto str:ans){
        cout<<str<<endl;
    }
}