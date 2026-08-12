/*
brute;

#include<bits/stdc++.H>
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
    cout<<"enter head value =";
    cin>>x;
    node* head=new node(x);
    node* mover=head;

    for(int i=1;i<n;i++){
        int x;
        cout<<"enter element =";
        cin>>x;
        node* temp=new node(x);
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

node* half(node* head){
    node* temp=head;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    int n=(count/2);
    temp=head;
    while(n!=0){
        temp=temp->next;
        n--;
    }
    return temp;
}

int main(){
    int n;
    cout<<"enter size of linked list";
    cin>>n;

    node* head=create(n);
    cout<<"your linked list is =";
    print(head);

    cout<<endl;

    head=half(head);
    cout<<"your linked list by mid is =";
    print(head);

    return 0;
}
    */
/*
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;

    node(int data1){
        data=data1;
        prev=NULL;
        next=NULL;
    }
};
node* create(int n){
    if(n==0){
        return NULL;
    }
    int x;
    cout<<"enter element";
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
node* mid(node* head){
    if(head==NULL){
        return NULL;
    }
    node* slow=head;
    node* fast=head;

    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }

return slow ;
}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;

    node* head=create(n);
    node* temp=head;
    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }

    node* middle=mid(head);

    cout<<"middle ="<<middle->data;


    return 0;
}*/


#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;

    node(int data1){
        data=data1;
        prev=NULL;
        next=NULL;
    }
};
node* create(int n){
    if(n==0){
        return NULL;
    }
    int x;
    cout<<"enter element";
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
int middle(node* head,int n){
    if(head==NULL){
        return -1;
    }
    int count=1;
    node*temp=head;
    while(count<n){
        count++;
        temp=temp->next;
    }
return temp->data;
}

int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;

    node* head=create(n);
    node* temp=head;
    int count=0;
    while(temp){
        count++;
        cout<<temp->data;
        temp=temp->next;
    }

    int x=(count/2)+1;

    int mid=middle(head,x);
    cout<<"middle="<<mid;

    return 0;
}