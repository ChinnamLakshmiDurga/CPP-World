#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    //First method to traverse
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //Second method to traverse
    vector<int> ::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    
    //Third method to traverse
    for(auto element:v){
        cout<<element<<" ";
    }
    cout<<endl;
    //Another vector of size of 3 with "4" as all the 3 elements
    vector<int> v2(3,4);
    for(auto element:v2){
        cout<<element<<" ";
    }
    cout<<endl;
    cout<<"After swapping v & v2:"<<endl;

    swap(v,v2);
    cout<<"v2="<<endl;
    for(auto element:v2){
        cout<<element<<" ";
    }
    cout<<endl<<"v1="<<endl;
    for(auto element:v){
        cout<<element<<" ";
    }
    cout<<endl;

    sort(v2.begin(),v2.end(),greater<int>());
    cout<<"After sorting v2="<<endl;
    for(auto element:v2){
        cout<<element<<" ";
    }

    return 0;
}