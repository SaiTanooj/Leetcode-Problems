#include<bits/stdc++.h>
using namespace std;
bool isBalanced(string& s) {
   
    stack<char> st; 
   
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        
        else if (c == ')' || c == '}' || c == ']') {
            
            if (st.empty()) return false; 
            char top = st.top();
            if ((c == ')' && top != '(')) {
                return false;
            }
            
           
            st.pop(); 
        }
    }
    
   
    return st.empty(); 
}

void f(int n,string s,vector<string>&res,int i){
    if(i==2*n){
        res.push_back(s);
        return;
    }
    s.push_back('(');
    f(n,s,res,i+1);
    s.pop_back();
    s.push_back(')');
    f(n,s,res,i+1);
    s.pop_back();
}
int main(){
    int n=3;
    string s="";
    vector<string>res;
    f(n,s,res,0);
    for(auto x:res){
        if(isBalanced(x)){
            cout<<x<<endl;
        }
    }

}