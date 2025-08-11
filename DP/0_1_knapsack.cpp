#include<bits/stdc++.h>
using namespace std;
int knapsack(vector<int>&p,vector<int>&v,int w);
int main(){
    vector<int>p;
    vector<int>v;
    int n;
    cin>>n;
    int w;
    cin>>w;

    for(int j=0;j<n;j++){
        cin>>v[j];
    }

    for(int i=0;i<n;i++){
        cin>>p[i];
    }

    


    cout<<knapsack(p,v,w)<<endl;

}

int knapsack(vector<int> &p,vector<int> &v,int w){
    int item=v.size();
    vector<vector<int>> dp(item+1,vector<int>(w+1,0));

    for(int i=0;i<item;i++){
        for(int j=0;j<w;j++){
            dp[i][j]=max(dp[i-1][w],dp[i-1][j-(w-v[i])]+p[i]);
        }
    }
    return dp[item][w];


}