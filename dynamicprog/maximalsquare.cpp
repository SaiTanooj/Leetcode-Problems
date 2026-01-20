#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>arr={{0,1},{1,0}};
    vector<vector<int>>dp(arr.size(),vector<int>(arr[0].size(),0));
    int maxi=0;
    for(int i=0;i<arr.size();i++){
        dp[i][0]=arr[i][0];
        maxi=max(maxi,dp[i][0]);

    }
    for(int j=0;j<arr[0].size();j++){
        dp[0][j]=arr[0][j];
        maxi=max(maxi,dp[0][j]);
    }
    
    
    for(int i=1;i<arr.size();i++){
        for(int j=1;j<arr[0].size();j++){
            if(arr[i][j]==1){
               
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                    maxi=max(maxi,dp[i][j]);
            }
        }
    }

cout<<maxi*maxi<<endl;
    
}