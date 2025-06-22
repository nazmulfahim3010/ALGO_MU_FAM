#include<bits/stdc++.h>
using namespace std;
 int main(void){
    int n=5;
    int array[n]={1,2,3,4,5};
    int max_sum=0;
    for(int start=0;start<n;start++){
        int total_sum=0;
        for(int end=start;end<n;end++){

            total_sum+=array[end];
            max_sum=max(total_sum,max_sum);

        }

    }

    cout<<"max value of subarray : "<<max_sum;
 }