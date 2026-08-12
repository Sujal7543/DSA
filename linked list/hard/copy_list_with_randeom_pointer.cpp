/*
brute(using hashmap);
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node* random;
    node(int data1){
        data=data1;
        next=NULL;
        random=NULL;
    }
};
node* create(int n){
    if(n==0){
        return NULL;
    }
    int x;
    cout<<"enter head";
    cin>>x;
    node* head=new node(x);
    node* mover=head;
    for(int i=1;i<n;i++){
        int x;
        cout<<"enter node";
        cin>>x;
        node* temp=new node(x);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void print(node* head){
    while(head){
        cout<<head->data;
        head=head->next;
    }
}
node* copynode(node* head){
    if(head==NULL){
        return NULL;
    }
    node* temp=head;
    node* head2=new node(-1);
    node* mover=head2;
    while(temp){
        mover->next=new node(temp->data);
        mover=mover->next;
        temp=temp->next;
    }
    node* a=head2;
    head2=head2->next;
    delete(a);

    temp=head;
    node* temp2=head2;
    unordered_map<node*,node*>mp;
    while(temp){
        mp[temp]=temp2;
        temp=temp->next;
        temp2=temp2->next;
    }
    temp=head;
    mover=head2;
    while(temp){
        mover->random=mp[temp->random];
        temp=temp->next;
        mover=mover->next;
    }
return head2;
}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;

    node* head=create(n);
    print(head);

    head=copynode(head);
    print(head);

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node* random;
    node(int data1){
        data=data1;
        next=NULL;
        random=NULL;
    }
};
node* create(int n){
    if(n==0){
        return NULL;
    }
    int x;
    cout<<"enter head";
    cin>>x;
    node* head=new node(x);
    node* mover=head;
    for(int i=1;i<n;i++){
        int x;
        cout<<"enter node";
        cin>>x;
        node* temp=new node(x);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void print(node* head){
    while(head){
        cout<<head->data;
        head=head->next;
    }
}
node* copynode(node* head){
    node* temp=head;
    while(temp){
        node* newnode=new node(temp->data);
        newnode->next=temp->next;
        temp->next=newnode;
        temp=temp->next->next;
    }
    temp=head;
    while(temp){
        if(temp->random){
        temp->next->random=temp->random->next;
        }
        else{
        temp->next->random=NULL;
    }
    temp=temp->next->next;
}
  node* a=new node(-1);
  node* mover=a;
  temp=head;
  while(temp){
    mover->next=temp->next;
    mover=temp->next;
    temp->next=temp->next->next;
    temp=temp->next;
  }
  node* s=a;
  a=a->next;
  delete(s);
  return a;
}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;

    node* head=create(n);
    print(head);

    head=copynode(head);
    print(head);

    return 0;
}