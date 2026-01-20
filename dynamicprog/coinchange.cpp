#include<bits/stdc++.h>
using namespace std;
int f(vector<int>& arr,int tar,int i,vector<vector<int>>& dp){
    if(i==0){
        if(tar%arr[0]==0){
            return tar/arr[0];
        }
            return 1e9;
        
    }
    if(dp[i][tar]!=-1){
        return dp[i][tar];
    }
    int take=1e9;
    if(arr[i]<=tar){
        take=1+f(arr,tar-arr[i],i,dp);
    }
    int nottake=f(arr,tar,i-1,dp);
    return dp[i][tar]=min(take,nottake);
}
int main(){
    vector<int>arr={1,2,5};
    int tar=11;
    vector<vector<int>>dp(arr.size(),vector<int>(tar+1,-1));
    int ans=f(arr,tar,arr.size()-1,dp);
    if(ans>=1e9){
        ans=-1;
    }
    cout<<ans<<endl;
}