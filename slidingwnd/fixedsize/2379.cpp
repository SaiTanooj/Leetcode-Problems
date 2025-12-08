#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="WBWBBBW";
    int k=2;
    int i=0;
     int j=0;
     int count=0;
     int mincount=INT_MAX;
     while(j<s.length()){
        if(s[j]=='W'){
            count++;
        }
        if(j-i+1==k){
            mincount=min(mincount,count);
            if(s[i]=='W'){
                count--;
            }
            i++;
        }
        j++;
     }
     cout<<mincount<<endl;
}