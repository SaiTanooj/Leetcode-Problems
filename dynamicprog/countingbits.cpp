#include<bits/stdc++.h>
using namespace std;
int  main(){
    int n=2;
    vector<int>res;
    for(int i=0;i<=n;i++){
        int count = __builtin_popcount(i);
        res.push_back(count);

    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

}