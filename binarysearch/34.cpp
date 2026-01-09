#include<bits/stdc++.h>
using namespace std;
int first(vector<int>& arr,int tar){
    int low=0;
    int high=arr.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=tar){
            if (arr[mid] == tar){
                ans=mid;
            }
            
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;

}
int last(vector<int>& arr,int tar){
    int low=0;
    int high=arr.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<=tar){
           if(arr[mid]==tar){
            ans=mid;
           }
            
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={5,7,7,8,8,10};
    int tar=8;
    int f=first(arr,tar);
    int l=last(arr,tar);
    vector<int>res;
    res.push_back(f);
    res.push_back(l);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}