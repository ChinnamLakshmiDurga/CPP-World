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
        temp=temp->next;
        l++;
    }
    return l;
}

void intersect(node* &head1,node* &head2,int pos){
    node* temp1=head1;
    while(pos--){
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

int intersection(node* &head1,node* &head2){
    int l1=length(head1);
    int l2=length(head2);

    int d=0;
    node* large;
    node* small;
    if(l1>l2){
        d=l1-l2;
        large=head1;
        small=head2;
    }
    else{
        d=l2-l1;
        large=head2;
        small=head1;
    }
    
    while(d){
        large=large->next;
        if(large==NULL){
            return -1;
        }
        d--;
    }

    while(large!=NULL && small!=NULL){
        if(large==small){
            return large->data;
        }
        large=large->next;
        small=small->next;
    }
    return -1;   
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
    node* head1=NULL;
    node* head2=NULL;
    insert(head1,1);
    insert(head1,2);
    insert(head1,3);
    insert(head1,4);
    insert(head1,5);
    insert(head1,6);
    insert(head2,9);
    insert(head2,10);
    intersect(head1,head2,3);
    display(head1);
    display(head2);
    cout<<intersection(head1,head2);
    return 0;
}