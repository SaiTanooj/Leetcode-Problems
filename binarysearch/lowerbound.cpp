#include<bits/stdc++.h>
using namespace std;
int f(vector<int>& arr,int tar){
    int low=0;
    int high=arr.size()-1;
    int ans=arr.size();
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=tar){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={1,2,3,4,6,6,8,11};
    int tar=6;
    int res=f(arr,tar);
    cout<<res<<endl;
}