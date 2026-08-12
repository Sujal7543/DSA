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
node* rotatek(node* head,int k){
    if(head==NULL){
        return NULL;
    }
    node* temp=head;
    int c=0;
    while(temp){
        temp=temp->next;
        c++;
    }
    if(c==k || k==0){
        return head;
    }
    k=k%c;
    if(k==0){
        return head;
    }
    int need=c-k-1;
    temp=head;
    while(temp && need!=0){
        temp=temp->next;
        need--;
    }
    node* x=temp->next;
    temp->next=NULL;
    node* y=x;
    while(y->next!=NULL){
        y=y->next;
    }
    y->next=head;
return x;
}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;

    node* head=create(n);
    print(head);

    int k;
    cout<<"enter k value for rotation";
    cin>>k;
    head=rotatek(head,k);
    print(head);


    return 0;
}