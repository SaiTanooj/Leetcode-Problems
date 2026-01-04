#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={2,3,1,2,4,3};
    int tar=7;
    int i=0;
    int j=0;
    int sum=0;int minlen=INT_MAX;
    while(j<arr.size()){
        sum=sum+arr[j];
        while(sum>tar){
            sum=sum-arr[i];
            i++;
        }
        if(sum==tar){
            minlen=min(minlen,j-i+1);
        }
        j++;
    }
    cout<<minlen;


}