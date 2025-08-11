#include<bits/stdc++.h>
using namespace std;
int knapsack(vector<int>&p,vector<int>&v,int w,int item);
int main(){
    
    int n;
    cin>>n;
    vector<int>p(n);
    vector<int>v(n);
    int w;
    cin>>w;

    for(int j=0;j<n;j++){
        cin>>v[j];
    }

    for(int i=0;i<n;i++){
        cin>>p[i];
    }

    


    cout<<knapsack(p,v,w,n)<<endl;

}

int knapsack(vector<int> &p,vector<int> &v,int w,int item){

    vector<vector<int>> dp(item+1,vector<int>(w+1,0));

    for(int i=1;i<=item;i++){
        for(int j=0;j<=w;j++){
            if(v[i-1]<=j){
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-v[i-1]]+p[i-1]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[item][w];

 
}

///source:https://www.geeksforgeeks.org/dsa/0-1-knapsack-problem-dp-10/