#include<iostream>
using namespace std;

int main(){
    float a,b;
    cin>>a>>b;
    char op;
    cin>>op;
    switch(op){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        default:
            cout<<"Enter a valid operator";
            break;
    }
    return 0;
}