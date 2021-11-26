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

int cal(node* root, int* height){
    if(root==NULL){
        *height=0;
        return 0;
    }

    int lh=0,rh=0;
    int ldia=cal(root->left,&lh);
    int rdia=cal(root->right,&rh);
    
    int curr=lh=rh+1;
    *height=max(lh,rh)+1;

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
    int height=0;
    cout<<cal(root,&height);
    return 0;


}