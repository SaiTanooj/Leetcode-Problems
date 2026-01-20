#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,5,7,8,5,3,4,2,1};
    int d=-2;
    unordered_map<int,int>mp;
    int maxi=1;
    for(int i=0;i<arr.size();i++){
        if(mp.find(arr[i]-d)!=mp.end()){
            maxi=max(maxi,mp[arr[i]-d]+1);
            mp[arr[i]]=mp[arr[i]-d]+1;

        }
        else{
            mp.insert({arr[i],1});
        }

    }
    cout<<maxi;

}