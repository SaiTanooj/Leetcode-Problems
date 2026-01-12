#include<bits/stdc++.h>
using namespace std;
bool f(string s){
    if (s.empty() || s[0] == '0') {
        return false;
    }
    unsigned long long decimalValue = 0;
    for (char c : s) {
        decimalValue = (decimalValue << 1) + (c - '0');
    }
    if (decimalValue == 0) return false;
    
    while (decimalValue % 5 == 0) {
        decimalValue /= 5;
    }
    return decimalValue == 1;
}
int f(string s,int i,vector<int>&dp){
    if(i==s.size()){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }

    int count=INT_MAX;
    for(int j=i;j<s.size();j++){
        if(f(s.substr(i,j-i+1))){
            int res=f(s,j+1,dp);
            if(res!=INT_MAX){
                count=min(count,1+res);
            }
            
    }
    }
    return dp[i]=count;

}

int main(){
    string s="0";
    vector<int>dp(s.size(),-1);
    int  res=f(s,0,dp);
    if(res==INT_MAX){
        res=-1;
    }
    cout<<res<<endl;
}