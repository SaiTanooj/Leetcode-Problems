#include<bits/stdc++.h>
using namespace std;
int la(vector<int>& arr){
    int low=0;
    int high=arr.size()-1;
    int ans=arr.size();
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<0){
            ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return ans;
}
int zl(vector<int>& arr){
    int low=0;
    int high=arr.size()-1;
    int ans=arr.size();
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<=0){
            if(arr[mid]==0){
                ans=mid;
            }
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;

}
int zf(vector<int>& arr){
    int low=0;
    int high=arr.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=0){
            if(arr[mid]==0){
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
int main(){
    vector<int>arr={5,20,66,1314};
    int l=la(arr);

    int z_l=zl(arr);
    int z_f=zf(arr);
    int neg=0;
    if(l!=arr.size()){
        neg=l+1;
    }
    int zerocount=0;
    if(z_l!=arr.size()&&z_f!=-1){
        zerocount=z_l-z_f+1;
    }
    int pos=arr.size()-neg-zerocount;
    int res=max(pos,neg);
    cout<<res<<endl;

   

    
    
}