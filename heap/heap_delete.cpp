#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>&tree,int n,int i);
void delete_heap(vector<int>&tree,int n);
int main(){
    vector<int>tree;

    int n;
    cout<<"Enter tree size: ";
    cin>>n;

    for(int i=0;i<n;i++){
        int a; cin>>a; 
        tree.push_back(a);
    }

    for(int i=n/2-1;i>=0;i--){
        heapify(tree,n,i);
    }

    cout<<"binary tree\n";
    for(auto item : tree){
        cout<<item<<" ";
    }
    while(true){
        string ask;
        cout<<"delete element (y/n)\n";
        cin>>ask;
        
        if(ask=="yes"||ask=="y"){
            delete_heap(tree,n);
            cout<<"NEW binary tree\n";
            for(auto item : tree){
                cout<<item<<" ";
                }}
        else{
            break;
        }

        
        
        

    }

    
    
}

void delete_heap(vector<int>&tree,int n){
    if(tree.empty()==true){
            cout<<"all element has been deleted";//fix need

        }
    swap(tree[0],tree[tree.size()-1]);
    tree.pop_back();
    for(int i=((tree.size()-1)/2)-1;i>=0;i--){
        heapify(tree,tree.size(),i);
    }

}

void heapify(vector<int>&tree,int n,int i){
    int parent,left, right;
    parent=i;left=2*i+1;right=2*i+2;

    if(left<n && tree[left]>tree[parent]){
        parent=left;
    }
    if(right<n && tree[right]>tree[parent]){
        parent=right;
    }
    if(parent!=i){
        swap(tree[parent],tree[i]);
        heapify(tree,n,parent);
    }
}