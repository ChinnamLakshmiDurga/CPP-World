#include<iostream>
#include<math.h>
using namespace std;

bool CheckPrime(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return false;   
        }
    }
    return true;
}


int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n/2;i++){
        if(CheckPrime(i)){
            if(CheckPrime(n-i)){
                cout<<n<<"="<<i<<"+"<<n-i<<endl;
            }
        }
    }
    
    return 0;
}