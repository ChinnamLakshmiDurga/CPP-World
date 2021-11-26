#include<iostream>
using namespace std;

void PrimeSieve(int n){
    int Prime[100]={0};
    for(int i=2;i<=n;i++){
        if(Prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                Prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(Prime[i]==0){
            cout<<i<<" ";
        }
    }
}


int main(){
    int n;
    cin>>n;
    PrimeSieve(n);
    return 0;

}