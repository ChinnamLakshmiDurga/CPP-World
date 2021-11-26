#include<iostream>
using namespace std;

int SumPrime(int n){
    int spf[100]={0};
    for(int i=2;i<=n;i++){
        if(spf[i]==0){
            for(int j=i;j<=n;j+=i){
                spf[j]+=i;
            }
        }
    }
    return spf[n]; 
}
int main(){
    int n;
    cin>>n;
    cout<<SumPrime(n);
    return 0;
}