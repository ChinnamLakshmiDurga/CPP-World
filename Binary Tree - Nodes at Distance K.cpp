#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};


void SubTreeNode(node* root,int d){
    if(root==NULL || k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    SubTreeNode(root->left,k-1);
    SubTreeNode(root->right,k-1);
}

int  NodeAtK(node* root, node* target, int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        SubTreeNode(root,k);
        return 0;
    }

    int dl=NodeAtK(root->left,k);
    if(dl!=-1){
        if(dl+1==k){
            
        }
    }
}