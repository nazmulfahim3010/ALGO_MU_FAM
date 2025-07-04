#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int>&tree,int n,int i);
void insertion_heapify(vector<int>&tree);

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

     cout<<"binary tree\n";
     for(auto item:tree){
        cout<<item<<" ";
     }
    
     cout<<"\n";

     for(int i=n-1;i>=0;i--){
        swap(tree[0],tree[i]);//sort
        heapify(tree,i,0);
     }

     cout<<"heap sort\n";
     for(auto item : tree){
        cout<<item<<" ";
     }

    insertion_heapify(tree);

}

void insertion_heapify(vector<int>& tree){
   while(true){
    cout<<"DO you want to insert a number?(y/n) ";
    string ask;
    cin>>ask;
    if(ask=="yes" || ask=="y"){
        int node;
        cout<<"Enter node: ";
        cin>>node;

        tree.push_back(node);

        for(int i=(tree.size()/2)-1;i>=0;i--){
            heapify(tree,tree.size(),i);
        }

        cout<<"insertion done: \n";
        for(auto item : tree){
            cout<<item<<" ";

        }
    }
    else{
        break;
    }

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


// heap insertion and deletion :

// https://www.geeksforgeeks.org/insertion-and-deletion-in-heaps/