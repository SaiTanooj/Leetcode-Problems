#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="247+38";
    int ind=0;
    for (int i=0;i<s.length();i++){
        if(s[i]=='+'){
            ind=i;
        }
    }
    long long min=LLONG_MAX;
    string exp="";
    for(int i=0;i<ind;i++){
        for(int j=ind+1;j<s.length();j++){
            string a=s.substr(0,i);
            string b=s.substr(i,ind-i);
            string c=s.substr(ind+1,j-ind);
            string d=s.substr(j+1);
            long long a1=0;
            if(a.length()==0){
                a1=1;
            }else{
                a1=stoll(a);
            }
            long long b1=stoll(b);
            long long c1=stoll(c);
            long long d1=0;
            if(d.length()==0){
                d1=1;
            }else{
                d1=stoll(d);}
            long long val=a1*(b1+c1)*d1;
            if(val<min){
                min=val;
            
            exp = a + "(" + b + "+" + c+ ")" + d;}
        }
    }
    cout<<exp<<endl;
    return 0;
}