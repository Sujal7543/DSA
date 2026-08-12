#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int data1){
        data=data1;
        next=NULL;
    }
    node(int data1,node* next1){
        data=data1;
        next=next1;
    }
};

node* create(int n){
    int x;
    cout<<"enter head of ll = ";
    cin>>x;
    node* head=new node(x);
    node* mover=head;
    
    for(int i=1;i<n;i++){
        int x;
        cout<<"enter element ";
        cin>>x;
        node* temp=new node(x);
        mover->next=temp;
        mover =temp;
    }
    return head;
}

int main(){
    int n;
    cout<<"enter size of linked list =";
    cin>>n;

    node* head=create(n);
    cout<<"your linked list is =";
    node* temp=head;
    while(temp){
        cout<<temp->data<<",";
        temp=temp->next;
    }
    int x;
    cout<<"enter element want tot find";
    cin>>x;

    temp=head;
    while(temp){
        if(temp->data==x){
            cout<<"Element present";
            return 0;
        }
        temp=temp->next;
    }
   
    cout<<"nopt present";
    return 0;
}