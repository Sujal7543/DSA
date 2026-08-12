/*#include<bits/stdc++.h>
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
    node* mover=head;
    for(int i=1;i<n;i++){
        int x;
        cout<<"enter node ";
        cin>>x;
        node* temp=new node(x);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void print(node* head){
    while(head){
        cout<<head->data<<endl;
        head=head->next;
    }
}
node* dlt(node* head,int pos){
    if(pos<1){
        return head;
    }
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL && pos==1){
        return NULL;
    }
    int c=0;
    node* temp=head;
    while(temp){
        c++;
        temp=temp->next;
    }
    if(c==pos){
        node* a=head;
        head=head->next;
        delete(a);
        return head;
    }
    int need=c-pos+1;
    c=1;
    temp=head;
    node* prev=NULL;
    while(temp){
        c++;
        prev=temp;
        temp=temp->next;
        if(c==need){
            prev->next=temp->next;
            delete(temp);
            return head;
        }
    }
    return head;

}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;

    node* head=create(n);
    print(head);

    int pos;
    cout<<"which value you want to dlt from last =";
    cin>>pos;

    head=dlt(head,pos);
    print(head);

    return 0;
}*/

