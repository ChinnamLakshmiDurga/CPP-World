#include <iostream>
using namespace std;

int Ls(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }     
    }
    return -1;   
}

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int key;
    cin>>key;
    cout<<Ls(ar,n,key);
    return 0;
}