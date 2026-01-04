#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "()(())((()()))";
    vector<int>left;
    int l=0;
    left.push_back(0);
    if(s[0]=='('){
        l=1;
    }else{
        l=0;
    }
    for(int i=1;i<s.length();i++){
        left.push_back(l);
        if(s[i]=='('){
            l++;
        }
    }
    int r=0;
    vector<int>right;
    right.push_back(0);
    for(int i=1;i<s.length();i++){
        right.push_back(r);
        if(s[i]==')'){
            r++;
        }
    }
    int maxd=INT_MIN;
    for(int i=0;i<s.length();i++){
        maxd=max(maxd,abs(left[i]-right[i]));
    }
    cout<<maxd<<endl;
    return 0;

}