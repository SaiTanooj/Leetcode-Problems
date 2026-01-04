#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={0,1,0,1,0};
    int k=3;
    for(int i=0;i<k-1;i++){
        arr.push_back(arr[i]);
    }
    int count=1;
    int res=0;
    for(int i=1;i<k;i++){
        if(arr[i-1]!=arr[i]){
            count++;
        }else{
            count=1;
        }
    }
    if(count==k){
        res++;
    }
    int i=1;
    int j=k;
    while(j<arr.size()){
        if(arr[j-1]!=arr[j]){
            count++;
        }else{
            count=1;
        }
        if(count>=k){
           
                res++;
        


        }
        i++;
        j++;

    }
  
    cout<<res;



}