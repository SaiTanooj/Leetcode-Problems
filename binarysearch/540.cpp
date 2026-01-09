#include<bits/stdc++.h>
using namespace std;
 int main(){
    vector<int>arr={1,1,2,3,3,4,4,8,8};
    int res=arr[0];
    for(int i=1;i<arr.size();i++){
        res=res^arr[i];
    }
    cout<<res<<endl;
 }