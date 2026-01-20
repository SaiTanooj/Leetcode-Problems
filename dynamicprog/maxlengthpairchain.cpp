#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>arr={{1,2},{2,3},{3,4}};
    vector<int>dp(arr.size(),1);
    int ans=0;
    for(int i=1;i<arr.size();i++){
        for(int j=0;j<i;j++){
            if(arr[i][0]>arr[j][1]){
                dp[i]=max(dp[i],dp[j]+1);

            }
        }
    }
    int maxi=0;
    for(int i=0;i<dp.size();i++){
        maxi=max(maxi,dp[i]);
    }
    cout<<maxi<<endl;
}