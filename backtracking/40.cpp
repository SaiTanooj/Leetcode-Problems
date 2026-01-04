#include<bits/stdc++.h>
using namespace std;
void f(vector<int>&arr,vector<vector<int>>&res,vector<int>&temp,int tar,int ind){
    if(tar==0){
        res.push_back(temp);
        return ;
    }
    for(int i=ind;i<arr.size();i++){
        if(i>ind && arr[i]==arr[i-1])continue;
        if(arr[i]>tar)break;
        temp.push_back(arr[i]);
        f(arr,res,temp,tar-arr[i],i+1);
        temp.pop_back();
    }
}

int main(){
    vector<int>arr={10,1,2,7,6,1,5};
    int tar=8;
    vector<vector<int>>res;
    vector<int>temp;
    sort(arr.begin(),arr.end());
    f(arr,res,temp,tar,1);
    
}