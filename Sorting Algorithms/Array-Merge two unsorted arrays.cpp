#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int arr[n+m];
    int ind=0;
    for(int i=0;i<n;i++){
        arr[ind]=a[i];
        ind++;
    }
    for(int i=0;i<m;i++){
        arr[ind]=b[i];
        ind++;
    }
    for(int i=0;i<ind;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}