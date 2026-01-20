#include<bits/stdc++.h>
using namespace std;
bool valid(vector<int>&temp){
    if(temp.size()<2){
        return false;
    }
        for(int i=0;i<temp.size()-1;i++){
            if(temp[i-1]>temp[i]){
                return false;
            }
        }
        return true;

    
}
void f(vector<int>&arr,set<vector<int>>&res,vector<int>&temp,int i){
    if(i==arr.size()){
        if(valid(temp)){
            res.insert(temp);
        }
        return ;
    }
    temp.push_back(arr[i]);
    f(arr,res,temp,i+1);
    temp.pop_back();
    f(arr,res,temp,i+1);
}

int main(){
    vector<int>arr={4,6,7,7};
    int n=arr.size();
    set<vector<int>>res;
    vector<int>temp;
    f(arr,res,temp,0);
    vector<vector<int>>ans;
    for(auto i:res){
        ans.push_back(i);
    }
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;

    }
    return 0;

}