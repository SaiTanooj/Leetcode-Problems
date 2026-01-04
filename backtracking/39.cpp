#include<bits/stdc++.h>
using namespace std;
void f(int i,vector<int>& arr,int tar,vector<int>&temp,set<vector<int>>&s){
    if(tar==0){
        s.insert(temp);
        return;
    }
    if(i>=arr.size()){
        return ;
    }
    if(arr[i]<=tar){
        temp.push_back(arr[i]);
        f(i,arr,tar-arr[i],temp,s);
        temp.pop_back();
        
    }
    f(i+1,arr,tar,temp,s);
}
int main(){
    vector<int>arr={8,7,4,3};
    int tar=11;
    vector<vector<int>>res;
    set<vector<int>>s;
    vector<int>temp;
    f(0,arr,tar,temp,s);
    for(auto x:s){
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