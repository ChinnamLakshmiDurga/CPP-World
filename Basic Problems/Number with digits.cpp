#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans+arr[i] * pow(10,i);
    }
    cout<<ans;
    return 0;
}