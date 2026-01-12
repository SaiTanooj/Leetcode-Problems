#include<bits/stdc++.h>
using namespace std;
long long f(int n){
    int i=n-1;
    long long res=1;
    long long b=9;
    while(i>0){
        res=res*b;
        b=b-1;
        i--;
    }
    return res*9;


}
long long f1(int n,vector<long long>&dp){
    if(n==0)return 1;
    if(n==1)return 9;
    if(dp[n]!=-1)return dp[n];
    return dp[n]=f(n)+f1(n-1,dp);
}
int main(){
    int n=3;
    vector<long long>dp(n+1,-1);
    long long  res=f1(n,dp);
    cout<<res+1<<endl;
}