#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="AAAAAAAAAAAAA";
    unordered_set<string>s;
    string temp="";
    for(int i=0;i<10;i++){
        temp=temp+s1[i];    }
    s.insert(temp);
    int i=1;
    int j=1;
    set<string>res;
    string temp1="";
    while(j<s1.length()){
        temp1=temp1+s1[j];
        if(temp1.length()==10){
            
            if(s.find(temp1)!=s.end()){
                res.insert(temp1);
            }
            s.insert(temp1);
            temp1.erase(temp1.begin());
            
        }
        j++;
    }
    vector<string> myVector(res.begin(), res.end());

}