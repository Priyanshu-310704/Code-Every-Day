#include<iostream>
using namespace std;
#include<vector>
#include<list>
#include<unordered_set>
vector<list<int>> graph;
void addEdge(int src,int dest,bool bidirectional){
    graph[src].push_back(dest);
    if(bidirectional){
        graph[dest].push_back(src);
    }
}
unordered_set<int> visited;
bool dfs(int curr,int end){
    if(curr==end)return true;
    visited.insert(curr);
    for(auto neighbour:graph[curr]){
        if(!visited.count(neighbour)){
            bool result=dfs(neighbour,end);
            if(result)return result;
        }
    }
    return false;
}
bool hasPath(int src,int dest){
    return dfs(src,dest);
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
    cout<<hasPath(start,end);
}