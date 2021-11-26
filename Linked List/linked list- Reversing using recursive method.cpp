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

void insert(node* &head, int val){
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

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reverseRecursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead =reverseRecursive(head->next);
    
    
    head->next->next=head;
    head->next=NULL;

    return newhead;
}



int main(){
    node* head=NULL;
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    display(head);
    node* newhead=reverseRecursive(head);
    display(newhead);
    return 0;
}

