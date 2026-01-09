#include<bits/stdc++.h>
using namespace std;
bool f(vector<int>&arr,int tar){
    int n=arr.size();
    int low=0;
     int high=arr.size()-1;
     while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]== arr[low] && arr[mid]==arr[high]){
            low++;
            high--;
        }
        if(arr[mid]==tar){
            return true;
        }
        else if(arr[low]<=arr[mid]){
            if(tar>=arr[low] && tar<arr[mid]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        else if(arr[mid]<=arr[high]){
            if(tar>arr[mid] && tar<=arr[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
     }
     return false;
}
int main(){
    vector<int>arr={2,5,6,0,0,1,2};
    int tar=0;
    bool res=f(arr,tar);
    cout<<res<<endl;
    return 0;

}