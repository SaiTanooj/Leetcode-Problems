#include<bits/stdc++.h>
using namespace std;
int f(vector<int>& arr,int val){
    int count=1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=val){
            count++;
        }else{
            break;
        }
    }
    return count;
}
int f1(vector<int>& arr,int val){
    int count=1;
    for(int i=arr.size()-1;i>=0;i--){
        if(arr[i]!=val){
            count++;
        }else{
            break;
        }
    }
    return count;

}
int main(){
    vector<int>arr={2,10,7,5,4,1,8,6};
    int mi=arr[0];
    int ma=arr[0];
    int minind=0;
    int maxind=0;
    for(int i=1;i<arr.size();i++){
        if(mi>arr[i]){
            mi=arr[i];
            minind=i;
        }
        if(ma<arr[i]){
            ma=arr[i];
            maxind=i;
        }

        
    }
    int x = min(minind, maxind); 
int y = max(minind, maxind);
int op1 = y + 1;                 
int op2 = arr.size() - x;       
int op3 = (x + 1) + (arr.size() - y);
int ans=min(op1,min(op2,op3));
cout<<ans;
   
}