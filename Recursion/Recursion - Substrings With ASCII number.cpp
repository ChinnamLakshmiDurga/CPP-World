#include<iostream>
#include<string>

using namespace std;

void Ascii(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int as = ch;
    string ros=s.substr(1);
    Ascii(ros,ans);
    Ascii(ros,ans+ch);
    Ascii(ros, ans + to_string(as));
}

int main(){
    string s="ABC";
    Ascii(s,"");
    cout<<endl;
    return 0;
}