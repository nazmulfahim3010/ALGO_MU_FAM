#include<bits/stdc++.h>
using namespace std;
int vertex,edge;
const int MAX=100;
vector<int>graph[MAX];
bool visited[MAX]={false};
void DFS(int src);

int main(void){
    cout<<"VERTEX: ";
    cin>>vertex;
    cout<<"EDGE: ";
    cin>>edge;
    for(int i=0;i<edge;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int src;
    cout<<"PUT THE SOURCE: ";
    cin>>src;
    DFS(src);

}

void DFS(int src){
    if(visited[src]==false){
        visited[src]=true;
        cout<<src<<" ";
        for(auto item: graph[src]){
            DFS(item);
        }
    }
}