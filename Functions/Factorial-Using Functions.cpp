#include<iostream>
using namespace std;

int factorial(int num){
    int prod=1;
    for(int i=2;i<=num;i++){
        prod*=i;
    }
    return prod;
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
