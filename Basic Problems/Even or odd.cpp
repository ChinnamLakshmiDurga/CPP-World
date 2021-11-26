#include<iostream>
using namespace std;

void Check(int num){
    if(num%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}

int main(){
    int n;
    cin>>n;
    Check(n);
}