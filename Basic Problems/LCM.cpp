#include<bits/stdc++.h>
using namespace std;

int HCF(int x,int y){
    while(x!=y){
        if(x>y)
            x-=y;
        else
            y-=x;
    }
    return x;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<a*b/HCF(a,b);
}