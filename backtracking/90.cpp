#include<bits/stdc++.h>
using namespace std;
void f(int ind,vector<int>& temp,vector<vector<int>>& res,vector<int>& arr){
        res.push_back(temp);
    for(int i=ind;i<arr.size();i++){
        if(arr[i]==arr[i-1] && i>ind)continue;
        temp.push_back(arr[i]);
    f(i+1,temp,res,arr);
    temp.pop_back();
   
    }
    
}
int main(){
    vector<int>arr={1,2,2};
    vector<vector<int>>res;
    vector<int>temp;
    sort(arr.begin(),arr.end());
    f(0,temp,res,arr);
    for(auto x:res){
        for(auto y:x){
            cout<<y<<" ";   
        }
        cout<<endl;
    }
    
}