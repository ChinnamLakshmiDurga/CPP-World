#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int first=INT_MIN;
    for(int i=0;i<n;i++){
        first=max(first,arr[i]);
    }
    int second=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=first)
            second=max(second,arr[i]);
    }
    cout<<second;
    return 0;
}