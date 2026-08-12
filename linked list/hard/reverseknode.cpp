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
node* knode(node* temp,int k){
    k-=1;
    while(temp!=NULL && k>0){
        temp=temp->next;
        k--;
    }
    return temp;
}
node* reverse(node* head){
    node* temp=head;
    node* prev=NULL;
    while(temp){
        node* a=temp->next;
        temp->next=prev;
        prev=temp;
        temp=a;
    }
    return prev;
}
node* reversekth(node* head,int k){
    if(head==NULL){
        return NULL;
    }
    node* temp=head;
    node* prevnode=NULL;
    while(temp){
        node* kthnode=knode(temp,k);
        if(kthnode==NULL){
            prevnode->next=temp;
            return head;
        }
        node* nextnode=kthnode->next;
        kthnode->next=NULL;
        reverse(temp);

        if(temp==head){
            head=kthnode;
        }
        else{
            prevnode->next=kthnode;
        }
        prevnode=temp;
        temp=nextnode;
    }
return head;
}

int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;

    node* head=create(n);
    print(head);

    int k;
    cout<<"enter kth element for reverse";
    cin>>k;

    head=reversekth(head,k);
    print(head);
    return 0;
}