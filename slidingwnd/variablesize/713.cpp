#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={10,5,2,6};
    int k=100;
    int i=0;
    int j=0;
    int sum=1;
    int count=0;
    while(j<arr.size()){
    sum=sum*arr[i];
    while(sum>=k){
        count++;
        sum=sum/arr[i];
        i++;

        }
        j++;
    }
    cout<<count<<endl;
}