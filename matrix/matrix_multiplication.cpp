#include<bits/stdc++.h>
using namespace std;
int main(){
    int r1,r2,c1,c2;
    cin>>r1>>c1;
    int mata[r1][c1];
    cin>>r2>>c2;
    int matb[r2][c2];
    if (c1!=r2){
        cout<<"not possible"<<endl;
        return 0;
    }
    vector<vector<int>>matc(r1,vector<int>(c2,0));

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>mata[i][j];
        } 
    }

     for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>matb[i][j];
        }
    }


    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                matc[i][j]+=mata[i][k]*matb[k][j];
            }
        }
    }


    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<matc[i][j]<<" ";
        }
        cout<<endl;
    }


}