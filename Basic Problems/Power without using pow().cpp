#include<iostream>
using namespace std;

int main(){
    int base,exponent;
    cin>>base>>exponent;
    int result=1;

    while(exponent>0){
        result*=base;
        exponent--;
    }
    cout<<result;
    return 0;
}