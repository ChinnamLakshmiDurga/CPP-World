#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int max=(a>b)?a:b;
    while(true){
        if(max%a==0 && max%b==0){
            cout<<max;
            break;
        }
        max++;
    }
    return 0;
}