#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={1,0,2,9,3,7,5,9,5,7,0};
    sort(a.begin(),a.end());

    int num;
    cout<<"Enter a number: ";
    cin>>num;

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n"; 
    
    int start=0,end=a.size()-1,mid=0;

    while(start<=end){
        mid=start+((end-start)/2);

        if (a[mid]>num){
            end=mid;
        }
        if(a[mid]<num){
            start=mid+1;
        }

        if (a[mid]==num){
            cout<< "number found at "<<mid<<" index";
            break;
        }
    }

    
    
}