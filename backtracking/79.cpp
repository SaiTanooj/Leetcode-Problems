#include<bits/stdc++.h>
using namespace std;

bool f(vector<vector<char>>& arr,string s,string temp,int i,int j,vector<vector<bool>>& vis){
    if (i < 0 || i >= arr.size() || j < 0 || j >= arr[0].size() || vis[i][j]) {
        return false;
    }
    temp=temp+arr[i][j];
    if (temp[temp.length() - 1] != s[temp.length() - 1]) {
        return false;
    }
    if(temp==s){
        return true;
    }
    vis[i][j]=true;
    //right
    if(j+1<arr[0].size() && vis[i][j+1]==false){
        
        
        if(f(arr,s,temp,i,j+1,vis)){
            return true;
        }
        
    }
    if(i-1>=0 && vis[i-1][j]==false){
       
        
        if(f(arr,s,temp,i-1,j,vis)){
            return true;
        }
     
        
    }
    if(i+1<arr.size() && vis[i+1][j]==false){
    
        
        if(f(arr,s,temp,i+1,j,vis)){
            return true;
        }
       
        
    }
    if(j-1>=0 && vis[i][j-1]==false){
     
        if(f(arr,s,temp,i,j-1,vis)){
            return true;
        }
        
    }
    vis[i][j]=false;
    return false;


}
 int main(){
    vector<vector<char>>arr={{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string s="ABCCED";
    string temp="";
    int n=arr.size();
    int m=arr[0].size();
    
    bool res=false;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            if(arr[i][j]==s[0]){
                vector<vector<bool>>visited(n,vector<bool>(m,false));
                 res=f(arr,s,temp,i,j,visited);
            if(res==true){
                break;
            }
            }
           
        }
        if(res==true)break;
    }
    cout<<res<<endl;

 }