#include<bits/stdc++.h>
using namespace std;
void f(vector<string>& res,vector<string>& temp,string s,int ind,int n){
    if(ind==n){
        res.push_back(s);
        return ;

    }
    for(int i=0;i<temp[ind].size();i++){
        string str=temp[ind];
        s=s+str[i];
        f(res,temp,s,ind+1,n);
        s.pop_back();
    }
}
int main(){
    string digits="23";
    vector<string>arr={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>temp;
    for(int i=0;i<digits.length();i++){
        temp.push_back(arr[digits[i]-'0'-2]);
    }
    vector<string>res;
    string s="";
    int n=digits.length();
    f(res,temp,s,0,n);
    for(auto x:res){
        cout<<x<<endl;
    }
        
}