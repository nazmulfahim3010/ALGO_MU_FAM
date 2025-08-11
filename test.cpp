#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;cin>>t;
  for(int i=0;i<t;i++){
    int n;cin>>n;
    int a1[n],a2[n];
   
    for(int i=0;i<n;i++){
      cin>>a1[i];
    }
    for(int i=0;i<n;i++){
      cin>>a2[i];
    }
    int it=0;
    int x=0;
    int solve=0;

  while(true){
    if(a1[x]>a2[x]){
      it++;
      a1[x]--;
    }
    else{
      it++;
      a1[x]++;
    }
    if(a1[x]==a2[x]){
      x++;
      solve++;
    }
    if(solve==n)break;
   
     
}

}
}