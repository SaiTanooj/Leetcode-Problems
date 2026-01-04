#include<bits/stdc++.h>
using namespace std;
void f(vector<int>& arr,set<vector<int>>& se,unordered_set<int>& se2,vector<int>& temp){
    if(temp.size()==arr.size()){
        se.insert(temp);
        return ;
    }
    for(int i=0;i<arr.size();i++){
        if(se2.find(i)==se2.end()){
            temp.push_back(arr[i]);
            se2.insert(i);
            f(arr,se,se2,temp);
            temp.pop_back();
            se2.erase(i);

        }
    }
}
int main(){
    vector<int>arr={1,1,2};
    set<vector<int>>se;
    unordered_set<int>se2;
    vector<int>temp;
    f(arr,se,se2,temp);
    vector<vector<int>>res;
    for(auto x:se){
        res.push_back(x);
    }
    for(auto x:res){
        for(auto y:x){
            cout<<y<<" ";   
        }
        cout<<endl;
    }
    return 0;


}