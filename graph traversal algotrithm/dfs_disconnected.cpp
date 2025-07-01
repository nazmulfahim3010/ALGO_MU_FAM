#include<bits/stdc++.h>
using namespace std;
const int MAX=100;
int vertex,edge;
bool visited[MAX]={false};
vector<int>graph[MAX];
void DFS(int src);
int main(void){
    cin>>vertex>>edge;
    for(int i=0;i<edge;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int component=1;
    for(int i=1;i<vertex+1;i++){
        if(!visited[i]){
            cout<<"component "<<component<<":";
            DFS(i);
            cout<<endl;
            component++;
        }

    }

}

void DFS(int src){
    if(!visited[src]){
        cout<<src<<" ";
        visited[src]=true;
        for(auto item: graph[src]){
            DFS(item);
        }
    }
}