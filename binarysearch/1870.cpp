#include<bits/stdc++.h>
using namespace std;
bool f(vector<int>&arr,int mid,double t){
    double sum=0;
    double res=0;
    for(int i=0;i<arr.size();i++){
        double ti=(double)arr[i]/mid;
        if(i<arr.size()-1){
            sum=sum+ceil(ti);
        }else{
            sum=sum+ti;
        }
    }
    return sum<=t;
}
int main(){
    vector<int>arr={1,3,2};
    int t=2.7;
    int low=1;
    int high=1e7;

    
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(f(arr,mid,t)){
            ans=mid;
            high=mid-1;
        }else{  
            low=mid+1;

        }
    }
    cout<<ans<<endl;
}