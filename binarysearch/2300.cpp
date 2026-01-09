#include<bits/stdc++.h>
using namespace std;
int f(vector<int>& arr,int m,int k){
    int low=0;
    int ans=0;
    int high=arr.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]*m>=k){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    if(ans==0){
        return 0;
    }
    return arr.size()-ans;

}
int main(){
    vector<int>s={5,1,3};
    vector<int>p={1,2,3,4,5};
    int k=7;
    vector<int>res;
    for(int i=0;i<s.size();i++){
        int count=f(p,s[i],k);
         res.push_back(count);

    }

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}
