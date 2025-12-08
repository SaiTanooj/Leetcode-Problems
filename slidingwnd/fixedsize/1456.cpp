#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="aeiou";
    int k=2;
    int i=0;
     int j=0;
     unordered_map<char,int>mp;
     
     int maxcount=0;
     int count=0;
     while(j<s.length()){
        mp[s[j]]++;
        if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u') { // FIX 3: Use ||
            count++;
        }
        if(j-i+1==k){
            maxcount=max(maxcount,count);
            if(s[i]=='a'|s[i]=='e'|s[i]=='i'|s[i]=='o'|s[i]=='u'){
                count--;
            }
            
            mp[s[i]]--;
            if(mp[s[i]]==0){
                mp.erase(s[i]);
            }
            i++;
        }
        j++;
     }
        cout<<maxcount<<endl;
}