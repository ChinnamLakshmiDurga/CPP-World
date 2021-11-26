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
int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
node* build(int postorder[],int inorder[],int start,int end){
    static int idx=4;
    if(start>end){
        return NULL;
    }
    
    int curr=postorder[idx];
    idx--;
    node* n=new node(curr);
    if(start==end){
        return n;
    }
    int pos=search(inorder,start,end,curr);
    n->right=build(postorder,inorder,pos+1,end);
    n->left=build(postorder,inorder,start,pos-1);
    return n;
}

void inorderprint(node* root){
    if(root==NULL){
        return;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}
int main(){
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    node* root=build(postorder,inorder,0,4);
    inorderprint(root);
    
    return 0;
}
