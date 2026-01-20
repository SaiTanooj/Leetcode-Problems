#include<bits/stdc++.h>
using namespace std;
int maxi=0;

bool f1(string& s, int start, int end,vector<vector<int>>& dp) {
    // Basic safety checks
    if(start>end){
        return true;
    }
    if(dp[start][end]!=-1){
        return dp[start][end];
    }
    if(s[start]==s[end]){
        return dp[start][end]=f1(s,start+1,end-1,dp);
    }
    return dp[start][end]=false;
}
int f(string s,int i){
    vector<vector<int>>dp(s.size(),vector<int>(s.size(),-1));

    int count=0;
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            if(f1(s,i,j,dp)){
                count++;
            }
        }
    }
    return count;
}
int main(){
    string s="abc";
    
    int res=f(s,0);
    cout<<res<<endl;
    return 0;

}