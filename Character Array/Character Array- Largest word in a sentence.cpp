#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];

    cin.getline(a,n);
    cin.ignore();

    int i=0;
    int curr=0;
    int maxl=INT_MIN;
    int st,maxst=0;
    while(1)
    {
        if(a[i]==' ' || a[i]=='\0')
        {
            maxl=max(maxl,curr);
            maxst=st;
            curr=0;
        }
        else{
            curr++;
            st=i+1;
        }
        if(a[i]=='\0')
            break;
        i++;
    }
    cout<<maxl<<endl;
    for(int i=0;i<maxl;i++){
        cout<<a[i+maxst];
    }
    return 0;
}