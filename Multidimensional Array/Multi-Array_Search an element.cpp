#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int key;
    cin>>key;
    bool flag=false;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==key){
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"Element is found!";
    }else{
        cout<<"Not found";
    }
    return 0;
}