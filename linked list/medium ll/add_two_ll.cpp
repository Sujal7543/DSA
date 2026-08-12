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
    node*mover=head;

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
node* add(node* head1,node* head2){
    if(head1==NULL && head2==NULL){
        return NULL;
    }

    node* temp1=head1;
    node* temp2=head2;
    int c=0;

    node* n=new node(-1);
    node* mover=n;
    while(temp1!=NULL || temp2!=NULL){
        int x=temp1!=NULL?temp1->data:0;
        int y=temp2!=NULL?temp2->data:0;
        int digit=x+y+c;
        int no=digit%10;
        c=digit/10;
        node* s=new node(no);
        mover->next=s;
        mover=mover->next;
        if(temp1){temp1=temp1->next;}
        if(temp2){temp2=temp2->next;}
    }
    if(c!=0){
        mover->next=new node(c);
    }
    return n->next;
}
int main(){
    int n;
    cout<<"enter no of nodes in first ll";
    cin>>n;

    node* head1=create(n);
    print(head1);

    cout<<endl;

    int m;
    cout<<"enter no of nodes in second ll";
    cin>>m;

    node* head2=create(m);
    print(head2);
    cout<<endl;

    node* head=add(head1,head2);
    print(head);
    return 0;
}