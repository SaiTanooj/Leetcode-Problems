#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={3,4,5,1,2};
    int low=0;
    int high=arr.size()-1;
    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]>arr[high]){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    cout<<arr[high]<<endl;
}