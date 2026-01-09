#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={4,5,6,7,0,1,2};
    int tar=0;
   
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==tar){
            cout<<mid<<endl;
            break;
        }
        else if(arr[low]<=arr[mid]){
            if(tar>=arr[low] && tar<=arr[mid]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        else if(arr[mid+1]<=arr[high]){
            if(tar>=arr[mid+1] && tar<=arr[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }

    }
    cout<<-1<<endl;

}