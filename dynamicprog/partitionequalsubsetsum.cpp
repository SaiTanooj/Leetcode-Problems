#include<bits/stdc++.h> 
using namespace std; 
bool f(vector<int>arr,int tar,int i,vector<vector<int>>&dp){
    if(i==0){
        if(tar==0)return true;
        if(tar==arr[0])return true;
        return false;
    }
    if(dp[i][tar]!=-1)return dp[i][tar];
    bool take=false;
    if(arr[i]<=tar){
        take=f(arr,tar-arr[i],i-1,dp);
    }
    bool nottake=f(arr,tar,i-1,dp);
    return dp[i][tar]=take||nottake;

}
int main(){
    vector<int>arr={1,5,11,5};
    
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum=sum+arr[i];
    }
    vector<vector<int>>dp(arr.size(),vector<int>(sum+1,-1));
    bool res=f(arr,sum,arr.size()-1,dp);
    cout<<res<<endl;

}