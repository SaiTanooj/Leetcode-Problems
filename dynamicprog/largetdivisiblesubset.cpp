#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,2,3};
    vector<int>dp(arr.size(),1);
    int maxi=0;
    int start=0;
    int end=0;
    for(int i=1;i<arr.size();i++){
        for(int j=0;j<i;j++){
            if(((arr[i]%arr[j]==0)||(arr[j]%arr[i]==0)) && (dp[i]<dp[j]+1)){
                dp[i]=dp[j]+1;
                if(dp[i]>maxi){
                    maxi=dp[i];
                    start=i;
                    end=j;
                }


            }
        }
    }
    vector<int>res;
    for(int i=start;i<=end;i++){
        res.push_back(arr[i]);

    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";

    }

}