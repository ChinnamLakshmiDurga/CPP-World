#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insert(node* &head,int val){
    node* n=new node(val);

    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void deleteHead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;   
}

void deletion(node* &head,int key){
    //If the list is empty
    if(head==NULL){
        return;
    } 
    //If it only has one node
    if(head->next==NULL){
        deleteHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=key){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* head=NULL;
    insert(head,2);
    insert(head,4);
    insert(head,6);
    insert(head,8);
    display(head);
    deletion(head,2);
    display(head);
    return 0;
}