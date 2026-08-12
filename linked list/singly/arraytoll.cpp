/*
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;

    node(int data1){
        data=data1;
        next=nullptr;
    }
};
node* convertarr2ll(int arr[],int n){
    node* head=new node(arr[0]);
    node* mover =head;

    for(int i=1;i<n;i++){
        node * temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int main(){
    int arr[]={2,4,6,8,10};
    node*head=convertarr2ll(arr,5);
    node*temp=head;

    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
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
        next=nullptr;
    }

    node(int data1, node* next1){
        data=data1;
        next=next1;
    }
};

node * array2ll(int arr[],int n){
    node*head=new node(arr[0]);
    node* mover=head;

    for(int i=1;i<n;i++){
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int main(){
    int arr[5]={1,2,3,4,5};

    node* head=array2ll(arr,5);
    node* temp=head;

    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }

    cout<<count;
    


    return 0;
}


