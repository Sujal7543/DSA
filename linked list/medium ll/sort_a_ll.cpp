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
    cout<<"enter head value";
    cin>>x;
    node* head=new node(x);
    node* mover =head;
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
node* middle(node* head){
    node* slow=head;
    node* fast=head->next;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
node* merge(node* left,node* right){
    node* temp=new node(-1);
    node* mover=temp;
    while(left && right){
        if(left->data<=right->data){
            mover->next=left;
            left=left->next;
        }
        else{
            mover->next=right;
            right=right->next;
        }
        mover=mover->next;
    }
    if(left){
        mover->next=left;
        left=left->next;
        mover=mover->next;
    }
    if(right){
        mover->next=right;
        right=right->next;
        mover=mover->next;        
    }
    node* a=temp;
    temp=temp->next;
    delete(a);
    return temp;
}
node* mergesort(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* mid=middle(head);
    node* left=head;
    node* right=mid->next;
    mid->next=NULL;
    left= mergesort(left);
    right= mergesort(right);
    return merge(left,right);
}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;

    node* head=create(n);
    print(head);

    head=mergesort(head);
    print(head);
    return 0;
}