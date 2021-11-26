#include <iostream>

using namespace std;

bool check(int x,int y,int z){
    if(x*x+y*y==z*z || y*y+z*z==x*x || x*x+z*z==y*y ){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
   int x,y,z;
   cin>>x>>y>>z;
   if(check(x,y,z)){
       cout<<"Pythogorean triplet";
   }
   else{
       cout<<"Not a Pythogorean triplet";
   }
   return 0;
}