/*
insertion at head
********************************************************************
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node* back;

    node(int data1){
        data=data1;
        back=NULL;
        next=NULL;
    }

    node(int data1,node* next1,node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
};
node* create(int n){
    if(n==0){
        return NULL;
    }
    int x;
    cout<<"enter head value ";
    cin>>x;

    node* head = new node(x);
    node* mover=head;

    for(int i=1;i<n;i++){
        int x;
        cout<<"enter element ";
        cin>>x;
        node* temp=new node(x);
        temp->back=mover;
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void print(node* head){
    node* temp=head;

    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node* newhead(node* head ,int n){
    node* a=new node(n);
    a->next=head;
    if(head!=nullptr){
    head->back=a;
    }
    
    return a;
}

int main(){
    int n;
    cout<<"enter size of ll =";
    cin>>n;

    node* head=create(n);
    cout<<":your linked list is =";
    print(head);

    int s;
    cout<<"which value you want to make new head ";
    cin>>s;

    head=newhead(head,s);
    cout<<"your linked list is =";
    print(head);

    return 0;
}
************************************************************************
*/

/*

insertion at tail;
**********************************************************************
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node* back;

    node(int data1){
        data=data1;
        next=NULL;
        back=NULL;
    }

    node(int data1 , node* next1,node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
};

node* create(int n){
    if(n==0){
        return NULL;
    }
    int x;
    cout<<"enter head =";
    cin>>x;
    node* head=new node(x);
    node* mover=head;
    for(int i=1;i<n;i++){
        int x;
        cout<<"enter element =";
        cin>>x;
        node* temp=new node(x);
        temp->back=mover;
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void print(node* head){
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node* tailadd(node* head ,int x){
    if(head==NULL){
        node* a=new node(x);
        return a;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node* a=new node(x);
    temp->next=a;
    a->back=temp;

    return head;
}
int main(){
    int n;
    cout<<"enter size of ll =";
    cin>>n;

    node* head=create(n);
    cout<<"your linked list is =";
    print(head);

    int x;
    cout<<"enter value you want to make new tail ";
    cin>>x;

    head=tailadd(head,x);
    cout<<"your linked list is now =";
    print(head);
    return 0;
}
***********************************************************************
    */

    #include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node* back;

    node(int data1){
        data=data1;
        next=NULL;
        back=NULL;
    }

    node(int data1 , node* next1,node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
};

node* create(int n){
    if(n==0){
        return NULL;
    }
    int x;
    cout<<"enter head =";
    cin>>x;
    node* head=new node(x);
    node* mover=head;
    for(int i=1;i<n;i++){
        int x;
        cout<<"enter element =";
        cin>>x;
        node* temp=new node(x);
        temp->back=mover;
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void print(node* head){
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node* atpos(node* head, int pos, int x){
    if(head==NULL){
        if(pos==1){
            node* a= new node(x);
            return a;
        }
        else{
            return NULL;
        }
    }

    else if(pos==1){
        node* a = new node(x);
        a->next=head;
        head->back=a;
        return a;

    }

    int count=1;
    node* temp=head;
    while(count<pos && temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    if(pos==count+1 && temp->next==NULL){
        node*b=new node(x);
        temp->next=b;
        b->back=temp;
        return head;
    }
    
    node* a=new node(x);
    temp->back->next=a;
    a->back=temp->back;
    a->next=temp;
    temp->back=a;

    return head;
}


int main(){
    int n;
    cout<<"enter size of ll =";
    cin>>n;

    node* head=create(n);
    cout<<"your linked list is =";
    print(head);

    int pos;
    cout<<"enter position where you want to insert =";
    cin>>pos;

    int x;
    cout<<"enter value you want to make new tail ";
    cin>>x;

    head=atpos(head,pos,x);
    cout<<"your linked list is now =";
    print(head);
    return 0;
}