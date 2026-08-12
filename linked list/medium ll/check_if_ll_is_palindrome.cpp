/*
can overflow in big linked list easily;
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
bool checkpal(node* head){
    long long a=0;
    node* temp=head;
    while(temp){
        a=(a*10)+temp->data;
        temp=temp->next;
    }
    long long b=a;
    long  ans=0;
    while(b!=0){
        int digit=b%10;
        ans=(ans*10)+digit;
        b/=10;
    }
    if(a==ans){
        return true;
    }
    return false;
}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;

    node* head=create(n);
    node* temp=head;
    print(temp);
    cout<<endl;

    bool a=checkpal(head);
    if(a){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}*/


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
bool checkpal(node* head){
    node* slow=head;
    node* fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    node* prev=NULL;
    while(slow){
        node* temp=slow->next;
        slow->next=prev;
        prev=slow;
        slow=temp;
    }
    node* temp=head;
    node* a=NULL;
    while(temp!=NULL && prev!=NULL){
        if(temp->data==prev->data){
            temp=temp->next;
            node* s=prev->next;
            prev->next=a;
            a=prev;
            prev=s;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;

    node* head=create(n);
    node* temp=head;
    print(temp);
    cout<<endl;

    bool a=checkpal(head);
    if(a){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}