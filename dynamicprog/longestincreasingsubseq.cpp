#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={10,9,2,5,3,7,101,18};
    int n=arr.size();
    vector<int>dp(arr.size(),1);
    for(int i=1;i<arr.size();i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j] && dp[i]<dp[j]+1){
                dp[i]=dp[j]+1;
            }
        }
    }
    int maxi=0;
    for(int i=0;i<arr.size();i++){
        maxi=max(dp[i],maxi);
    }
    cout<<maxi<<endl;

}