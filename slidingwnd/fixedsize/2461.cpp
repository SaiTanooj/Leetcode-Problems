#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,5,4,2,9,9,9};
    int k=3;
    int i=0;
    int j=0;
    int sum=0;
    int maxsum=0;
    unordered_set<int>st;
    while(j<arr.size()){
        sum=sum+arr[j];
        st.insert(arr[j]);
        if(j-i+1==k){
            if(st.size()==k){
                maxsum=max(maxsum,sum);
            }
            sum=sum-arr[i];
            st.erase(arr[i]);
            i++;
        }
        j++;
    }
    cout<<maxsum<<endl;
    return 0;
}