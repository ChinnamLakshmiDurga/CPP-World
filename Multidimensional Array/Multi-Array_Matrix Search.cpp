#include<iostream>
 using namespace std;

 int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    int key,r=0,c=n-1;
    cin>>key;
    bool found= false;
    while(r<m && c>=0){
        if(a[r][c]==key){
            found=true;
            break;
        }
        else if(a[r][c]>key){
            c--;
        }
        else{
            r++;
        }
    }
    if(found)
        cout<<"Element found";
    else
        cout<<"not found";
return 0;
}
