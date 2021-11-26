#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int original=n;
    int sum=0;
    while(n>0){
        int rem = n%10;
        sum+=(pow(rem,3));
        n=n/10;
    }

    if(sum==original){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    return 0;
}