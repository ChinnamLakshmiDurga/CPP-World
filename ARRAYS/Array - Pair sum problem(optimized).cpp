#include<iostream>
using namespace std;

bool PairSum(int a[],int n,int key){
    int start=0;
    int end=n;
    while(start<end){
        if(a[start]+a[end]==key){
            cout<<start<<" "<<end<<endl;
            return true;
        }
        else if(a[start]+a[end]>key){
            end--;
        }
        else{
            start++;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<PairSum(a,n,key);
    return 0;
}