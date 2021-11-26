#include<iostream>
using namespace std;

void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void dnfsort(int arr[],int n){
    int low=0;int mid=0;int high=n-1;
    while(mid<=high){
        if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==0){
            swap(arr,mid,low);
            mid++;low++;
        }
        else{
            swap(arr,mid,high);
            high--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    dnfsort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}