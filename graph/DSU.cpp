#include<iostream>
using namespace std;
#include<vector>
int find(vector<int>&par,int x){
    if(par[x]==x)return x;
    return par[x]=find(par,par[x]);
}
void Union(vector<int>&par,vector<int>&rank,int a,int b){
    int p=find(par,a);
    int q=find(par,b);
    if(rank[p]>=rank[q]){
        par[q]=p;
        rank[p]++;
    }
    else{
        par[p]=q;
        rank[q]++;
    }

}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> par(n+1);
    vector<int> rank(n+1,0);
    for(int i=0;i<n;i++){
        par[i]=i;
    }
    while(m--){
        string op;
        cin>>op;
        if(op=="union"){
            int a,b;
            cin>>a>>b;
            Union(par,rank,a,b);
            cout<<"union done"<<endl;
        }
        else{
            int x;
            cin>>x;
            cout<<"Leader of "<<x<<" is "<<find(par,x)<<endl;
        }
    }

}