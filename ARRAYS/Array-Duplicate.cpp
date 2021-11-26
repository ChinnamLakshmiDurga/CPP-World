#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
                flag=1;
                cout<<arr[i]<<" ";    
            }
        }
    }
    if(flag==0){
        cout<<"No duplicate";
    }
    return 0;
}