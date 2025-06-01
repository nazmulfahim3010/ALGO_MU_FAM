#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a;
    a={12,2,34,100,43,6,87};
    int min_index=0;

    for(int i=0;i<a.size();i++){
        min_index=i;
        for(int j=i;j<a.size();j++){
            if (a[min_index]>a[j]){
                min_index=j;
            }
        }
        swap(a[i],a[min_index]);
    }

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}