#include<bits/stdc++.h>
using namespace std;
void f(int i,string s,set<string>& res){
    if(i==s.length()){
        res.insert(s);
        return ;
    }
    if(isalpha(s[i])){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=toupper(s[i]);
        }else{
            s[i]=tolower(s[i]);
        }
    
    }
    f(i+1,s,res);
    if(isalpha(s[i])){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=toupper(s[i]);
        }else{
            s[i]=tolower(s[i]);
        }}
    f(i+1,s,res);


}
int main(){
    string s="a1b2";
    set<string>res;
    int i=0;
    f(i,s,res);
    vector<string>ans;
    for(auto x:res){
        ans.push_back(x);
    }
    return 0;
}