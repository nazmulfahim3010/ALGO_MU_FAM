#include<bits/stdc++.h>
using namespace std;
 int main(void){
    int n=5;
    int array[n]={1,2,3,4,5};

    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){

            for(int i=start;i<=end;i++){
                cout<<array[i]<<" ";
            }
            cout<<"\t";

        }
        cout<<endl;
    }


 }

// 1       1 2     1 2 3   1 2 3 4         1 2 3 4 5 
// 2       2 3     2 3 4   2 3 4 5 
// 3       3 4     3 4 5
// 4       4 5
// 5