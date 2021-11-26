#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int original=n;
    int reverse=0;
    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n/=10;
    }
    if(original==reverse){
        cout<<"palindrome";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
