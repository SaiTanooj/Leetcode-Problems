#include<bits/stdc++.h>
using namespace std;
void f(vector<int>& arr,vector<vector<int>>& res,vector<int>& temp,unordered_set<int>& se){
    if(temp.size()==arr.size()){
        res.push_back(temp);
        return ;
    }
    for(int i=0;i<arr.size();i++){
        if(se.find(arr[i])==se.end()){
            temp.push_back(arr[i]);
            se.insert(arr[i]);
            f(arr,res,temp,se);
            temp.pop_back();
            se.erase(arr[i]);
        }
    }
}
int main(){
    vector<int>arr={1,2,3};
    vector<vector<int>>res;
    vector<int>temp;
    unordered_set<int>se;
    f(arr,res,temp,se);
    for(auto x:res){
        for(auto y:x){
            cout<<y<<" ";   
        }
        cout<<endl;
    }
    return 0;
}
