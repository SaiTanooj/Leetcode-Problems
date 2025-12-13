#include<bits/stdc++.h>
using namespace std;
bool f(string& s1,string&s2,vector<int>&arr1){
    int i=0;
     int j=0;
     vector<int>arr2(26,0);
    while(j<s2.length()){
        arr2[s2[j]-'a']++;
        if(j-i+1==s1.length()){
            if(arr1==arr2){
                return true;
            }
            arr2[s2[i]-'a']--;
            i++;
        }
        j++;
    }
    return false;
}
int main(){
    string s1="ab";
    string s2="eidbaooo";
    int k=s1.length();
    vector<int>arr1(26,0);
    for(int i=0;i<s1.length();i++){
        arr1[s1[i]-'a']++;
    }
    bool res=f(s1,s2,arr1);
    cout<<res<<endl;
    return 0;
}