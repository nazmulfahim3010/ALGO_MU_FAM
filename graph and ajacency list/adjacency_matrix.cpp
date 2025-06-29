#include<bits/stdc++.h>
using namespace std;
const int MAX=100;
int main(){
    int vertix,edge;
    cout<<"enter vertix: ";
    cin>>vertix;
    cout<<"enter edge: ";
    cin>>edge;
    int adj_mat[MAX][MAX]={0};
    for(int i=0;i<edge;i++){
        int a,b;
        cin>>a>>b;
        adj_mat[a][b]=1;
        adj_mat[b][a]=1;
    }

    for(int i=0;i<vertix;i++){
        for(int j=0;j<vertix;j++){
            cout<<adj_mat[i][j]<<" ";

        }
        cout<<"\n";
    }

}

    //         1  --- 3
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