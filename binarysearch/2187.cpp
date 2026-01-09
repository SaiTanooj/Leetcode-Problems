#include<bits/stdc++.h>
using  namespace std;
bool f(vector<int>&arr,int mid,int n){
    if(mid==0)return false;
    int count=0;
    for(int i=0;i<arr.size();i++){
        count=count+(mid/arr[i]);
    }
    return count>=n;
}
int main(){
    vector<int>arr={1,2,3};
    int n=5;
    int low=1;
    int high=0;
    for(int i=0;i<arr.size();i++){
        high=high+arr[i];
    }
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(f(arr,mid,n)){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}