#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int reverse=0;
    for(int i=n;i>0;i/=10){
        int lastdigit=i%10;
        reverse=reverse*10+lastdigit;
    }
    cout<<reverse;
    return 0;
}