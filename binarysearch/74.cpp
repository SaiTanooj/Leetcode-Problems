#include<bits/stdc++.h>
using namespace std;
bool f(vector<vector<int>>& arr,int row,int tar){
    int low=0;
    int high=arr[0].size();
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[row][mid]==tar){
            return true;
        }
        else if(arr[row][mid]>tar){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return false;
}
int main(){
    vector<vector<int>>arr={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int tar=13;
    vector<int>first;
    for(int i=0;i<arr.size();i++){
        first.push_back(arr[i][0]);
    }
    int row=0;
    for(int i=0;i<first.size();i++){
        if(tar>first[i]){
            row=i;
        }
    }
    bool res=f(arr,row,tar);
    cout<<res<<endl;
}