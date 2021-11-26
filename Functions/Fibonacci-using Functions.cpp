#include<iostream>

using namespace std;

void fib(int num){
    int a=0,b=1;
    for(int i=1;i<=num;i++){
        cout<<a<<",";
        int nextTerm=a+b;
        a=b;
        b=nextTerm;
    }
    return;
}

int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}