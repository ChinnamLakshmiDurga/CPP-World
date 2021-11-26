#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;
    int a[26];
    for(int i=0;i<26;i++){
        a[i]=0;
    }
    
    for(int i=0;i<s.size();i++){
        a[s[i]-'a']++;
    }
    int freq=0;
    char ans=0;
    for(int i=0;i<26;i++){
        if(freq<a[i])
        {
            freq= a[i];
            ans= i+'a';
        }
    }
    cout<<freq<<endl;
    cout<<ans;
    return 0;

}