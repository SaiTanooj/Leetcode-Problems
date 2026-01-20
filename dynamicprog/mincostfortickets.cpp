#include<bits/stdc++.h>
using namespace std;
int find(vector<int>& arr,int ind,int n){
    int res=arr[ind]+n;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>=res){
            return i;
        }
    }
    return arr.size();
}
int f(vector<int>&arr,vector<int>&costs,int i,vector<int>&dp){
    if(i>=arr.size()){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }

    int day1=find(arr,i,1);
    int day7=find(arr,i,7);
    int day30=find(arr,i,30);
    
    
    int    res1=costs[0]+f(arr,costs,day1,dp);
    
    
    int    res7=costs[1]+f(arr,costs,day7,dp);
    
    
    int    res30=costs[2]+f(arr,costs,day30,dp);
    return dp[i]=min(res1,min(res7,res30));




}
 int main(){
    vector<int>days={1,4,6,7,8,20};
    vector<int>costs={2,7,15};
    vector<int>dp(days.size(),-1);
    int res=f(days,costs,0,dp);
    cout<<res<<endl;
 }