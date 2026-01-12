#include<bits/stdc++.h>
using namespace std;
bool isBalanced(std::string s) {
    if (s.empty()) return true; // An empty string is technically balanced

    // Step 1: Count the frequency of each character
    std::unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    // Step 2: Get the frequency of the first character to use as a reference
    int targetFrequency = freq.begin()->second;

    // Step 3: Check if all other character frequencies match the target
    for (auto const& [character, count] : freq) {
        if (count != targetFrequency) {
            return false; // Found a mismatch
        }
    }

    return true; // All characters occur the same number of times
}
int f(string s,int i,vector<int>&dp){
    if(i==s.size()){
        return 0;
    }
    int count=INT_MAX;
    if(dp[i]!=-1){
        return dp[i];
    }

    for(int j=i;j<s.size();j++){
        if(isBalanced(s.substr(i,j-i+1))){
            int res=1+f(s,j+1,dp);
        if(res!=INT_MAX){
            count=min(count,res);
        }
        }
        
    }
    return dp[i]=count;

}
int main(){
    string s="fabccddg";
    vector<int>dp(s.size(),-1);
    int res=f(s,0,dp);
    if(res==INT_MAX){
        res==-1;
    }
    cout<<res<<endl;
}