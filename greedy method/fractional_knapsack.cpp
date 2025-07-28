# include<bits/stdc++.h>
using namespace std;
 int main(){
    int cap;
    cout<<"load capacity: "; 
    cin>>cap;
    vector<pair<int,int>>v ;//={{60,10},{100,20},{120,30}}
    //{60,100,30};
    //vector<int >wt={10,20,30};//{10,20,30};
    vector<double>item;
    int n;
    cout<<"number of item: ";
    cin>>n;
    cout<<"enter profit and weight : "; 
    
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});

    }

    for(int i=0;i<v.size();i++){
        item.push_back((double)v[i].first/v[i].second);
    }

    double bag =0.00;
    double profit = 0.00;
    while(bag<cap && !v.empty()){
        double max_item=0;
        int max_item_index=0;

        for(int i=0;i<item.size();i++){
           if(item[i]>max_item){
            max_item=item[i];
            max_item_index=i;
           }
        }
        

        if((bag+v[max_item_index].second)<=cap){
            bag += v[max_item_index].second;
            profit += v[max_item_index].first;

        }
        else{
            int remaining_space = cap - bag;
            profit += (double)remaining_space / v[max_item_index].second * v[max_item_index].first;
            bag += remaining_space;
        }

        item.erase(item.begin()+max_item_index);
        v.erase(v.begin()+max_item_index); 
    }

    


   cout<<"so the profit is : "<<  profit;

    
 }
 
