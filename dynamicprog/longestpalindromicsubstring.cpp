#include<bits/stdc++.h>
using namespace std;
string f(string s,vector<vector<int>>&dp){
    int count=0;
    string res="";
    int maxi=0;
    int start=0;
    int end=0;
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
                if(j-i+1>maxi){
                    maxi=j-i+1;
                    start=i;
                    end=j;
                }

            }
        }
    }
    return s.substr(start,end+1);
}
int main(){
    string s="babad";
    vector<vector<int>>dp(s.size(),vector<int>(s.size(),0));
    string res=f(s,dp);
    cout<<res<<endl;
}