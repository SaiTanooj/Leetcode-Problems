#include<bits/stdc++.h>
using namespace std;
map<pair<int, int>, int> memo;
int f(vector<int>&arr,int i,int rem,vector<vector<int>>& dp){
    if(i==arr.size()){
        if(rem==0){
            return 0;
        }
            return INT_MIN;
    }
    if(dp[i][rem]!=-1){return dp[i][rem];}
    int take=arr[i]+f(arr,i+1,(rem+arr[i])%3,dp);
    int nottake=f(arr,i+1,rem,dp);
    return dp[i][rem]=max(take,nottake);
    

}
int main(){
    vector<int>arr={3,6,5,1,8};
    vector<vector<int>> dp(arr.size(), vector<int>(3, -1));

    int res=f(arr,0,0,dp);

    cout<<res<<endl;

    
   


}