#include<bits/stdc++.h>
using namespace std;
void f(int i,vector<int>& temp,vector<vector<int>>& res,vector<int>& arr){
    if(i==arr.size()){
        res.push_back(temp);
        return ;
    }
    temp.push_back(arr[i]);
    f(i+1,temp,res,arr);
    temp.pop_back();
    f(i+1,temp,res,arr);
}
int main(){
    vector<int>arr={1,2,2};
    vector<vector<int>>res;
    vector<int>temp;
    f(0,temp,res,arr);
    for(auto x:res){
        for(auto y:x){
            cout<<y<<" ";   
        }
        cout<<endl;
    }
}