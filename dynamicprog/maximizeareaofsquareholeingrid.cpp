#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=2;
    int m=1;
    vector<int>hbars={2,3};
    vector<int>vbars={2};
    sort(hbars.begin(),hbars.end());
    sort(vbars.begin(),vbars.end());
    int maxh=1;
    int maxv=1;
    int h=1;
    int v=1;
    for(int i=1;i<hbars.size();i++){
        if(hbars[i]-hbars[i-1]==1){
            h++;
        }else{
            h=1;
        }
        maxh=max(maxh,h);
    }
    for(int i=1;i<vbars.size();i++){
        if(vbars[i]-vbars[i-1]==1){
            v++;
        }else{
            v=1;
        }
        maxv=max(maxv,v);
    }
    int side=min(maxh,maxv)+1;;
    cout<<side*side<<endl;
}