#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={0,1,0};
    int n=arr.size();
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<mid<<endl;
            break;
        }
        else if(arr[mid]<arr[mid-1]){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;
}