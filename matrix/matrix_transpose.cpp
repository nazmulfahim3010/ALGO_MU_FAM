#include<bits/stdc++.h>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"provid row and column size of mat 1:\n";

    cin>>r1>>c1;

    // cout<<"provid row and column size of mat 2:\n";

    // cin>>r2>>c2;

    vector<vector<int>> m1(r1,vector<int>(c1,0));
    vector<vector<int>> m2(r1,vector<int>(c1,0));
    // vector<int>m2[c1][r1]={0}{0};

    for(int i=0;i<r1;i++){ 
        for(int j=0;j<c1;j++){
            int x;
            cin>>x;
            m1[i][j]=x;
        }
        cout<<"\n";
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            m2[i][j]=m1[j][i];//main line for transposing code
            

        }
    }

    cout<<"transposed matrix\n";

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<m2[i][j]<<"\t";
        }
        cout<<"\n";
    }
}