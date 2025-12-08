#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={100, 200, 300, 400};
    int k=2;
    int i=0;
    int j=0;
    int sum=0;
    int maxsum=0;
    while(j<arr.size()){
        sum=sum+arr[j];
        if(j-i+1==k){
            maxsum=max(maxsum,sum);
            sum=sum-arr[i];
            i++;
        }
        
        j++;

    }
    cout<<maxsum<<endl;
}