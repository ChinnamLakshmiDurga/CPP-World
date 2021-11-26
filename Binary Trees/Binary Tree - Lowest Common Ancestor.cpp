#include<iostream>
#include<vector>
using namespace std;
class node{
    int data;
    node* right;
    node* left;

    node(int val){
        data=val;
        right=NLL;
        left=NULL;
    }
};

int LCA(node* root,int n1,int n2){
    vector<int> path1,path2;

    if(!getPath(root,n1,path1) || !getpath(root,n2,path2)){
        return -1;
    }
    int pc;
    for(pc=0;pc<path.size()&&path2.size();pc++){
        
    }
}


int main(){

}