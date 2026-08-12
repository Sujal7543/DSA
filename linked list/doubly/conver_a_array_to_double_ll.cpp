/*#include<bits/stdc++.h>
using namespace std;
struct node{
    node* back;
    int data;
    node* next;

    node(int data1){
        data=data1;
        back=NULL;
        next=NULL;
    }

    node(int data1 ,node* back1,node* next1){
        data=data1;
        back=back1;
        next=next1;
    }
};

node* convert(int arr[],int n){
    node* head=new node(arr[0]);
    node* mover= head;

    for(int i=1;i<n;i++){
        node* temp=new node(arr[i]);
        temp->back=mover;
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int main(){

    int arr[]={1,2,3,4,5,6};
    node* head=convert(arr,6); 

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* prev;
    node* next;

    node(int data1,node* prev1,node* next1){
        data=data1;
        prev=prev1;
        next=next1;
    }
    node(int data1){
        data=data1;
        prev=NULL;
        next=NULL;
    }
};

node* convert(int arr[],int n){
    node* head=new node(arr[0]);
    node* p=head;

    for(int i=1;i<n;i++){
        node* temp=new node(arr[i]);
        temp->prev=p;
        p->next=temp;
        p=temp;
    }
    return head;
}
int main(){
    int n;
    cout<<"enter no of element in array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element";
        cin>>arr[i];
    }

    cout<<"converting array to dll"<<endl;

    node* head=convert(arr,n);
    node* temp=head->next->next;

    cout<<temp->prev->data;


    return 0;
}