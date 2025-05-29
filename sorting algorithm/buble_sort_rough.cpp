#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a;
    a={12,2,34,100,43,6,87};
    
    for(int i=0;i<a.size()-1;i++){
        for(int j=0;j<a.size();j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" "; 
    }
}