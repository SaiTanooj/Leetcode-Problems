#include<bits/stdc++.h>
using namespace std;
bool f(vector<int>& arr){
    int n1=INT_MAX;
    int n2=INT_MAX;
    for(int i=0;i<arr.size();i++){
        int n3=arr[i];
        if(n1<n2 && n1<n3 && n2<n3){
            return true;
        }
        else if(n3<n1){
            n1=n3;
        }
        else if(n3>n1 && n3<n2){
            n2=n3;
        }
    }
    return false;
}
int main(){
    vector<int>arr={5,4,3,2,1};
    bool res=f(arr);
    cout<<res<<endl;
}