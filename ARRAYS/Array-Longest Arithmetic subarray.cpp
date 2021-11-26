#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pd=a[1]-a[0];
    int ans=2;
    int curr=2;
    for(int i=2;i<n;i++){
        if(pd==a[i+1]-a[i]){
            curr++;
        }
        else{
            pd=a[i+1]-a[i];
            ans=2;
        }
        ans=max(ans,curr);
    }
    cout<<ans<<endl;
    return 0;

}