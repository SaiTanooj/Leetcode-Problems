#include<bits/stdc++.h>
using namespace std;
int f1(vector<int>& arr1,long long mid){
   vector<int>arr=arr1;
    for(int i=arr.size()-1;i>=1;i--){
        if(arr[i]>mid){
            long long res=arr[i]-mid;
            arr[i-1]=arr[i-1]+res;
            arr[i]=arr[i]-res;
        }
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]>mid){
            return false;
        }
    }
    return true;

}
int f(vector<int>&arr){
    int low=0;
    int high=0;
    for(int i=0;i<arr.size();i++){
        high=max(high,arr[i]);

    }
    long long  ans=0;
    while(low<=high){
        long long mid=(low+high)/2;
        if(f1(arr,mid)){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={3,7,1,6};
    int res=f(arr);
    cout<<res<<endl;
}