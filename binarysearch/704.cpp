#include<bits/stdc++.h>
using namespace std;
int f(vector<int>& arr,int tar){
int low=0;
    int high=arr.size()-1;
    
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==tar){
            return mid;
        }
        else if(arr[mid]<tar){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={-1,0,3,5,9,12};

    int tar=9;
    int ans=f(arr,tar);
    cout<<ans<<endl;
}
    

