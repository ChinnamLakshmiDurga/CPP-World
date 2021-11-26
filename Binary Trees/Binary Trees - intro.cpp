#include<iostream
using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    public:
    node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};

int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->left=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    return 0;
}