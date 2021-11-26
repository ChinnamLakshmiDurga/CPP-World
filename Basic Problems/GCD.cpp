#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    int hcf;
    if(b>a){
        int temp=b;
        b=a;
        a=temp;
    }
    for(int i=1;i<=b;i++){
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    return hcf;
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<gcd(x,y);
}