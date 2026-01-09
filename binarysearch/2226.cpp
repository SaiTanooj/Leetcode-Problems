#include<bits/stdc++.h>
using namespace std;
int candies(vector<int>&arr,int mid,int k){
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(mid>0){
        count=count+arr[i]/mid;
    }}
    return count>=k;
}
int main(){
    vector<int>arr={1,2,3,4,10};
    int k=5;
    int low=1;
    int high=INT_MIN;
    for(int i=0;i<arr.size();i++){
        high=max(high,arr[i]);
    }
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(candies(arr,mid,k)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}