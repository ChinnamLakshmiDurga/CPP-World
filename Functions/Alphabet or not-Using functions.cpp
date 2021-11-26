#include<iostream>
using namespace std;

void Alphabet(char c){
    if(c>='A'&&c<='Z' || c>='a'&&c<='z'){
        cout<<"Is is an Alphabet";
    }
    else{
        cout<<"It is not an Alphabet";
    }
}

int main(){
    char ch;
    cin>>ch;
    Alphabet(ch);
    return 0;
}