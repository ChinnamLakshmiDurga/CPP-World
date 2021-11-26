#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int num,pos;
    cin>>num>>pos;
    for(int i=n-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=num;
    for(int j=0;j<n+1;j++){
        cout<<a[j]<<" ";
    }
    return 0;
}