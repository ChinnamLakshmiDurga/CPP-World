#include<iostream>
#include<string>
using namespace std;

string keyboard[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void AllPossibleways(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string letter=keyboard[ch-'0'];
    string ros=s.substr(1);
    for(int i=0;i<letter.length();i++){
        AllPossibleways(ros,ans+letter[i]);
    }
}
int main(){
    string s="23";
    AllPossibleways(s,"");
    return 0;
}