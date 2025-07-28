#include<bits/stdc++.h>
using namespace std;
int main(void){
    int r1,c1,r2,c2;
    cout<<"provid row and column size of mat 1:\n";

    cin>>r1>>c1;

    cout<<"provid row and column size of mat 2:\n";

    cin>>r2>>c2;

    vector<vector<int>> m1(r1,vector<int>(c1,0));
    vector<vector<int>> m2(r2,vector<int>(c2,0));
    

    if(r1==r2 && c1==c2){
        int r=r1,c=c2;//ektra nilei hoibe code sundor korar jonno khali cause conditione sob kichu clear kora ache.
        vector<vector<int>> result(r,vector<int>(c,0));

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                result[i][j]=m1[i][j]+m2[i][j];
            }
        }
          for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<result[i][j]<<"\t";
            }
            cout<<"\n";
        }

    }

}