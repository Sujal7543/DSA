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
    cout<<"enter head";
    cin>>x;
    node* head=new node(x);
    node* mover=head;
    for(int i=1;i<n;i++){
        int x;
        cout<<"enter node";
        cin>>x;
        node* temp=new node(x);
        temp->prev=mover;
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void print(node* temp){
    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }
}
node* dlt(node* head){
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    node* temp=head;
while(temp->next!=NULL){
    if(temp->data==temp->next->data){
        if(temp==head){
            head=head->next;
        }
        node* prevnode=temp->prev;
        node* nextnode=temp->next;
        if(prevnode){prevnode->next=nextnode;}
        if(nextnode){nextnode->prev=prevnode;}
        node* a=temp;
        delete(temp);
        temp=nextnode;
    }
    else{
        temp=temp->next;
    }
}
return head;
}
int main(){
    int n;
    cout<<"enter no od nodes";
    cin>>n;

    node* head=create(n);
    print(head);

    cout<<endl<<"after deleting duplicate"<<endl;
    head=dlt(head);
    print(head);

    return 0;
}