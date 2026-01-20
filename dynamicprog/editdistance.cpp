#include<bits/stdc++.h>
using namespace std;
int f(string s1,string s2,int i,int j){
    if(i<0){
        return j+1;
    }
    if(j<0){
        return i+1;
    }
    if(s1[i]==s2[j]){
        return f(s1,s2,i-1,j-1);
    }else{
        int ins=1+f(s1,s2,i,j-1);
    int del=1+f(s1,s2,i-1,j);
    int rep=1+f(s1,s2,i-1,j-1);
    return min(ins,min(del,rep));
    }

    
}
int main(){
    string s1="horse";
    string s2="ros";
    int res=f(s1,s2,s1.length()-1,s2.length()-1);
    cout<<res<<endl;
}