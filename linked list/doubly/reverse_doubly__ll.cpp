/*

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*back;
    node*next;

    node(int data1){
        data=data1;
        next=NULL;
        back=NULL;
    }
};

node* create(int n){
    int x;
    cout<<"enter head =";
    cin>>x;
    node* head=new node(x);
    node* mover=head;
    for(int i=1;i<n;i++){
        int a;
        cout<<"enter element =";
        cin>>a;
        node* temp=new node(a);
        temp->back=mover;
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void print(node* head){
    node* temp=head;

    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void printreverse(node* head){
    node* temp=head;
    while(temp->next){
        temp=temp->next;
    }
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->back;
    }
}
int main(){
    int n;
    cout<<"enter size of ll = ";
    cin>>n;
    
    node* head=create(n);
    cout<<"your linked list is = ";
    print(head);
    cout<<endl;

    cout<<"your linked list after reverse is =";
    printreverse(head);

    return 0;
}
    */
/*
    #include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*back;
    node*next;

    node(int data1){
        data=data1;
        next=NULL;
        back=NULL;
    }
};

node* create(int n){
    int x;
    cout<<"enter head =";
    cin>>x;
    node* head=new node(x);
    node* mover=head;
    for(int i=1;i<n;i++){
        int a;
        cout<<"enter element =";
        cin>>a;
        node* temp=new node(a);
        temp->back=mover;
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void print(node* head){
    node* temp=head;

    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node* rev(node* head){
    if(head==NULL || head->next==NULL){
        return head;
}

node* current=head;
while(current){
    swap(current->next,current->back);
    current=current->back;
}
return current->back;

}
int main(){
    int n;
    cout<<"enter size of ll = ";
    cin>>n;
    
    node* head=create(n);
    cout<<"your linked list is = ";
    print(head);
    cout<<endl;

    cout<<"your linked list after reverse is =";
    head=rev(head);
    print(head);
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* prev;
    node* next;

    node(int data1){
        data=data1;
        prev=NULL;
        next=NULL;
    }
};

node* create(int n){
    if(n==0){
        return NULL;
    }
    int x;
    cout<<"enter head of dll";
    cin>>x;
    node* head=new node(x);
    node* p=head;

    for(int i=1;i<n;i++){
        int x;
        cout<<"enter new node";
        cin>>x;
        node* temp=new node(x);
        p->next=temp;
        temp->prev=p;
        p=temp;
    }

    return head;
}

node* rev(node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    node* temp=head;
    node* last=NULL;;
    while(temp){
        swap(temp->next,temp->prev);
        last=temp;
        temp=temp->prev;
    }
return last;
}
int main(){
    int n;
    cout<<"enter no of nodes ";
    cin>>n;

    node* head=create(n);
    node* temp=head;
    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }

    cout<<endl<<"after reverse"<<endl;
    head=rev(head);
    temp=head;

    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }

    return 0;
}