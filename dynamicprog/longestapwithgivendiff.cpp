#include<bits/stdc++.h>
using namespace std;
int f(vector<int>&arr,int i,int d,vector<vector<int>>&dp,int prev){
    if(i==arr.size()){
        return 0;
    }
    int take=0;
    if(dp[i][prev+1]!=-1){
        return dp[i][prev+1];
    }

    if(prev==-1 || arr[prev]+d==arr[i]){
        take=1+f(arr,i+1,d,dp,i);
    }
    int nottake=0+f(arr,i+1,d,dp,prev);
    return dp[i][prev+1]=max(take,nottake);
}

int main(){
    vector<int>arr={1,5,7,8,5,3,4,2,1};
    int d=-2;
    vector<vector<int>>dp(arr.size(),vector<int>(arr.size()+1,-1));
    int prev=-1;
    int res=f(arr,0,d,dp,prev);
    cout<<res<<endl;
}
