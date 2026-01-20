#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={3,6,9,12};
   
    int maxi=0;
    int i=1;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            int diff=arr[j]-arr[i];
            int count=2;
            int prev=arr[i]-diff;
            for(int k=i-1;k>=0;k--){
                if(prev==arr[k]){
                    count++;
                    prev=prev-diff;
                }
            }
            maxi=max(maxi,count);
        }
    }
    cout<<maxi<<endl;

    
}