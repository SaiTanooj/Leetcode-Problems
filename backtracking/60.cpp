#include<bits/stdc++.h>
using namespace std;
void f(vector<int>& arr,unordered_set<int>& se,vector<int>& temp,vector<vector<int>>& res){
    if(temp.size()==arr.size()){
        res.push_back(temp);
        return ;
    }
    for(int i=0;i<arr.size();i++){
        if(se.find(arr[i])==se.end()){
            temp.push_back(arr[i]);
            se.insert(arr[i]);
            f(arr,se,temp,res);
            temp.pop_back();
            se.erase(arr[i]);

        }
    }
}
int main(){
    int n=3;
    int k=3;
    vector<int>arr;
    for(int i=1;i<=n;i++){
        arr.push_back(i);
    }
    unordered_set<int>se;
    vector<int> temp;
    vector<vector<int>>res;
    f(arr,se,temp,res);
    string ress="";
    int count=0;
    for(int j=0;j<res[k-1].size();j++){
        ress+=to_string(res[k-1][j]);
    }
    cout<<ress<<endl;
    return 0;

}