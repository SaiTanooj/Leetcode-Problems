#include<bits/stdc++.h>
using namespace std;
int f(vector<int>& arr,int tar, int i,vector<vector<int>>& dp){
    if(i==0){
        if(tar==0){
            return 1;

        }
        return (tar%arr[0]==0);
    }
    if(dp[i][tar]!=-1){
        return dp[i][tar];
    }
    int take=0;
    if(arr[i]<=tar){
        take=f(arr,tar-arr[i],i,dp);
    }
    int nottake=f(arr,tar,i-1,dp);
    return dp[i][tar]=take+nottake;
}
int main(){
    vector<int>arr={10};
    int tar=10;
    vector<vector<int>>dp(arr.size(),vector<int>(tar+1,-1));
    int res=f(arr,tar,arr.size()-1,dp);
    cout<<res<<endl;
}