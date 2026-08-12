
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
    cout<<"enter head of ll";
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
void print(node* temp){
    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }
}
node* oe(node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return NULL;
    }
   node*oddhead=head;
   node*evenhead=head->next;
   node* odd=oddhead;
   node* even=evenhead;

   while(odd&& odd->next&& odd->next->next){
    odd->next=odd->next->next;
    even->next=even->next->next;
    odd=odd->next;
    even=even->next;
   }
   odd->next=evenhead;
   return oddhead;
}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;

    node* head=create(n);
    node* temp=head;
    print(temp);
    cout<<endl;

    head=oe(head);
   print(head);
}