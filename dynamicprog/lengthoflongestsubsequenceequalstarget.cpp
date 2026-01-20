#include<bits/stdc++.h>
using namespace std;
int f(vector<int>& arr,int tar,int i,vector<vector<int>>& dp){
    if(tar==0){
        return 0;
    }
    if(i<0){
        return -1e9;
    }
    if(dp[i][tar]!=-1){
        return dp[i][tar];
    }
    int take=-1e9;
    if(arr[i]<=tar){
        take=1+f(arr,tar-arr[i],i-1,dp);
    }
    int nottake=f(arr,tar,i-1,dp);
    return dp[i][tar]=max(take,nottake);
}
int main(){
    vector<int>arr={4,1,3,2,1,5};
    int tar=7;
    vector<vector<int>>dp(arr.size(),vector<int>(tar+1,-1));
    int ans=f(arr,tar,arr.size()-1,dp);
    if(ans<=INT_MIN){
        ans=-1;
    }
    cout<<ans<<endl;
}