#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* right;
    node* left;

    node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};

bool check(node* root,int* height){
    if(root==NULL){
        return true;
    }
    int lh=0,rh=0;
    if(!check(root->left,&lh)){
        return false;
    }
    if(!check(root->right,&rh)){
        return false;
    }
    *height=max(lh,rh)+1;
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    node* root=new node(1);
    root->left=new node(2);
    //root->right=new node(3);
    root->left->left=new node(4);
    //root->left->right=new node(5);
    //root->right->left=new node(6);
    //root->right->right=new node(7);
    int height=0;
    cout<<check(root,&height);
    return 0;
}