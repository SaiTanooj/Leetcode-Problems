#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="aababcabc";
    unordered_map<char,int>mp;
    int i=0;
    int j=0;
    int count=0;
    while(j<s.length()){
        mp[s[j]]++;
        if(j-i+1==3){
            if(mp.size()==3){
                count++;
            }
            mp[s[i]]--;
            if(mp[s[i]]==0){
                mp.erase(s[i]);
            }
            i++;
        }
        j++;
    }
    cout<<count<<endl;
    return 0;

}