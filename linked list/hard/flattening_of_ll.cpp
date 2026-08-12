/*
maked by me(not used recursion , used wshile loop and funcrions );
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node* child;
    node(int data1){
        data=data1;
        next=NULL;
        child=NULL;
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
node* childs(node* head){
    if(head==NULL){
        return NULL;
    }
    node* temp=head;
    while(temp!=NULL){
        node* mover=temp;
        int x;
        cout<<"enter no of child nodes you want in current node";
        cin>>x;
            while(x!=0){
                x--;
                int y;
                cout<<"enter node";
                cin>>y;
                node* q=new node(y);
                mover->child=q;
                mover=q;
            }
        temp=temp->next;
    }
return head;
}
node* mid(node* head){
    node* slow=head;
    node* fast=head->child;
    while(fast && fast->child){
        slow=slow->child;
        fast=fast->child->child;
    }
    return slow;
}
node* merge(node* temp1,node* temp2){
    node* a=new node(-1);
    node* mover=a;

    while(temp1 && temp2){
        if(temp1->data<=temp2->data){
            mover->child=new node(temp1->data);
            temp1=temp1->child;
        }
        else{
            mover->child=new node(temp2->data);
            temp2=temp2->child;
        }
        mover=mover->child;
    }
    while(temp1){
         mover->child=new node(temp1->data);
            temp1=temp1->child;
            mover=mover->child;
    }
    while(temp2){
        mover->child=new node(temp2->data);
        temp2=temp2->child;
        mover=mover->child;
    }

    return a->child;
}
node* mergesort(node* head){
    if(head==NULL || head->child==NULL){
        return head;
    }
    node* temp=head;
    node* middle=mid(temp);
    node* left=head;
    node* right=middle->child;
    middle->child=NULL;
    left=mergesort(left);
    right=mergesort(right);
    return merge(left,right);
}
node* merge(node* head){
    node* temp=head;
    node* mover=head;
    node* prevnode=NULL;

    while(temp && temp->child!=NULL){
        prevnode=temp;
        temp=temp->child;
        if(temp->child==NULL){
            prevnode=temp;
            prevnode->child=mover->next;
            mover=mover->next;
            temp=mover;
        }
    }
    temp=head;
    head= mergesort(head);
    return head;
}
void printx(node* head){
    while(head){
        cout<<head->data;
        head=head->child;
    }
}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;

    node* head=create(n);
    print(head);

    head=childs(head);
    head=merge(head);
        printx(head);
        return 0;
    }
*/

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node* child;
    node(int data1){
        data=data1;
        next=NULL;
        child=NULL;
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
node* childs(node* head){
    if(head==NULL){
        return NULL;
    }
    node* temp=head;
    while(temp!=NULL){
        node* mover=temp;
        int x;
        cout<<"enter no of child nodes you want in current node";
        cin>>x;
            while(x!=0){
                x--;
                int y;
                cout<<"enter node";
                cin>>y;
                node* q=new node(y);
                mover->child=q;
                mover=q;
            }
        temp=temp->next;
    }
return head;
}
node* merge(node* head1,node* head2){
    node* a=new node(-1);
    node* res=a;

    while(head1 && head2){
        if(head1->data<=head2->data){
            res->child=head1;
            res=head1;
            head1=head1->child;
        }
        else{
            res->child=head2;
            res=head2;
            head2=head2->child;
        }
        res->next=NULL;
    }
    while(head1){
        res->child=head1;
        res=head1;
        head1=head1->child;
        res->next=NULL;
    }
      while(head2){
        res->child=head2;
        res=head2;
        head2=head2->child;
        res->next=NULL;
    }
    node* q=a;
    a=a->child;
    delete(q);
return a;
}
node* mergesort(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* mergehead=mergesort(head->next);
    return merge(head,mergehead);
}
void printx(node* head){
    while(head){
        cout<<head->data;
        head=head->child;
    }
}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;

    node* head=create(n);
    print(head);

    head=childs(head);
    head=mergesort(head);
        printx(head);
        return 0;
    }