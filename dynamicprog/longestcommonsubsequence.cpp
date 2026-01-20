#include<bits/stdc++.h>
using namespace std;
int f(string s1,string s2,int i,int j,vector<vector<int>>&dp){
    if(i<0||j<0){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    if(s1[i]==s2[j]){
        return dp[i][j]=1+f(s1,s2,i-1,j-1,dp);
    }
    return dp[i][j]=max(f(s1,s2,i-1,j,dp),f(s1,s2,i,j-1,dp));
}
int main(){
    string s1="abcde";
    string s2="ace";
    vector<vector<int>>dp(s1.size(),vector<int>(s2.size(),-1));
    int res=f(s1,s2,s1.size()-1,s2.size()-1,dp);
    cout<<res<<endl;
}