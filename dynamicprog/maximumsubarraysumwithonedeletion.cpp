#include<bits/stdc++.h>
using namespace std;
int f(vector<int>& arr,int i,int count){
    vector<int>left(arr.size(),0);
    left[0]=arr[0];
    int maxi=left[0];
    for(int i=1;i<arr.size();i++){
        left[i]=max(left[i-1]+arr[i],arr[i]);
        maxi=max(maxi,left[i]);
    }
     vector<int>right(arr.size(),0);
     right[arr.size()-1]=arr[arr.size()-1];
     for(int i=arr.size()-2;i>=0;i--){
        right[i]=max(right[i+1]+arr[i],arr[i]);
        maxi=max(maxi,right[i]);
     }
     for(int i=0;i<arr.size();i++){
        if(i==0){
            maxi=max(maxi,right[i+1]);
        }
        else if(i==arr.size()-1){
            maxi=max(maxi,left[i-1]);
        }
        else{
            maxi=max(maxi,left[i-1]+right[i+1]);
        }
     }
        return maxi;
    
}
int main(){
    vector<int>arr={1,-2,-2,3};
    int res=f(arr,0,0);
    cout<<res<<endl;
}