/*#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;
    node(int data1){
        data=data1;
        next=NULL;
        prev=NULL;
    }
};
node* create(int n){
    if(n==0){
        return NULL;
    }
    int x;
    cout<<"enter head value";
    cin>>x;
    node* head=new node(x);
    node* mover=head;
    for(int i=1;i<n;i++){
        int x;
        cout<<"enter node";
        cin>>x;
        node* temp=new node(x);
        mover->next=temp;
        temp->prev=mover;
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
node* dlt(node* head,int k){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL && head->data==k){
        delete(head);
        return NULL;
    }
    while(head->data==k){
        if(head->next==NULL){
            return NULL;
        }
        node* temp=head;
        head=head->next;
        head->prev=NULL;
        delete(temp);
    }
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==k){
            if(temp->next==NULL){
                temp->prev->next=NULL;
                delete(temp);
                return head;
            }
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            node* a=temp;
            temp=temp->next;
            delete(a);
        }
        else{
        temp=temp->next;
        }
    }
    return head;
}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;

    int k;
    cout<<"enter which element you want to dlt";
    cin>>k;

    node* head=create(n);
    print(head);

    cout<<endl<<"after dlt key"<<endl;

    head=dlt(head,k);
    print(head);
    return 0;
}*/
