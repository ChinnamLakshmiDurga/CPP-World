#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int reverse=0;
    while(n>0){
        int lastdigit=n%10;
        cout<<lastdigit;
        n/=10;
    }
    return 0;
}