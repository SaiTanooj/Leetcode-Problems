#include<bits/stdc++.h>
using namespace std;
int f(vector<int>& arr,int n,int i,vector<int>&dp){
    if(i>=n){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int one=arr[i]+f(arr,n,i+1,dp);
    int two=arr[i]+f(arr,n,i+2,dp);
    return dp[i]=min(one,two);
}
int main(){
    vector<int>arr={10,15,20};
    vector<int>dp(arr.size(),-1);
    int n=arr.size();
    int res=min(f(arr,arr.size(),0,dp),f(arr,arr.size(),1,dp));
    cout<<res<<endl;
}