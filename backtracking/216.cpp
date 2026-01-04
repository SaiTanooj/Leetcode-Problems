#include<bits/stdc++.h>
using namespace std;
void f(int i,vector<int>temp,vector<vector<int>>&res,vector<int>&arr,int k,int tar){
    if(tar==0 && temp.size()==k){
        res.push_back(temp);
        return ;
    }
    if(i>=arr.size()){
        return ;
    }
    if(arr[i]<=tar){
        temp.push_back(arr[i]);
        f(i+1,temp,res,arr,k,tar-arr[i]);
        temp.pop_back();
    }
    f(i+1,temp,res,arr,k,tar);
}
int main(){
    int k=4;
    int n=1;
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    vector<int>temp;
    vector<vector<int>>res;
    f(0,temp,res,arr,k,n);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}