#include<iostream>

using namespace std;

void fib(int num){
    int a=0,b=1;
    cout<<a<<endl<<b<<endl;
    int nextTerm=a+b;
    while(nextTerm<=num){
        cout<<nextTerm<<endl;
        a=b;
        b=nextTerm;
        nextTerm=a+b;
    }
    return;
}

int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}