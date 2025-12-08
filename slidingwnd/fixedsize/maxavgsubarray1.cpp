#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,12,-5,-6,50,3};
    int k=4;
    double sum=0;
    double maxsum=0;
    int i=0;
    int j=0;
    while(j<arr.size()){
        sum=sum+arr[j];
        if(j-i+1>k){
            sum=sum-arr[i];
            i++;
        }
        maxsum=max(maxsum,sum/k);
        j++;


    }
    cout<<maxsum<<endl;
}