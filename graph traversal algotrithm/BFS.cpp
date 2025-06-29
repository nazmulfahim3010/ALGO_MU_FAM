#include<bits/stdc++.h>
using namespace std;
const int MAX=100;
int vertex,edge;
int path[MAX]; 
vector<int>graph[MAX];
vector<int> path;
void BFS(src);

int main(void){
    cout<<"insert vertex: ";
    cin>>vertex;
    cout<<"Insert edge: ";
    cin>>edge;

    for(int i=0;i<edge;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_bac(b);
        graph[b].push_back(a);
    }
    int src;
    BFS(src);
    

}
void BFS(src){
    bool visit[MAX]={false};
    queue<int>temp;
    int item;
    visit[src]=true;
    temp.push(src);
    while(!temp.empty()){
        
    }
}