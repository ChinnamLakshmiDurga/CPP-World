#include<iostream>
using namespace std;

int fact(int num){
    int prod=1;
    for(int i=2;i<=num;i++){
        prod*=i;
    }
    return prod;
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<fact(n)/(fact(r)*fact(n-r));
    return 0;
}