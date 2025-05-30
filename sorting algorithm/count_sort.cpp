#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={1,0,2,9,3,8,3,7,4,6,4,2,4};
    int maxx=*max_element(a.begin(),a.end());
    
    vector<int>freq_a(maxx+1,0);
    vector<int>pos(maxx+1 ,0);
    vector<int> new_a(a.size());
    
    

    // cout<<maxx<<"\n";
    

    for(int i=0;i<a.size();i++){
        freq_a[a[i]]+=1;
    }

    // for(int i=0;i<maxx;i++){
    //     cout<<freq_a[i]<<" ";
    // }

    cout<<"\n";

    pos[0]=freq_a[0];

    for(int i=1;i<=maxx;i++){
        pos[i]=pos[i-1]+freq_a[i];
        
    }
    
    // for(int i=0;i<maxx;i++){
    //     cout<<pos[i]<<" ";
    // }

    for(int i=a.size()-1;i>=0;i--){
        int temp=a[i];
        new_a[pos[temp]-1]=temp;
        pos[temp]--;

    }

    for(int i=0;i<new_a.size();i++){
        cout<<new_a[i]<<" ";
    }

}
