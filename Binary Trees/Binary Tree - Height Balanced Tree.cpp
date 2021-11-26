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
int height(node* root){
    if(root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}

bool check(node* root){
    if(root==NULL){
        return true;
    }
    if(!check(root->left)){
        return false;
    }
    if(!check(root->right)){
        return false;
    }
    int lh=height(root->left);
    int rh=height(root->right);
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
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<check(root);
    return 0;

}