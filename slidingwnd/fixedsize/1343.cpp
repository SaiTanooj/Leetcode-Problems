#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={2,2,2,2,5,5,5,8};
    int k=3;
    int t=4;
    int sum=0;
    int i=0;
    int j=0;

    int count=0;
     int maxcount=0;

    while(j<arr.size()){
        sum=sum+arr[j];
        if(j-i+1==k){
            if(sum/k>=t){
                count++;
            }
            maxcount=max(maxcount,count);
            sum=sum-arr[i];
            i++;
        }
        j++;
    }
    cout<<maxcount<<endl;
}