#include<iostream>
using namespace std;
#include<list>
#include<vector>
vector<list<int>> graph;
void addEdge(int src,int dest,bool bidirectional){
    graph[src].push_back(dest);
    if(bidirectional){
        graph[dest].push_back(src);
    }
}
void displayGraph(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"-> ";
        for(int ele:graph[i]){
            cout<<ele<<", ";
        }
    }
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
    displayGraph();
}