#include<bits/stdc++.h>
using namespace std;
bool isvalid(int i,int j,vector<vector<int>>& arr,vector<vector<bool>>& vis){
    if (i < 0 || i >= arr.size() || j < 0 || j >= arr[0].size() || vis[i][j]||arr[i][j]==0) {
        return false;
    }
    return true;
}
void f(vector<vector<int>>& arr,vector<vector<bool>>& vis,vector<string>& res,string s,int i, int j){
    if(i==arr.size()-1 && j==arr[0].size()-1 ){
        res.push_back(s);
        return ;
    }
    if(isvalid(i,j+1,arr,vis)){
        s=s+"R";
        vis[i][j]=true;
        f(arr,vis,res,s,i,j+1);
        s.pop_back();
        vis[i][j]=false;
    }
     if(isvalid(i+1,j,arr,vis)){
        s=s+"D";
        vis[i][j]=true;
        f(arr,vis,res,s,i+1,j);
        s.pop_back();
        vis[i][j]=false;
    }
     if(isvalid(i,j-1,arr,vis)){
        s=s+"L";
        vis[i][j]=true;
        f(arr,vis,res,s,i,j-1);
        s.pop_back();
        vis[i][j]=false;
    }
     if(isvalid(i-1,j,arr,vis)){
        s=s+"U";
        vis[i][j]=true;
        f(arr,vis,res,s,i-1,j);
        s.pop_back();
        vis[i][j]=false;
    }
    
}
 int main(){
    vector<vector<int>>arr={{1, 0, 0, 0},
{1, 1, 0, 1},
{1, 1, 0, 0},
{0, 1, 1, 1}};
vector<vector<bool>>visited(arr.size(),vector<bool>(arr[0].size(),false));
vector<string>res;
string s="";
f(arr,visited,res,s,0,0);
for(auto x:res){
    cout<<x<<endl;
}
 }