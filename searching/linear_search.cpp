#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a;
    a={1,0,2,9,3,7,4,6,5,8};
    int x;

    cout<<"input the number you are searching: ";
    cin>>x;

    for(int i=0;i<a.size();i++){
        if(x==a[i]){
            cout<<x<<" is found in "<<i<<" index";
            break;
        }
    }

}