#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>&tree,int n,int i);

int main(){
    int n;
    cout<<"Node of your tree: ";
    cin>>n;
    vector<int>tree(n);

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        tree[i]=a;  
    }


    for(int i=(n/2)-1;i>=0;i--){
        heapify(tree,n,i);
    }


    for(auto item:tree){
        cout<<item<<" ";
    }

}

void heapify(vector<int>&tree,int n,int i){
    int parent=i;
    int left=2*i+1;
    int right=2*i+2;


    if(left<n && (tree[left]>tree[parent])){
        parent=left;
    }

    if (right<n && (tree[right]>tree[parent])){
        parent=right;
    }

    if(parent!=i){
        swap(tree[i],tree[parent]);
        heapify(tree,n,parent);
    }
}