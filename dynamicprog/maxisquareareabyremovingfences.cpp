#include<bits/stdc++.h>
using namespace std;
int main(){
    int m=6;
    int n=7;
    vector<int>hbar={2};
    vector<int>vbar={4};
    sort(hbar.begin(),hbar.end());
    sort(vbar.begin(),vbar.end());
    int maxh=1;
    int maxv=1;
    int h=1;
    int v=1;
    for(int i=1;i<hbar.size();i++){
        if(hbar[i]-hbar[i-1]==1){
            h++;
        }else{
            h=1;
        }
        maxh=max(maxh,h);
    }
    for(int i=1;i<vbar.size();i++){
        if(vbar[i]-vbar[i-1]==1){
            v++;
        }else{
            v=1;
        }
        maxv=max(maxv,v);

    }
    int side=min(maxh,maxv)+1;
   
    cout<<side*side<<endl;
}