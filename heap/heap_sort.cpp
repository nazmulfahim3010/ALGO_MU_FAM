#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int>&tree,int n,int i);
int main(){
    int n;
    
    cout<<"Enter tree size: ";
    cin>>n;
    vector<int>tree;
    vector<int>heap_sort;

     for(int i=0;i<n;i++){
        int a;
        cin>>a;
        tree.push_back(a);
     }

     for(int i=n/2-1;i>=0;i--){
        heapify(tree,n,i);
     }
      
     int x=n/2-1;
     for(int i=0;i<tree.size();i++){
        
        heap_sort.push_back(tree[i]);
        swap(tree[i],tree[tree.size()-1]);
        tree[tree.size()-1]=0;
        heapify(tree,n,x);//problem
        x--;

     }
     cout<<"heap sort\n";
     for(auto item : heap_sort){
        cout<<item<<" ";
     }

    

}

void heapify(vector<int>&tree,int n,int i){
    int parent,left,right;
    parent=i;left=2*i+1;right=2*i+2;

    if(left<n&&tree[left]>tree[parent]){
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