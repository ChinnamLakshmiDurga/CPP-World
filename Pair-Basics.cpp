#include<iostream>
#include<utility>

using namespace std;

int main(){
    pair<int,int> p;
    p.first=1;
    p.second=2;
    //or it can also be initialised as:
    pair<string,double> p1("Durga",2.32);
    pair  g1;         //default
    pair  g2(1, 'a');  //initialized,  different data type
    pair  g3(1, 10);   //initialized,  same data type
    pair  g4(g3);    //copy of g3
}