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

int length(node* head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

node* Kappend(node* &head, int k){
    node* newhead;
    node* newtail;
    node* temp=head;
    int l=length(head);
    int count=1;
    while(temp->next!=NULL){
        if(count==l-k){
            newtail=temp;
        }
        if(count==l-k+1){
            newhead=temp;
        }
        temp=temp->next;
        count++;
    }
    newtail->next=NULL;
    temp->next=head;

    return newhead;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    node* head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insert(head,arr[i]);
    }
    display(head);
    node* newhead=Kappend(head,3);
    display(newhead);
    return 0;
}