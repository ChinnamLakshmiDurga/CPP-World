#include<iostream>
using namespace std;

int main(){
    //char arr[100]="apple";
    //int i=0;
    //while(arr[i]!='\0'){
    //    cout<<arr[i]<<endl;
    //    i++;
    //}
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    bool check=true;
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-i-1]){
            check=false;
            break;
        }
    }
    if(check)
        cout<<"palindrome"<<endl;
    else  
        cout<<"not palindrome";
    return 0;
}