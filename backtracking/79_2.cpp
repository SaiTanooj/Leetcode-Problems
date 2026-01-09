#include<bits/stdc++.h>
using namespace std;
bool f(vector<vector<char>>& arr,string s,int i,int j,int k,vector<vector<bool>>& vis){
    if(k==s.size()){
        return true;
    }
    if (i<0||i>=arr.size()||j<0||j>=arr[0].size()||arr[i][j]!=s[k]||vis[i][j]) {
        return false;
    }
    vis[i][j]=true;
    bool found=(f(arr,s,i,j+1,k+1,vis)||f(arr,s,i+1,j,k+1,vis)||f(arr,s,i,j-1,k+1,vis)||f(arr,s,i-1,j,k+1,vis));
    vis[i][j]=false;
    return found;
}
int main(){
    vector<vector<char>>arr={{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string s="ABCCED";
    bool res=false;
    vector<vector<bool>>vis(arr.size(),vector<bool>(arr[0].size(),false));
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            
            res=f(arr,s,i,j,0,vis);
            if(res==true){
                break;
            }
        }
        if(res==true){
            break;
        }
    }
    cout<<res<<endl;
}