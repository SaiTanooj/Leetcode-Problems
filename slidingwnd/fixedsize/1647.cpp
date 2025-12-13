#include<bits/stdc++.h>
using namespace std;
bool find(vector<int>& arr,int tar){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==tar){
            return true;
        }
    }
    return false;
}
int main(){
    string s="ceabaacb";
    vector<int>arr(26,0);
    int j=0;
    int i=0;
    int count=0;
    while(j<s.length()){
        int c=arr[s[j]-'a']++;
        while(find(arr,c)){
            count++;
            arr[s[i]-'a']--;
            i++;
        }
            j++;


        }
        cout<< count<<endl;
}