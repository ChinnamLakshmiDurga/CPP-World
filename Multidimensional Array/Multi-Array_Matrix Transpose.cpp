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

    for(int i=0;i<m;i++){
       for(int j=i;j<n;j++){
           int temp=a[j][i];
           a[j][i]=a[i][j];
           a[i][j]=temp;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}