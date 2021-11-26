#include<iostream>
using namespace std;

int CountPath(int a,int b){
    if(a==b){
        return 1;
    }
    if(a>b){
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++){
        count+=CountPath(a+i,b);
    }
    return count;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<CountPath(a,b)<<endl;
    return 0;
}
