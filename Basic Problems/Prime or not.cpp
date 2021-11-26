#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int flag=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<"not prime";
    }
    else{
        cout<<"prime";
    }
    return 0;
}