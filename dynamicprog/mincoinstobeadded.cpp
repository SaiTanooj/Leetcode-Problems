#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,4,10};
    int k=19;
    sort(arr.begin(),arr.end());
   long long reach =0;
   long long count =0;
   int i=0;

   while(reach<k){
    if(i<arr.size() && arr[i]<=reach+1){
        reach=reach+arr[i];
        i++;
    }
    else{
        reach=reach+reach+1;
        count=count+1;
    }
   }
    
    cout<<count<<endl;

}