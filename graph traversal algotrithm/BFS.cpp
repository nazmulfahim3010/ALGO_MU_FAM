#include<bits/stdc++.h>
using namespace std;
const int MAX=100;
int vertex,edge;

vector<int>graph[MAX];
vector<int> path;
void BFS(int src);

int main(void){
    cout<<"insert vertex: ";
    cin>>vertex;
    cout<<"Insert edge: ";
    cin>>edge;

    for(int i=0;i<edge;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int src;
    cout<<"root node: "; 
    cin>>src;
    BFS(src);
    

}
void BFS(int  src){
    bool visit[MAX]={false};
    queue<int>temp;
    int node_value;
    visit[src]=true;
    temp.push(src);
    while(!temp.empty()){
         node_value=temp.front();
         cout<<node_value<<" ";
         temp.pop();

        for(auto v : graph[node_value]){
            if(visit[v]==false){
                visit[v]=true;
                temp.push(v);
            }
        }
    }
}


// BFS graph traversal:
// https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/