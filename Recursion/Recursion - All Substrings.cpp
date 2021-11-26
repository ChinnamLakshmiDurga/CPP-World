#include<iostream>
#include<string>
using namespace std ;

void AllSubs(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);

    AllSubs(ros,ans);
    AllSubs(ros,ans+ch);
}


int main(){
    string s="ABC";
    AllSubs(s,"");
    cout<<endl;        
    return 0;
}