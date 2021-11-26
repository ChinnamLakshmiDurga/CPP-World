#include<iostream>
using namespace std;

int gcd(int x,int y){
    if(x==0)
        return y; 
    return gcd(y%x,x);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}