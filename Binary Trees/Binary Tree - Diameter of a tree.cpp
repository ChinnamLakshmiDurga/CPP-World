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

int ht(node* root){
    if(root==NULL){
        return 0;
    }
    return max(ht(root->left),ht(root->right))+1;
}
int dia(node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=ht(root->left);
    int rheight=ht(root->right);
    int curr=lheight+rheight+1;

    int ldia=dia(root->left);
    int rdia=dia(root->right);

    return max(curr,max(ldia,rdia));
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<dia(root);
    return 0;

}