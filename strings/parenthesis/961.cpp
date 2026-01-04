#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,2,3,3};
    unordered_set<int>s;
    for(int i=0;i<arr.size();i++){
        if(s.find(arr[i])!=s.end()){
            return arr[i];
        }
        s.insert(arr[i]);

    }
    return -1;
}