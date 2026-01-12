#include<bits/stdc++.h>
using namespace std;

int f(vector<int>&arr,int k ,int i,vector<int>&dp){
    if(i==arr.size()){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int currmax=INT_MIN;
    int r=0;
    for(int j=i;j<arr.size() && j-i+1<=k;j++){
        currmax=max(currmax,arr[j]);
        r=max(r,((j-i+1)*currmax)+f(arr,k,j+1,dp));
    }
    return dp[i]=r;

}
int main(){
    vector<int>arr={1,15,7,9,2,5,10};
    int k=3;
    vector<int>dp(arr.size(),-1);
    int res=f(arr,k,0,dp);
    cout<<res<<endl;
}