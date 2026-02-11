#include<iostream>
using namespace std;
#include<vector>
#include<list>
#include<queue>
#include<unordered_set>
#include <climits>
vector<list<int>> graph;
void addEdge(int src,int dest,bool bidirectional){
    graph[src].push_back(dest);
    if(bidirectional){
        graph[dest].push_back(src);
    }
}

void bfs(int start,int end){
    unordered_set<int> visited;
    queue<int> q;
    q.push(start);
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        visited.insert(curr);
        for(auto neighbour:graph[curr]){
            if(!visited.count(neighbour)){
                q.push(neighbour);
                visited.insert(neighbour);
            }
        }
        cout<<curr<<" ";
    }cout<<endl;

}
int countSmallestPath(int start,int end,vector<int> &dist){
    unordered_set<int> visited;
    queue<int> q;
    dist[start]=0;
    q.push(start);
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        visited.insert(curr);
        for(auto neighbour:graph[curr]){
            if(!visited.count(neighbour)){
                q.push(neighbour);
                dist[neighbour]=dist[curr]+1;
                visited.insert(neighbour);
            }
        }
        
    }
    return dist[end];
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
    bfs(start,end);
    vector<int>dist(v,INT_MAX);
    cout<<countSmallestPath(start,end,dist);
}