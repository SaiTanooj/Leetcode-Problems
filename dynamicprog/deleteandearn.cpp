#include<bits/stdc++.h>
using namespace std;
int f(vector<int>&arr,int i,vector<int>&freq,vector<int>&dp){
    if(i<0){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }

    int take=arr[i]*freq[arr[i]];
    if(i>0 && arr[i-1]==arr[i]-1){
        take+=f(arr,i-2,freq,dp);

    }else{
        take+=f(arr,i-1,freq,dp);

    }
    int nottake=f(arr,i-1,freq,dp);
    return dp[i]=max(take,nottake);



}
int main(){
    vector<int>arr={3,4,2};
    int i=arr.size()-1;
    vector<int>freq(10^4+1,0);
    for(int i=0;i<arr.size();i++){
        freq[arr[i]]++;
    }
    unordered_set<int>st;
    vector<int>res;
    for(int i=0;i<freq.size();i++){
        if(freq[i]>0){
            res.push_back(i);
        }

    }
    sort(res.begin(),res.end());
    vector<int>dp(res.size(),-1);
    int res1=f(res,res.size()-1,freq,dp);
    cout<<res1<<endl;


}