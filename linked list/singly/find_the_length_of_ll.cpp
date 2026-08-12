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
    int x;
    cout<<"Enter head";
    cin>>x;
    node* head=new node(x);
    node* mover=head;
    for(int i=1;i<n;i++){
        int x;
        cout<<"enter element";
        cin>>x;
        node* temp=new node(x);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;

    node*head=create(n);
    node*temp=head;

    int count=0;
    while(temp){
        cout<<temp->data<<",";
        temp=temp->next;
        count++;
    }
    cout<<"length ="<<count;

    return 0;
}