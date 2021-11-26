#include<iostream>
using namespace std;

void dectooct(int n){
    int oct[32];
    int i=0;
    while(n>0){
        oct[i]=n%8;
        n/=8;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<oct[j];
    }
}

int main(){
    int num;
    cin>>num;
    dectooct(num);
    return 0;
}