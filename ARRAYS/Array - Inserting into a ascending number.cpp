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
    for(int i=0;i<n;i++){
        if(a[i]>num){
            for(int j=n-1;j>=pos-1;j--){
                a[j+1]=a[j];
            }
            a[pos-1]=num;
            break;
        }
    }
    n=n+1;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;

}