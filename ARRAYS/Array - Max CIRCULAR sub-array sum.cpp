#include<iostream>
#include<climits>
using namespace std;

int kadane(int a[],int n){
    int sum=0;
    int m=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum<0)
            sum=0;
        else
            m=max(m,sum);
    }
    return m;
} 

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int wrapsum;
    int nonwrapsum=kadane(a,n);
    int total=0;
    for(int i=0;i<n;i++){
        total+=a[i];
        a[i]= -a[i];
    }
    wrapsum=total+kadane(a,n);
    cout<<max(wrapsum,nonwrapsum);
    return 0;

}