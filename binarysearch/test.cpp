#include<bits/stdc++.h>
using namespace std;
int f(int n,int ind,int maxsum,int mid){
    int left=ind;
    int count=((left*(mid-1)*mid)/2);
    int right=n-ind;
    int count1=((right*(mid-1)*mid)/2);

    int ones=(ind+1)-mid;
    int ones2=(n-ind)-mid;

    return count+count1+ones+ones2;
}
int main(){
    int n=4;
    int ind=2;
    int maxsum=6;
    int res=f(n,ind,maxsum,2);
    cout<<res<<endl;
}