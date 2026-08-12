/*
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
        cout<<head->data;
        head=head->next;
    }
}
node* check(node* head1,node* head2){
    if(head1==NULL || head2==NULL){
        return NULL;
    }
    unordered_map<node*,int>mp;
    node* temp=head1;
    while(temp){
        mp[temp]=1;
        temp=temp->next;
    }
    temp=head2;
    while(temp){
        if(mp.find(temp)!=mp.end()){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
}
int main(){
    int n;
    cout<<"enter no of nodes in first ll";
    cin>>n;

    int m;
    cout<<"enter no of nodes in second ll";
    cin>>m;

    node* head1=create(n);
    print (head1);

    cout<<endl;

    node*head2=create(m);
    print(head2);

    node* temp=check(head1,head2);
    if(temp){
        cout<<"intersection point ="<<temp->data;
    }
    else{
        cout<<"no intersection point";
    }

    return 0;
}*/
/*
optimal(but need to count length first)
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
        cout<<head->data;
        head=head->next;
    }
}
node* check(node* head1,node* head2){
    if(head1==NULL || head2==NULL){
        return NULL;
    }
    int count1=0;
    int count2=0;
    node* temp1=head1;
    node* temp2=head2;

    while(temp1 || temp2){
        if(temp1){
            count1++;
            temp1=temp1->next;
        }
        if(temp2){
            count2++;
            temp2=temp2->next;
        }
    }

    int need=abs(count1-count2);
    temp1=head1;
    temp2=head2;
    if(count1>count2){
        while(temp1 && need!=0){
            temp1=temp1->next;
            need--;
        }
    }
    else{
        while(temp2 && need!=0){
            temp2=temp2->next;
            need--;
        }
    }
    while(temp1 && temp2){
        if(temp1==temp2){
            return temp1;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return NULL;
}
int main(){
    int n;
    cout<<"enter no of nodes in first ll";
    cin>>n;

    int m;
    cout<<"enter no of nodes in second ll";
    cin>>m;

    node* head1=create(n);
    print (head1);

    cout<<endl;

    node*head2=create(m);
    print(head2);

    node* temp=check(head1,head2);
    if(temp){
        cout<<"intersection point ="<<temp->data;
    }
    else{
        cout<<"no intersection point";
    }

    return 0;
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
    cout<<"enter head";
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
        cout<<head->data;
        head=head->next;
    }
}
node* check(node* head1,node* head2){
    if(head1==NULL || head2==NULL){
        return NULL;
    }
    node* temp1=head1;
    node* temp2=head2;

    while(temp1!=temp2){
        temp1=(temp1==NULL)?head2:temp1->next;
        temp2=(temp2==NULL)?head1:temp2->next;
    }
    return temp1;
}
int main(){
    int n;
    cout<<"enter no of nodes in first ll";
    cin>>n;

    int m;
    cout<<"enter no of nodes in second ll";
    cin>>m;

    node* head1=create(n);
    print (head1);

    cout<<endl;

    node*head2=create(m);
    print(head2);

    node* temp=check(head1,head2);
    if(temp){
        cout<<"intersection point ="<<temp->data;
    }
    else{
        cout<<"no intersection point";
    }

    return 0;
}