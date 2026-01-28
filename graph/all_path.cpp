#include<iostream>
using namespace std;
#include<unordered_set>
#include<vector>
#include<list>
vector<list<int>> graph;
vector<vector<int>> result;

void addEdge(int src,int dest,bool bidirectional){
    graph[src].push_back(dest);
    if(bidirectional){
        graph[dest].push_back(src);
    }
}
unordered_set<int> visited;
void dfs(int curr,int end,vector<int>& v){
    if(curr==end){
        v.push_back(curr);
        result.push_back(v);
        v.pop_back();
        return;
    }
    visited.insert(curr);
    v.push_back(curr);
    for(auto neighbour:graph[curr]){
        if(!visited.count(neighbour)){
            dfs(neighbour,end,v);
        }
    }
    v.pop_back();
    visited.erase(curr);
}
void allPath(int start,int end){
    vector<int> v;
    dfs(start,end,v);
}
int main(){
    int v;
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--){
        int src,dest;
        cin>>src>>dest;
        addEdge(src,dest,true);
    }
    int start,end;
    cin>>start>>end;
    allPath(start,end);
    for(auto vec:result){
        for(auto ele: vec){
            cout<<ele<<" -> ";
        }
        cout<<endl;
    }
}