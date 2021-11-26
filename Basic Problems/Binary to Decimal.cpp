#include<iostream>
using namespace std;

int BinToDeci(int num){
    int ans=0;
    int y=1;
    for(int i=num;i>0;i/=10){
        int x=i%10;
        ans+=x*y;
        y*=2;
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    cout<<BinToDeci(n);
    return 0;
}