#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4,3,2,5};
    int k=3;
    vector<int>res;
    int count=1;
    for(int i=1;i<3;i++){
        if(arr[i]==arr[i-1]+1){
            count++;
        }
    }
    if(count==k){
        res.push_back(arr[2]);
    }else{
        res.push_back(-1);
        count=1;
    }
    int i=1;
    int j=3;
    while(j<arr.size()){
        if(arr[j-1]+1==arr[j]){
            count++;
        }else{
            count=1;
        }
        if(count>=k){
            res.push_back(arr[j]);

        }else{
            res.push_back(-1);
            
        }
        i++;
        j++;
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
   


}