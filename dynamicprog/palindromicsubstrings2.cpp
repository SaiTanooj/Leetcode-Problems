#include<bits/stdc++.h>
using namespace std;
int f(string s,vector<vector<int>>&dp){
    int count=0;
    for(int l=1;l<=s.size();l++){
        for(int i=0;i+l-1<s.size();i++){
            int j=i+l-1;
            if(i==j){
                dp[i][j]=1;
            }
            else if(i+1==j){
                dp[i][j]=(s[i]==s[j]);
            }
            else{
                dp[i][j]=(s[i]==s[j]&&dp[i+1][j-1]);
            }
            if(dp[i][j]){
                count++;
            }
        }
    }
    return count;
}
int main(){
    string s="abc";
    vector<vector<int>>dp(s.size(),vector<int>(s.size(),0));
    int res=f(s,dp);
    cout<<res<<endl;
}