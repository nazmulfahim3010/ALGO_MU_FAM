#include<bits/stdc++.h>
using namespace std;
int lcs(string s1,string s2);
int main(){
    string s2;
    string s1;

    cout<<"Entry two string: ";
    cin>>s1>>s2;
    cout<<lcs(s1,s2)<<endl ;
}
int lcs(string s1,string s2){
    int m=s1.size();
    int n=s2.size();
    
    vector<vector<int>> dp(m+1,vector<int>(n+1,0)); 

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }

    return dp[m][n];
}


///https://www.geeksforgeeks.org/dsa/longest-common-subsequence-dp-4/