#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int data1){
        data=data1;
        next=NULL;
    }
};
node* create(int n){
    if(n==0){
        return NULL;
    }
    int x;
    cout<<"enter head ";
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

node* mid(node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    node* slow=head;
    node* fast=head;
    node* prev=NULL;
    while(fast && fast->next){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    prev->next=slow->next;
    delete(slow);

    return head;
}
void print(node* head){
    while(head){
    cout<<head->data;
    head=head->next;
    }
}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;
    node* head=create(n);
    print(head);
    
    cout<<endl<<"removing middle"<<endl;
    head=mid(head);
    print(head);

    return 0;
}