#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={1,0,7,4,5,7,3,5,67,9};

    for(int i=0;i<a.size()-1;i++){
        int min_index=i;
        for(int j=i+1;j<a.size();j++){
            if(a[min_index]>a[j]){
                min_index=j;
            }
        }

        swap(a[i],a[min_index]);
    }

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

}