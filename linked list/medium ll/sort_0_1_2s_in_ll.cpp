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
node* sort012(node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    node* zero=new node(-1);
    node* one=new node(-1);
    node* two=new node(-1);
    node* z=zero;
    node* o=one;
    node* t=two;
    while(head){
        if(head->data==0){
            z->next=head;
            head=head->next;
            z=z->next;
        }
        else if(head->data==1){
            o->next=head;
            head=head->next;
            o=o->next;
        }
        else{
            t->next=head;
            head=head->next;
            t=t->next;
        }
    }
    z->next=NULL;
    o->next=NULL;
    t->next=NULL;
    node* a=zero;
    zero=zero->next;
    delete(a);

    node* b=one;
    one=one->next;
    delete(b);

    node* c=two;
    two=two->next;
    delete(c);

    z->next=one!=NULL?one:two;
    o->next=two;
    t->next=NULL;
    if(zero!=NULL){
    return zero;
    }
    if(zero==NULL && one!=NULL){
        return one;
    }
    else{
        return two;
    }
}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;
    node* head=create(n);
    print(head);

    cout<<endl;

    head=sort012(head);
    print(head);

    return 0;
}