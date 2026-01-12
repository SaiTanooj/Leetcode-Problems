#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,2,0,0,2,1};
    stack<int>st;
    vector<int>arr1(arr.size(),-1);
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            st.push(arr[i]);
        }
        else if(arr[i]==0){
            arr1[i]=st.top();
            if(st.empty()==false){
                st.pop();
            }
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr1[i]<<" ";
    }



}