#include<bits/stdc++.h>
using namespace std;
bool f(int n,int ind,int maxsum,int mid){
    int left=ind;
    int right=n-ind-1;
    long long sum=mid;
    if(mid>left){
        long long res=(mid-1 + mid-left) * left / 2;
        sum=sum+res;
    }else{
        sum += (long long)(mid-1) * mid / 2;
        sum += (left - (mid-1));
    }
     if(mid > right){
        sum += (long long)(mid-1 + mid-right) * right / 2;
    } else {
        sum += (long long)(mid-1) * mid / 2;
        sum += (right - (mid-1));
    }
    return sum<=maxsum;


}
int main(){
    int n=6;
    int ind=1;
    int maxsum=10;
    int low=1;
    int high=maxsum;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(f(n,ind,maxsum,mid)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}