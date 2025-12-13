#include<bits/stdc++.h>
using namespace std;
vector<int> f(string& s,string& p,vector<int>& arr1){
    vector<int>res;
    vector<int>arr2(26,0);
    int i=0;
    int j=0;
    while(j<s.length()){
        arr2[s[j]-'a']++;
        if(j-i+1==p.length()){
            if(arr1==arr2){
                res.push_back(i);
            }
            arr2[s[i]-'a']--;
            i++;
        }
        j++;
    }
    return res;
}
int main(){
    string s="aa";
    string p="bb";
    vector<int>arr1(26,0);
    for(int i=0;i<p.length();i++){
        arr1[s[i]-'a']++;
    }
    vector<int> res=f(s,p,arr1);
    for(auto x:res){
        cout<<x<<" ";
    }

}