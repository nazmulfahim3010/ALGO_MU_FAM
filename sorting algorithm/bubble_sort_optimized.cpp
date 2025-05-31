#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a;
    a={12,2,34,100,43,6,87};
    bool is_sort;
    for(int i=0;i<a.size()-1;i++){
        is_sort=false;
        for(int j=0;j<a.size();j++){    
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                is_sort=true;
            }

        }
        if(is_sort==false){
            break;
        }
        
    }

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}