#include<bits/stdc++.h>
using namespace std;
void f(vector<int>& arr,vector<vector<int>>& res,vector<int>& temp,unordered_set<int>& se){
   if(temp.size()==arr.size()){
    res.push_back(temp);
    return ;
   } 
   for(int i=0;i<arr.size();i++){
    if(se.find(i)==se.end()){
        temp.push_back(arr[i]);
        se.insert(i);
        f(arr,res,temp,se);
        temp.pop_back();
        se.erase(i);
        
    }
   }
}
int main(){
    vector<int>arr={1,1,2};
    vector<vector<int>>res;
    vector<int>temp;
    unordered_set<int>se;
    sort(arr.begin(),arr.end());
    f(arr,res,temp,se);
}