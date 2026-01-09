#include<bits/stdc++.h>
using namespace std;
int f(vector<int>& arr,int mid){
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>=mid){
            count++;
        }
    }
    return count;
}
int main(){
    vector<int>arr={3,5};
    int mi=0;
    int ma=0;
    for(int i=0;i<arr.size();i++){
        mi=min(mi,arr[i]);
        ma=max(ma,arr[i]);
    }
    int low=1;
    int high=ma;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        int c=f(arr,mid);
        if(c==mid){
            ans=mid;
            break;
        }
        else if(c>mid){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<ans<<endl;

    return 0;


}