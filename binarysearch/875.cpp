#include<bits/stdc++.h>
using  namespace std;
bool eat(vector<int>& arr,int mid,int h){
    long long res=0;
    for(int i=0;i<arr.size();i++){
        res=res+(long long)arr[i]/mid;
        if(arr[i]%mid!=0){
            res++;
        }
    }
    return res<=h;
}
int f(vector<int>& arr,int h){
    int low=1;
    int high=0;
    for(int i=0;i<arr.size();i++){
        high=max(high,arr[i]);
    }
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(eat(arr,mid,h)){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={3,6,7,11};
    int h=8;
    int ans=f(arr,h);
    cout<<ans<<endl;
}