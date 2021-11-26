#include<iostream>
using namespace std;

int OctToDeci(int num){
    int ans=0;
    int y=1;
    for(int i=num;i>0;i/=10){
        int x=i%10;
        ans+=x*y;
        y*=8;
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    cout<<OctToDeci(n);
    return 0;
}