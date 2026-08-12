/*
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    
    node(int data1){
        data=data1;
        next=nullptr;
    }
};
node* create(int n){
    int x;
    cout<<"enter head value";
    cin>>x;

    node*head=new node(x);
    node* mover=head;

    for(int i=1;i<n;i++){
        int x;
        cout<<"enter element"<<i;
        cin>>x;
        node*temp=new node(x);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void print(node* head){
    node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int n;
    cout<<"enter how many nodes you wnat";
    cin>>n;

    node*head = create(n);

    print(head);


    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;

    node(int data1,node* next1){
        data=data1;
        next=next1;
    }
    node(int data1){
        data=data1;
        next=nullptr;
    }
};

node* createll(int n){
    if(n==0){
        return nullptr;
    }

    int x;
    cout<<"enter head of the ll";
    cin>>x;
    node*head=new node(x);
    node* mover=head;
    for(int i=1;i<n;i++){
        int x;
        cout<<"enter new node";
        cin>>x;
        node*temp=new node(x);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int main(){
    int n;
    cout<<"enter no of nodes in linked list";
    cin>>n;
    
    node*head=createll(n);

    node*temp=head;

    while(temp){
        cout<<temp->data<<",";
        temp=temp->next;
    }

    return 0;
}