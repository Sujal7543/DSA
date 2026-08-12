/**/
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
node* checkloop(node* temp){
    node* slow=temp;
    node* fast=temp;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            slow=temp;
            while(slow){
                slow=slow->next;
                fast=fast->next;
                if(slow==fast){
                    return slow;
                }
            }
        }
    }
    return NULL;
}
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;

    node* head=create(n);
    node* temp=head;
    print(temp);
    cout<<endl;

    node*a=checkloop(head);
    if(a==NULL){
        cout<<"No loop";
    }
    else{
    cout<<a->data;
    }
}