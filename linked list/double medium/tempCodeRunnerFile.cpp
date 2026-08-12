#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* prev;
    node* next;
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
        temp->prev=mover;
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
void total(node* head,int sum){
    if(head==NULL){
        return ;
    }
    if(head->next==NULL){
        return;
    }
    node* temphead=head;
    node* temptail=NULL;
    while(temphead){
        temptail=temphead;
        temphead=temphead->next;
    }
    temphead=head;

    while(temphead!=temptail){
        int x=temphead->data;
        int y=temptail->data;
        if(x+y==sum){
            cout<<x<<","<<y<<endl;
            temphead=temphead->next;
            temptail=temptail->prev;
        }
        else if(x+y<sum){
            temphead=temphead->next;
        }
        else{
            temptail=temptail->prev;
        }
    }
}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;
    node* head=create(n);
    print(head);

    int sum;
    cout<<"enter sum value ";
    cin>>sum;

    cout<<endl<<"all pairs equal to sum is"<<endl;
    total(head,sum);
    return 0;
}