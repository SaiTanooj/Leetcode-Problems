#include<bits/stdc++.h>
using namespace std;
int f(vector<int>& arr,int tar,int i,vector<vector<int>>&dp){
    if(i==0){
        if(tar==0){
            return 1;
        }
        if(tar==arr[0]){
            return 1;
        }
        return 0;
    }
    if(dp[i][tar]!=-1){
        return dp[i][tar];
    }

    int take=0;
    if(tar>=arr[i]){
        take=1+f(arr,tar-arr[i],i-1,dp);
    }
    int nottake=f(arr,tar,i-1,dp);
    return dp[i][tar]=take+nottake;


}
int main(){
    vector<int>arr={1,1,1,1,9};
    int k=2;
    int sum=0;
    for(int i=0;i<k;i++){
        sum=sum+arr[i];
    }
    bool res=false;
    if(sum%k!=0){
        res=false;
        cout<<"false"<<endl;
        
    }
    int tar=sum/k;
    vector<vector<int>>dp(arr.size(),vector<int>(tar+1,-1));
    int count=f(arr,tar,arr.size()-1,dp);
    
    if(count>=k){
        res=true;
    }
    cout<<res<<endl;

}