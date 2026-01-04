#include<bits/stdc++.h>
using namespace std;
void f(int i,vector<int>& temp,vector<vector<int>>& res,vector<int>&arr,int k){
    if(temp.size()==k){
        res.push_back(temp);
        return ;
    }
    if (i >= arr.size()) {
        return;
    }
    temp.push_back(arr[i]);
    f(i+1,temp,res,arr,k);
    temp.pop_back();
    f(i+1,temp,res,arr,k);
}
int main(){
    int n=4;
    int k=2;
    vector<int>arr;
    for(int i=1;i<=n;i++){
        arr.push_back(i);
    }
    vector<int>temp;
    vector<vector<int>>res;
    f(0,temp,res,arr,k);
}