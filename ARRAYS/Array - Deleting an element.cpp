#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int num;
    cin>>num;
    for(int i=0;i<n;i++){
        if(a[i]==num){
            for(int j=i;j<n;j++){
                a[j]=a[j+1];
            }
        }
    }
    n=n-1;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;

}