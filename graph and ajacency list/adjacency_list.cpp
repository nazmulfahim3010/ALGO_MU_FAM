#include<bits/stdc++.h>
using namespace std;
int main(){
    int vertix,edge;
    cout<<" enter vertix number : ";
    cin>>vertix;
    cout<<" enter edge number : ";
    cin>>edge;
    vector<int>adj_mat[vertix];

    for(int i=0;i<edge;i++){
        int a,b;
         cin>>a>>b;
         adj_mat[a].push_back(b);
         adj_mat[b].push_back(a);
    }

    cout<<" adjacency list is \n";

    for(int i=0;i<vertix;i++){
      cout<<i<<" -->  ";
      for(auto item : adj_mat[i]){
         cout<<item<<"  ";
      }
      cout<<"\n";
    }
}

   //          1  --- 3
    //     /   |      |
    //  0      |      |   
    //     \   |      |
    //         2  --- 4

// 0 1
// 0 2
// 1 2 
// 1 3
// 2 4
// 3 4