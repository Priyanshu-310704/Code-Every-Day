#include<iostream>
using namespace std;
#include<list>
#include<vector>
#include<unordered_set>
vector<list<int>> graph;
void addEdge(int src,int dest,bool bidirectional){
    graph[src].push_back(dest);
    if(bidirectional){
        graph[dest].push_back(src);
    }
}
void dfs(int src,unordered_set<int> &visited){
    visited.insert(src);
    for(auto neighbour:graph[src]){
        if(!visited.count(neighbour)){
            dfs(neighbour,visited);
        }
    }
}
int connectedComponent(){
    unordered_set<int> visited;
    int result=0;
    for(int i=0;i<graph.size();i++){
        if(!visited.count(i)){
            dfs(i,visited);
            result++;
        }
    }
    return result;
}
int main(){
    int v;
    cin>>v;
    graph.resize(v,list<int>());
    int edge;
    cin>>edge;
    while(edge--){
        int src,dest;
        cin>>src>>dest;
        addEdge(src,dest,true);
    }
    cout<<connectedComponent();
}