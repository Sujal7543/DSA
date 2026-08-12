/*
********************************************************************
delete at head;

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
node* create(int n){
    int x;
    cout<<"enter head value of node";
    cin>>x;
    node*head=new node(x);
    node*mover = head;

    for(int i=1;i<n;i++){
        int x;
        cout<<"enter value";
        cin>>x;
        node * temp=new node(x);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void print(node* head){
    node*temp=head;

    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node* dlt(node*head){
    if(head==nullptr){
        return head;
    }
    node* temp=head;
    head=head->next;

    delete temp;
    
    return head;
}
int main(){
    int n;
    cout<<"enter how many nodes you want";
    cin>>n;

    node*head=create(n);

    print(head);

    cout<<"after deleting head";
    head = dlt(head);
    print(head);

    return 0;
}
******************************************************************************    
*/


/*
**************************************************************************
delete at tail;
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
node* create(int n){
    int x;
    cout<<"enter head value of node";
    cin>>x;
    node*head=new node(x);
    node*mover = head;

    for(int i=1;i<n;i++){
        int x;
        cout<<"enter value";
        cin>>x;
        node * temp=new node(x);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void print(node* head){
    node*temp=head;

    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
node* dlttail(node*head){
if(head==NULL)return NULL;
 if(head->next==NULL){
    delete head;
}
node*temp=head;

while(temp->next->next!=NULL){
    temp=temp->next;
}
delete temp->next;
    temp->next=NULL;
    return head;
}


int main(){
    int n;
    cout<<"enter how many nodes you want";
    cin>>n;

    node*head=create(n);

    print(head);

    cout<<"after deleting";
    node*dlt=dlttail(head);
    
    print(dlt);

    return 0;
}
********************************************************************************    
*/

/*
*******************************************************************************
//dlt kth element;
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
    int x;;
    cout<<"enter head =";
    cin>>x;
    node* head=new node(x);
    node* mover=head;

    for(int i=1;i<n;i++){
        int x;
        cout<<"enter element =";
        cin>>x;

        node*temp=new node(x);
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

node* dlt(node*head,int k){
    if(head==NULL){
    return head;
    }
    if(k==1){
        node *temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    node*prev=NULL;
    node*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        
        if(count==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
int main(){
    int n;
    cout<<"enter how many nodes you want =";
    cin>>n;

    node* head=create(n);
    cout<<"your linked list before deleting = ";
    print(head);
    cout<<endl;

    int k;
    cout<<"enter which node you want to delete =";
    cin>>k;

    head=dlt(head,k);
    cout<<"after deleting node "<<endl;
    print(head);

    return 0;
}
    **********************************************************************
    */

/*
*************************************************************************
deletion by value
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
    int x;
    cout<<"enter head value";
    cin>>x;
    node* head=new node(x);
    node* mover=head;

    for(int i=1;i<n;i++){
        int x;
        cout<<"enter element =";
        cin>>x;
        node*temp=new node(x);
        mover->next=temp;
        mover=temp;
        }
        return head;
}

void print(node* head){
    node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node* dlt(node* head , int x){
    if(head==NULL){
        return head;
    }
    if(head->data==x){
        node*temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    node* temp=head;
    node*prev=NULL;
    while(temp!=nullptr){
        if(temp->data==x){
        prev->next=prev->next->next;
        delete temp;
        break;
    }
    prev=temp;
    temp=temp->next;
}
 return head;   
}
int main(){
    int n;
    cout<<"enter how many nodes you want =";
    cin>>n;

    node* head=create(n);
    cout<<"your linked list is =";
    cout<<endl;

    print(head);

    int x;
    cout<<"enter which value you want to remove from ll =";
    cin>>x;

    head=dlt(head,x);
    print(head);


    return 0;
}
*******************************************************************************
*/


#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;

    node(int data1,node* next1):data(data1),next(next1){}
    node(int data1):data(data1),next(NULL){}
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
        cout<<"enter element";
        cin>>x;
        node*temp=new node(x);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
node* dlt(node* head,int val){
    if(head==NULL){
        return NULL;
    }
    if(head->data==val){
        node* temp=head;
        head=head->next;
        delete(temp);
        return head;
    }
    node* temp=head;
    node* prev=NULL;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
        if(temp->data==val){
            prev->next=temp->next;
            delete(temp);
            break;
        }
    }
     return head;
}

int main(){

    int n;
    cout<<"enter size of linkedlist";
    cin>>n;

    node* head=create(n);
    node*temp=head;

    int val;
    cout<<"enter value";
    cin>>val;

    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }

    cout<<endl;

    cout<<"after deleting "<<endl;

    head=dlt(head,val);
    temp=head;
    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }
    return 0;
}