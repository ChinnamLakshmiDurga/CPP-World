#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;
    char ans[100];
    ans[0]=s[0];
    int cnt=1;
    for(int i=1;i<s.size();i++){
        if(s[i]!=s[i-1]){
            ans[cnt]=s[i];
            cnt++;
        }
    } 
    cout<<ans;
    return 0;
}