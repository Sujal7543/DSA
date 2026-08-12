/*
(add new head)
*********************************************************************************
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
cout<<"enter head value ";
cin>>x;
node* head=new node(x);
node* mover=head;

for(int i=1;i<n;i++){
    int x;
    cout<<"enter value ";
    cin>>x;
    node* temp= new node(x);
    mover->next=temp;
    mover=temp;
}
return head;
}


void print(node*head){
    node*temp=head;

    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node* add(node* head, int h){
   node*a=new node(h,head);
   return a;
}


int main(){
    int n;
    cout<<"how many nodes you want =";
    cin>>n;

    node*head=create(n);
    cout<<"your linked list is = ";
    print(head);

    int h;
    cout<<"enter value which you want to make new head";
    cin>>h;

    head=add(head,h);
    cout<<"after adding new head = ";
    print(head);

    return 0;
}
   ****************************************************************************
    */

/*
****************************************************************************
inserting tail;
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
cout<<"enter head value ";
cin>>x;

node* head=new node(x);
node* mover=head;

for(int i=1;i<n;i++){
    int x;
    cout<<"enter element ";
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

node* tail(node* head,int t){
node* temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=new node(t);
return head;
}
int main(){
int n;
cout<<"enter how many nodes you want =";
cin>>n;

node* head=create(n);
cout<<"youn linked list = ";
print(head);

int t;
cout<<"which element you want to make tail = ";
cin>>t;

head=tail(head,t);
print(head);

return 0;
}
***************************************************************************
*/

/*
insert at position ;
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
    cout<<"enter head element = ";
    cin>>x;

    node* head=new node(x);
    node* mover=head;

    for(int i=1;i<n;i++){
        int x;
        cout<<"enter element ";
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

node* insert(node* head,int p,int v){
    if(head==NULL){
        if(p==1){
            node* head=new node(v);
        return head;
        }
        else{
            return NULL;
        }
    }
    if(p==1){
        node* a=new node(v);
        a->next=head;
        return a;
    }

    int count=0;
    node*temp=head;
    while(temp){
        count++;
        if(count==p-1){
            node* x=new node(v);
            x->next=temp->next;
            temp->next=x;
            return head;
        }
        temp=temp->next;
}
 return head;
}
int main(){
    int n;
    cout<<"enter how many nodes you want =";
    cin>>n;

    node*head=create(n);
    cout<<"your linked list is = ";
    print(head);

    int p;
    cout<<"enter in which position you want to insert element ";
    cin>>p;

    int v;
    cout<<"which element you want to insert =";
    cin>>v;

    head=insert(head,p,v);
    print(head);

    return 0;
}
*****************************************************************************
*/
/*
insertion by value
**************************************************************************
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;

    node(int data1){
        data=data1;
        next=NULL;
    }

    node(int data1, node* next1){
        data=data1;
        next=next1;
    }
};

node* create(int n){
    int x;
    cout<<"enter head value ";
    cin>>x;

    node* head=new node(x);
    node* mover=head;

    for(int i=1;i<n;i++){
        int x;
        cout<<"enter element ";
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

node* insert(node* head,int v,int el){
    if(head==NULL){
        return NULL;
    }

    if(head->data==el){
        node* x=new node(v);
        x->next=head;
        return x;
    }

    node* temp=head;

    while(temp->next!=nullptr){
        if(temp->next->data==el){
            node* x=new node(v);
            x->next=temp->next;
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;

}

int main(){
    int n;
    cout<<"enter how many nodes you want";
    cin>>n;

    node* head=create(n);
    cout<<"your linked list is =";
    print(head);

    int v;
    cout<<"enter value";
    cin>>v;

    int el;
    cout<<"enter befor which elemet you want to enter";
    cin>>el;

    head=insert(head,v,el);
    if(head==NULL){
        cout<<"not found";
    }
    else{
    print(head);
    }
    return 0;
    ********************************************************************
}*/

#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;

    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    }

    node(int data1)
    {
        data = data1;
        next = NULL;
    }
};
node *create(int n)
{
    if (n == 0)
    {
        return NULL;
    }
    int x;
    cout << "enter head value";
    cin >> x;
    node *head = new node(x);
    node *mover = head;
    for (int i = 1; i < n; i++)
    {
        int x;
        cout << "enter element";
        cin >> x;
        node *temp = new node(x);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

node *addll(node *head, int val)
{
    if(head==NULL){
        node* temp=new node(val);
        return temp;
    }
    if(head->data>val){
        node* temp=new node(val);
        temp->next=head;
        return temp;
    }
    
    node* prev=NULL;
    node* temp=head;
    while(temp){

        if(val<temp->data){
            node* a=new node(val);
            prev->next=a;
            a->next=temp;
            break;
        }
        else if(temp->next==NULL){
            temp->next=new node(val);
            break;
        }
        prev=temp;
        temp=temp->next;

    }
    return head;
 
}
int main()
{
    int n;
    cout << "enter no of nodes";
    cin >> n;

    node *head = create(n);
    node *temp = head;

    while (temp)
    {
        cout << temp->data << ",";
        temp = temp->next;
    }

    int val;
    cout << "enter val";
    cin >> val;

    head = addll(head, val);
    temp = head;

    while (temp)
    {
        cout << temp->data << ",";
        temp = temp->next;
    }

    return 0;
}