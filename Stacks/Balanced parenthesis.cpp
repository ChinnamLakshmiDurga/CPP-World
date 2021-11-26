#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isvalid(string s){
    int l=s.size();
    stack<char> st;
    bool ans=true;
    for(int i=0;i<l;i++){
        if(s[i]=='{' || s[i]=='(' || s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]==']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]=='}'){
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
    }    
    if(!st.empty()){
        ans = false;
    }
    return ans;
}

int main(){
    string s="{([])}";
    if(isvalid(s)){
        cout<<"valid"<<endl;
    }
    else{
       cout<<"Invalid";
    }
    return 0;

}