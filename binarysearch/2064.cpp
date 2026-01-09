#include<bits/stdc++.h>
using namespace std;
bool f(vector<int>&arr,int mid,int n){
    if (mid == 0) return false;
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans+arr[i]/mid;
        if(arr[i]%mid!=0){
            ans++;
        }
    }
    return ans<=n;
}
int main(){
    vector<int>arr={15,10,10};
    int n=7;
    int low=1;
    int high=0;
    for(int i=0;i<arr.size();i++){
        high=max(high,arr[i]);
    }
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(f(arr,mid,n)){
            ans=mid;
            high=mid-1;
        }   else{
            low=mid+1;
        }
    }
    cout<<ans<<endl;

}