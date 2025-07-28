#include<bits/stdc++.h>
using namespace std;
struct Item{
    double profit;
    int weight;
    int ratio;
    Item(double p,int w ){
        profit=p;
        weight=w;
        ratio=(double)profit/weight;

    }

};

bool comparetor(Item a,Item b){
    return a.ratio>b.ratio;
}
int main(){
    int n;
    cout<<"number of item:";
    cin>>n;
    int capacity;
    cout<<"Maximum capacity: ";
    cin>>capacity;

    vector<Item>v;

    for(int i=0;i<n;i++){
        int profit,weight;
        cin>>profit>>weight;
        v.push_back(Item(profit,weight));
    }

    sort(v.begin(),v.end(),comparetor);

    int bag=0;
    double profit=0.00;
    int i=0;
   for(auto item:v){
    if(bag+item.weight<=capacity){
        bag+=item.weight;
        profit +=item.profit;
    }
    else{
        int remaining = capacity - bag;
        profit+=item.ratio*remaining;
        break; 
    }
   }

   cout<< "profit: "<< profit; 


}

//https://www.geeksforgeeks.org/dsa/fractional-knapsack-problem/
