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
    node*head=new node(x);
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
node* add(node* head){
    if(head==NULL){
        return NULL;
    }
    node* temp=head;
    node* prev=NULL;
    while(temp){
        node* a=temp->next;
        temp->next=prev;
        prev=temp;
        temp=a;
    }
    int c=1;
    temp=prev;
    node* s=NULL;
    while(temp){
        int digit=temp->data+c;
        int no=digit%10;
        c=digit/10;

        temp->data=no;
        s=temp;
          if(c==0){
            break;
        }
        temp=temp->next;
    }
    if(c!=0){
       s->next=new node(c);
       s=s->next;
    }
    temp=prev;
    prev=NULL;
    while(temp){
        node* a=temp->next;
        temp->next=prev;
        prev=temp;
        temp=a;
    }
    return prev;

}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;

    node* head=create(n);
    print(head);

    cout<<endl<<"after adding"<<endl;
    head=add(head);
    print(head);

    return 0;
}